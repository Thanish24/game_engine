#pragma once

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <mutex>
#include <string>

/*
// class for drawing images to terminal

*/
class Display {
private:

    int height;
    int width;

    // frame rate cap
    int fps;
    int frameStep;

    bool update;
    std::vector<std::vector<Pixel>> buffer;

    const char START_CHAR = '#';

    bool displayShouldEnd;

    std::mutex mtx;
    std::thread displayWriter;

public:

    Display(int h_, int w_, int fps_);;

    ~Display();

    int getHeight() const;

    int getWidth() const;

    void fillScreen(Pixel c);

    void setPixel(int x, int y, Pixel c);

    void setChar(int x, int y, char c);

    void setColor(int x, int y, std::string color);

    void write();

    void runDisplay();

    void startDisplay();

    void stopDisplay();

};