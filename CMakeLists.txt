cmake_minimum_required(VERSION 3.10.0)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
project(galaxy VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(galaxy test.cpp Display.cpp Pixel.cpp VisibleObj.cpp PositionObj.cpp)

