#pragma once

#include "../game_objects/GameObj.h"
#include <cstdint>
#include <boost/lockfree/queue.hpp>
#include <chrono>
#include <thread>

template <typename Subscriber, typename Event>

class AsynchEventStreamer {
protected:
    
    boost::lockfree::queue<Event> topic;

    uint32_t ids;

public:

    AsynchEventStreamer(size_t size);

    int getNewId();

    void addEvent(Event e);

    bool consumeEvent(Subscriber s);

    bool empty();

    void subscribe(Subscriber s);
    
};