#pragma once

#include <cstdint>
#include <atomic>
#include <variant> // utilize variant for multiple possible messages
#include "events.pb.h"
#include <string>

class CollisionEvent {
protected:
    
    uint32_t id;
    events::collision data; // define possible events here

public:

    CollisionEvent(uint32_t id_, u_int32_t id1, uint32_t id2) : id(id_) {

        data.set_object1(id1);
        data.set_object2(id2);

    };

};

class KeyEvent {
protected:

    uint32_t id;
    events::key_event data;

public:

    KeyEvent(uint32_t id_, uint32_t key) : id(id_) {
        data.set_key(key);
    };

};