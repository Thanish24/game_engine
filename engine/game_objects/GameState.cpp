#include "GameState.h"
#include "ColliderObj.h"
#include "MotionObj.h"
#include "VisibleObj.h"
#include "GameObj.h"
#include <memory>
#include <vector>
#include <typeinfo>



void GameState::addObjectInfer(std::shared_ptr<GameObj> o) {

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
