#pragma once

#include <cstdint>

class AsynchCollisionEvent {
protected:

    uint32_t id;
    uint32_t objId1;
    uint32_t objId2;

public:

    AsynchCollisionEvent(uint32_t id_, uint32_t objId1_, uint32_t objId2_) : 
        id(id_), objId1(objId1_), objId2(objId2_) {}

};