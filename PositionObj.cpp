#pragma once

#include <utility>

class PositionObj {

private:

    std::pair<int, int> coordinates;

public:

    PositionObj(int x, int y) : coordinates(std::make_pair(x, y)) {}

    PositionObj(std::pair<int, int> coordinates_) : coordinates(coordinates_) {}

    PositionObj() : coordinates(std::make_pair(0, 0)) {}

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