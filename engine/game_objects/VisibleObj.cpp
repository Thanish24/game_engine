#include "VisibleObj.h"
#include "display_system/Pixel.h"
#include "GameObj.h"
#include <vector>
#include <stdexcept>
#include <memory>
#include <utility>

VisibleObj::VisibleObj(bool visible_, std::shared_ptr<std::vector<sprite>> sprites_
    , int activeSprite_, std::pair<int, int> coords_) : 
    visible(visible_), sprites(sprites_), activeSprite(activeSprite_),
    GameObj(coords_){}

VisibleObj::VisibleObj(bool visible_, std::shared_ptr<std::vector<sprite>> sprites_, int activeSprite_) : 
    visible(visible_), sprites(sprites_), activeSprite(activeSprite_) {}

VisibleObj::~VisibleObj() = default;

void VisibleObj::setVisible(bool v) {
    visible = v;
}

bool VisibleObj::getVisible() const {
    return visible; 
}

void VisibleObj::setSprite(int i) {
    activeSprite = i;
}

sprite VisibleObj::getActiveSprite() const {
    if (activeSprite == -1) throw std::runtime_error("active sprite not initialized!");
    return (*sprites)[activeSprite];
}
