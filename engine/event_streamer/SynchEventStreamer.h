#pragma once

template <typename Subscriber, typename EventType> // functor

class SynchEventStreamer {
protected:

    std::deque<EventType> topic;
    int ids = 0;

public:

    int getNewId();

    void addEvent(EventType e);

    bool consumeCollision(Subscriber s);

    bool empty();

    void subscribe(Subscriber s);

};