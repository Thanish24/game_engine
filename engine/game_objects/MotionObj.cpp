#include "MotionObj.h"
#include "GameObj.h"
#include <utility>

MotionObj::MotionObj(std::pair<int, int> pos_, std::pair<int, int> vel_, std::pair<int, int> acc_) :
        GameObj(pos_), velocity(vel_), acceleration(acc_) {}

MotionObj::~MotionObj() = default;
    
void MotionObj::setXVelocity(int x) {
    velocity.first = x;
}

void MotionObj::setYVelocity(int y) {
    velocity.second = y;
}

void MotionObj::setXAccel(int x) {
    acceleration.first = x;
}

void MotionObj::setYAccel(int y) {
    acceleration.second = y;
}

int MotionObj::getXVelocity() {
    return velocity.first;
}

int MotionObj::getYVelocity() {
    return velocity.second;
}

int MotionObj::getXAcceleration() {
    return acceleration.first;
}

int MotionObj::getYAcceleration() {
    return acceleration.second;
}

void MotionObj::updatePos() { // update position based on velocity
    setX(getX() + velocity.first);
    setY(getY() + velocity.second);

    coordinates.first += velocity.first;
    coordinates.second += velocity.second;
}

void MotionObj::updateVel() {
    velocity.first += acceleration.first;
    velocity.second += acceleration.second;
}
