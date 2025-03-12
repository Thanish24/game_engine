#pragma once

#include "GameObj.cpp"
#include <utility>

/*
// functions:
// stopping colliding objects, knowing if an other object is within bounds
*/
class ColliderObj : public virtual GameObj {
protected:

    std::pair<int, int> dimensions;

public:

    ColliderObj(std::pair<int, int> dim_) : dimensions(dim_) {}
    ColliderObj(int x, int y) : dimensions(std::make_pair(x, y)) {}

};