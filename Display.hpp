#pragma once

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <mutex>
#include <string>

#include "Pixel.hpp"


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

    Display(int h_, int w_, int fps_) : height(h_), width(w_), fps(fps_) {
        
        buffer = std::vector<std::vector<Pixel>>(height, std::vector<Pixel>(width, START_CHAR));

        frameStep = 1000/fps;

        update = true;
    }

    ~Display() {
        stopDisplay();
    }

    int getHeight() {
        return height;
    }

    int getWidth() {
        return width;
    }

    void fillScreen(Pixel c) {
        std::lock_guard<std::mutex> lock(mtx);

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                buffer[i][j] = c;
            }
        }

        update = true;

    }

    void setPixel(int x, int y, Pixel c) {

        if (x < height && y < width && x >= 0 && y >= 0) {
            
            std::lock_guard<std::mutex> lock(mtx);

            buffer[x][y] = c;

            update = true;
            
        }

    }

    void setChar(int x, int y, char c) {

        if (x < height && y < width && x >= 0 && y >= 0) {
            
            std::lock_guard<std::mutex> lock(mtx);

            buffer[x][y].character = c;

            update = true;
            
        }

    }

    void setColor(int x, int y, std::string color) {

        if (x < height && y < width && x >= 0 && y >= 0) {
            
            std::lock_guard<std::mutex> lock(mtx);

            buffer[x][y].color = color;

            update = true;
            
        }

    }

    void write() {

        std::lock_guard<std::mutex> lock(mtx);

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                std::cout << buffer[i][j];
            }
            std::cout << '\n';
        }
        std::cout << std::flush;

    }

    void runDisplay() {

        while (!displayShouldEnd) {

            if (update) {
                
                std::cout << "\033[2J\033[1;1H";
                write();
                update = false;

            }

            std::this_thread::sleep_for(std::chrono::milliseconds(frameStep));

        }

    }

    void startDisplay() {

        displayShouldEnd = false;

        displayWriter = std::thread(&Display::runDisplay, this);

    }

    void stopDisplay() {
        displayShouldEnd = true;

        if (displayWriter.joinable()) {
            displayWriter.join();
        }

    }

};