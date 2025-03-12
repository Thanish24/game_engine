#pragma once

#include <memory>
#include <vector>
#include <typeinfo>
#include "ColliderObj.h"
#include "MotionObj.h"
#include "VisibleObj.h"
#include "GameObj.h"

class GameState {
protected:

public:

    std::vector<std::shared_ptr<GameObj>> game_objects;

    std::vector<std::shared_ptr<VisibleObj>> visible;
    std::vector<std::shared_ptr<MotionObj>> movable;
    std::vector<std::shared_ptr<ColliderObj>> collidable; 

    void addObjectInfer(std::shared_ptr<GameObj> o);

};