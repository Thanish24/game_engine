cmake_minimum_required(VERSION 3.10.0)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
project(galaxy VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Boost 1.74 REQUIRED COMPONENTS thread system)

# Check if Boost was found
if(Boost_FOUND)
    message(STATUS "Boost found: ${Boost_VERSION}")
else()
    message(FATAL_ERROR "Boost not found. Please install Boost or specify its location.")
endif()

include_directories(
    ${Boost_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/engine
    ${CMAKE_SOURCE_DIR}/engine/display_system
    ${CMAKE_SOURCE_DIR}/engine/game_objects
    ${CMAKE_SOURCE_DIR}/engine/event_streamer
    ${CMAKE_SOURCE_DIR}/engine/game_server
)


set(SOURCES
    engine/game_objects/ColliderObj.cpp
    engine/display_system/Display.cpp
    engine/game_objects/GameObj.cpp
    engine/game_objects/GameState.cpp
    engine/game_objects/MotionObj.cpp
    engine/display_system/Pixel.cpp
    engine/game_objects/VisibleObj.cpp
    engine/event_streamer/AsynchEventStreamer.cpp
    engine/event_streamer/SyncEventStreamer.cpp
    engine/game_server/GameServer.cpp
    engine/game_objects/red_v_blue/Player1.cpp
    engine/game_objects/red_v_blue/Player2.cpp
)

add_executable(galaxy ${SOURCES})


target_link_libraries(galaxy Boost::system Boost::thread) # Link against required libraries


