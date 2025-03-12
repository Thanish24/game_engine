#pragma once

#include "GameObj.h"
#include <utility>

/*
// functions:
// stopping colliding objects, knowing if an other object is within bounds
*/
class ColliderObj : public virtual GameObj {
protected:

    std::pair<int, int> dimensions;

public:

    virtual ~ColliderObj();

    ColliderObj(std::pair<int, int> dim_);
    ColliderObj(int x, int y);

};