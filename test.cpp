#include "Display.hpp"
#include "Pixel.hpp"
#include <iostream>
#include <thread>
#include <chrono>

int main() {

    Display display(20, 40, 120);

    display.startDisplay();
    
    // basic frame rate tester animation, seems to be working well at 140 fps

    while (true) {

        for (int i = 0; i < display.getHeight(); i++) {
            for (int j = 0; j < display.getWidth(); j++) {
                /*
                display.setChar(i, j, '.');
                display.setColor(i, j, Colors::BG_CYAN);
                */
                display.setPixel(i, j, {'_', Colors::BG_BRIGHT_MAGENTA});
                std::this_thread::sleep_for(std::chrono::milliseconds(8));
            }
        }


        for (int i = 0; i < display.getHeight(); i++) {
            for (int j = 0; j < display.getWidth(); j++) {
                /*
                display.setChar(i, j, '#');
                display.setColor(i, j, Colors::BG_GREEN);
                */
                display.setPixel(i, j, {'|', Colors::BG_BRIGHT_BLUE});
                std::this_thread::sleep_for(std::chrono::milliseconds(8));
            }
        }

    }
    
    
    int x;
    std::cin >> x;

}