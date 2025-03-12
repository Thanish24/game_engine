cmake_minimum_required(VERSION 3.10.0)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
project(galaxy VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(
    ${CMAKE_SOURCE_DIR}/engine
    ${CMAKE_SOURCE_DIR}/engine/display_system
    ${CMAKE_SOURCE_DIR}/engine/game_objects
)

set(SOURCES
    engine/game_objects/ColliderObj.cpp
    engine/display_system/Display.cpp
    engine/game_objects/GameObj.cpp
    engine/game_objects/GameState.cpp
    engine/game_objects/MotionObj.cpp
    engine/display_system/Pixel.cpp
    engine/game_objects/VisibleObj.cpp
)

add_executable(galaxy ${SOURCES})

