#pragma once

#include "GameObj.cpp"
#include <utility>

class MotionObj : public virtual GameObj {
protected:

    std::pair<int, int> velocity; // pixels per frame

    std::pair<int, int> acceleration; // pixels per frame per frame

public:

    MotionObj(std::pair<int, int> pos_, std::pair<int, int> vel_, std::pair<int, int> acc_) :
        GameObj(pos_), velocity(vel_), acceleration(acc_) {}
    
    void setXVelocity(int x) {
        velocity.first = x;
    }

    void setYVelocity(int y) {
        velocity.second = y;
    }

    void setXAccel(int x) {
        acceleration.first = x;
    }

    void setYAccel(int y) {
        acceleration.second = y;
    }

    int getXVelocity() {
        return velocity.first;
    }

    int getYVelocity() {
        return velocity.second;
    }

    int getXAcceleration() {
        return acceleration.first;
    }

    int getYAcceleration() {
        return acceleration.second;
    }

    void updatePos() { // update position based on velocity
        setX(getX() + velocity.first);
        setY(getY() + velocity.second);

        coordinates.first += velocity.first;
        coordinates.second += velocity.second;
    }

    void updateVel() {
        velocity.first += acceleration.first;
        velocity.second += acceleration.second;
    }

};