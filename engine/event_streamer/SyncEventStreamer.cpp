#include <deque>
#include "Event.h"
#include <thread>
#include <chrono>
#include "SynchEventStreamer.h"

template <typename Subscriber, typename Event> // functor
int SynchEventStreamer<Subscriber, Event>::getNewId() {
    return ++ids;
}

template <typename Subscriber, typename Event> // functor
void SynchEventStreamer<Subscriber, Event>::addEvent(Event e) {
    topic.push_front(e);
}

template <typename Subscriber, typename Event> // functor
bool SynchEventStreamer<Subscriber, Event>::consumeCollision(Subscriber s) {

    if (topic.empty()) return false;

    s(topic.back());
    topic.pop_back();

    return true;
}

template <typename Subscriber, typename Event> // functor
bool SynchEventStreamer<Subscriber, Event>::empty() {
    return topic.empty();
}

template <typename Subscriber, typename Event> // functor
void SynchEventStreamer<Subscriber, Event>::subscribe(Subscriber s) { // pass in functor

    const auto timeout = std::chrono::milliseconds(100);
    const auto sleepTimer = std::chrono::milliseconds(50);

    auto lastEventTime = std::chrono::steady_clock::now(); 

    while (true) {

        while (consumeEvent(s)) {
            lastEventTime = std::chrono::steady_clock::now();
        }
        
        if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - lastEventTime) >= timeout) {
            std::this_thread::sleep_for(sleepTimer);
            lastEventTime = std::chrono::steady_clock::now();
        } else {
            std::this_thread::yield();
        }

    }

}

