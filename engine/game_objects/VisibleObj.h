#pragma once

#include "display_system/Pixel.h"
#include "GameObj.h"
#include <vector>
#include <stdexcept>
#include <memory>
#include <utility>

using sprite = std::vector<std::vector<Pixel>>;

class VisibleObj : public virtual GameObj {
protected:

    bool visible;

    std::vector<sprite> sprites; // make this a reference so multiple objects can have the same sprites

    int activeSprite = -1;

public:

    VisibleObj(bool visible_, std::vector<sprite> sprites_
        , int activeSprite_, std::pair<int, int> coords_);

    VisibleObj(bool visible_, std::vector<sprite> sprites_, int activeSprite_);

    virtual ~VisibleObj();

    void setVisible(bool v);

    bool getVisible() const; 

    void setSprite(int i);

    sprite getActiveSprite() const;

};