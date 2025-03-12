#include "GameObj.h"
#include "ColliderObj.h"
#include <utility>

/*
// functions:
// stopping colliding objects, knowing if an other object is within bounds
*/

ColliderObj::~ColliderObj() = default;

ColliderObj::ColliderObj(std::pair<int, int> dim_) : dimensions(dim_) {}
ColliderObj::ColliderObj(int x, int y) : dimensions(std::make_pair(x, y)) {}

