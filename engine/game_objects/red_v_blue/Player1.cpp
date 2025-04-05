#include "ColliderObj.h"
#include "GameObj.h"
#include "MotionObj.h"
#include "VisibleObj.h"
#include <utility>
#include <memory>
#include "../display_system/Pixel.h"

class Player1 : public virtual ColliderObj,
    public virtual GameObj, public virtual MotionObj, public virtual VisibleObj {

protected:

    int orientation = 1; // -1 left, 1 right
    int health = 5; // 5 hits before deaths
    sprite image = 
        {{Pixel(), Pixel()}, {Pixel(), Pixel()}};

public:

    Player1() : ColliderObj(2, 2),
        MotionObj(std::make_pair(20, 120),std::make_pair(0, 0), std::make_pair(0, -1)), 
        VisibleObj() {}

};