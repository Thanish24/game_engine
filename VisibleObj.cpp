# pragma once

#include "Pixel.cpp"
#include "GameObj.cpp"
#include <vector>
#include <stdexcept>
#include <memory>
#include <utility>

using sprite = std::vector<std::vector<Pixel>>;

class VisibleObj : public virtual GameObj {
protected:

    bool visible;

    std::shared_ptr<std::vector<sprite>> sprites; // make this a reference so multiple objects can have the same sprites

    int activeSprite = -1;

public:

    VisibleObj(bool visible_, std::shared_ptr<std::vector<sprite>> sprites_
        , int activeSprite_, std::pair<int, int> coords_) : 
        visible(visible_), sprites(sprites_), activeSprite(activeSprite_),
        GameObj(coords_){}

    VisibleObj(bool visible_, std::shared_ptr<std::vector<sprite>> sprites_, int activeSprite_) : 
        visible(visible_), sprites(sprites_), activeSprite(activeSprite_) {}

    void setVisible(bool v) {
        visible = v;
    }

    bool getVisible() const {
        return visible; 
    }

    void setSprite(int i) {
        activeSprite = i;
    }

    sprite getActiveSprite() const {
        if (activeSprite == -1) throw std::runtime_error("active sprite not initialized!");
        return (*sprites)[activeSprite];
    }

};