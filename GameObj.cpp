#pragma once

#include <utility>

class GameObj {

protected:

    std::pair<int, int> coordinates;

public:

    GameObj(int x, int y) : coordinates(std::make_pair(x, y)) {}

    GameObj(std::pair<int, int> coordinates_) : coordinates(coordinates_) {}

    GameObj() : coordinates(std::make_pair(0, 0)) {}

    void setCoordinates(int x, int y) {
        coordinates.first = x;
        coordinates.second = y;
    }

    void setX(int x) {
        coordinates.first = x;
    }

    void setY(int y) {
        coordinates.second = y;
    }

    std::pair<int, int> getCoordinates() const {
        return coordinates;
    }

    int getX() const {
        return coordinates.first;
    }

    int getY() const {
        return coordinates.second;
    }

};