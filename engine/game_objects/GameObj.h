#pragma once

#include <utility>

class GameObj {

protected:

    std::pair<int, int> coordinates;

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