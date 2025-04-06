#include "ColliderObj.h"
#include "GameObj.h"
#include "MotionObj.h"
#include "VisibleObj.h"
#include <utility>
#include <memory>
#include <vector>
#include "../display_system/Pixel.h"

class Player1 : public virtual ColliderObj,
    public virtual GameObj, public virtual MotionObj, public virtual VisibleObj {

    int orientation = -1; // -1 left, 1 right
    int health = 5; // 5 hits before deaths
    sprite alive = 
        {{Pixel(' ', Colors::BLUE, 1), Pixel(' ', Colors::BLUE, 1)},
            {Pixel(' ', Colors::BLUE, 1), Pixel(' ', Colors::BLUE, 1)}};
    
    sprite dead = 
        {{Pixel(' ', Colors::BLACK, 1), Pixel(' ', Colors::BLACK, 1)},
            {Pixel(' ', Colors::BLACK, 1), Pixel(' ', Colors::BLACK, 1)}};

    std::vector<sprite> sprites = {alive, dead};

    Player1() : ColliderObj(2, 2),
        MotionObj(std::make_pair(100, 120),std::make_pair(0, 0), std::make_pair(0, -1)), 
        VisibleObj(1, sprites, 0, std::make_pair(100, 120) ) {}

};