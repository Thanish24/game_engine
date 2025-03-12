#pragma once

#include <memory>
#include <vector>
#include <typeinfo>
#include "ColliderObj.cpp"
#include "MotionObj.cpp"
#include "VisibleObj.cpp"
#include "GameObj.cpp"

class GameState {
protected:

public:

    std::vector<std::shared_ptr<GameObj>> game_objects;

    std::vector<std::shared_ptr<VisibleObj>> visible;
    std::vector<std::shared_ptr<MotionObj>> movable;
    std::vector<std::shared_ptr<ColliderObj>> collidable; 

    void addObjectInfer(std::shared_ptr<GameObj> o) {

        game_objects.push_back(o);

        auto visPtr = std::dynamic_pointer_cast<VisibleObj>(o);
        if (visPtr) {
            visible.push_back(visPtr);
        }

        auto movPtr = std::dynamic_pointer_cast<MotionObj>(o);
        if (movPtr) {
            movable.push_back(movPtr);
        }

        auto colPtr = std::dynamic_pointer_cast<ColliderObj>(o);
        if (colPtr) {
            collidable.push_back(colPtr);
        }

    }

};
















//get freaky :)