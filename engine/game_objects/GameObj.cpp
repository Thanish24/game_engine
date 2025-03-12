#include "GameObj.h"
#include <utility>


GameObj::GameObj(int x, int y) : coordinates(std::make_pair(x, y)) {}

GameObj::GameObj(std::pair<int, int> coordinates_) : coordinates(coordinates_) {}

GameObj::GameObj() : coordinates(std::make_pair(0, 0)) {}

GameObj::~GameObj() = default;

void GameObj::setCoordinates(int x, int y) {
    coordinates.first = x;
    coordinates.second = y;
}

void GameObj::setX(int x) {
    coordinates.first = x;
}

void GameObj::setY(int y) {
    coordinates.second = y;
}

std::pair<int, int> GameObj::getCoordinates() const {
    return coordinates;
}

int GameObj::getX() const {
    return coordinates.first;
}

int GameObj::getY() const {
    return coordinates.second;
}
