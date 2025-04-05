#pragma once

#include <utility>
#include <cstdint>

uint32_t id_gen = 0;

class GameObj {

protected:

    std::pair<int, int> coordinates;
    uint32_t id;

public:

    GameObj(int x, int y);

    GameObj(std::pair<int, int> coordinates_);

    GameObj();

    virtual ~GameObj();

    void setCoordinates(int x, int y);

    void setX(int x);

    void setY(int y);

    std::pair<int, int> getCoordinates() const;

    int getX() const;

    int getY() const;

};