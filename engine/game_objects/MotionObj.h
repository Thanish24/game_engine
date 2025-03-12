#pragma once

#include "GameObj.h"
#include <utility>

class MotionObj : public virtual GameObj {
protected:

    std::pair<int, int> velocity; // pixels per frame

    std::pair<int, int> acceleration; // pixels per frame per frame

public:

    MotionObj(std::pair<int, int> pos_, std::pair<int, int> vel_, std::pair<int, int> acc_);

    virtual ~MotionObj();
    
    void setXVelocity(int x);

    void setYVelocity(int y);

    void setXAccel(int x);

    void setYAccel(int y);

    int getXVelocity();

    int getYVelocity();

    int getXAcceleration();

    int getYAcceleration();

    void updatePos(); // update position based on velocity

    void updateVel();

};