#include "Event.h"
#include "../game_objects/GameObj.h"
#include <cstdint>
#include <boost/lockfree/queue.hpp>
#include <chrono>
#include <thread>
#include "AsynchEventStreamer.h"

template <typename Subscriber, typename Event>
AsynchEventStreamer<Subscriber, Event>::AsynchEventStreamer(size_t size) : ids(0), topic(size) {}

template <typename Subscriber, typename Event>
int AsynchEventStreamer<Subscriber, Event>::getNewId() {
        return ++ids;
}

template <typename Subscriber, typename Event>
    void AsynchEventStreamer<Subscriber, Event>::addEvent(Event e) {
        topic.push(e);
    }

template <typename Subscriber, typename Event>
bool AsynchEventStreamer<Subscriber, Event>::consumeEvent(Subscriber s) {
    return topic.consume_one(s);
}

template <typename Subscriber, typename Event>
bool AsynchEventStreamer<Subscriber, Event>::empty() {
    return topic.empty();
}

template <typename Subscriber, typename Event>
void AsynchEventStreamer<Subscriber, Event>::subscribe(Subscriber s) { // pass in functor

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
    