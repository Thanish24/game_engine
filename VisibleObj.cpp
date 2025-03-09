# pragma once

#include "Pixel.cpp"
#include "PositionObj.cpp"
#include <vector>
#include <stdexcept>
#include <memory>
#include <utility>

using sprite = std::vector<std::vector<Pixel>>;

class VisibleObj : public virtual PositionObj {
private:

    bool visible;

    std::shared_ptr<std::vector<sprite>> sprites; // make this a reference so multiple objects can have the same sprites

    int activeSprite = -1;

    int layer = 0;

public:

    VisibleObj(int layer_, bool visible_, std::shared_ptr<std::vector<sprite>> sprites_
        , int activeSprite_, std::pair<int, int> coords_) : 
        visible(visible_), sprites(sprites_), activeSprite(activeSprite_),
        PositionObj(coords_), layer(layer) {}

    VisibleObj(bool visible_, std::shared_ptr<std::vector<sprite>> sprites_
        , int activeSprite_, std::pair<int, int> coords_) : 
        visible(visible_), sprites(sprites_), activeSprite(activeSprite_),
        PositionObj(coords_) {}

    VisibleObj(bool visible_, std::shared_ptr<std::vector<sprite>> sprites_, int activeSprite_) : 
        visible(visible_), sprites(sprites_), activeSprite(activeSprite_) {}

    VisibleObj(int layer_, bool visible_, std::shared_ptr<std::vector<sprite>> sprites_, int activeSprite_) : 
        visible(visible_), sprites(sprites_), activeSprite(activeSprite_), layer(layer) {}

    void setVisible(bool v) {
        visible = v;
    }

    bool getVisible() const {
        return visible; 
    }

    int getLayer() const {
        return layer;
    }

    void setSprite(int i) {
        activeSprite = i;
    }

    void setLayer(int l) {
        layer = l;
    }

    sprite getActiveSprite() const {
        if (activeSprite == -1) throw std::runtime_error("active sprite not initialized!");
        return (*sprites)[activeSprite];
    }

};