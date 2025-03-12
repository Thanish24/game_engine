#include "Pixel.h"

#include <string>
#include <iostream>


Pixel::Pixel(char c_, std::string color_, bool active_) : character(c_), color(color_), active(active_) {}

Pixel::Pixel(char c_, bool active_) : character(c_), color(""), active(active_) {}

Pixel::Pixel(char c_, std::string color_) : character(c_), color(color_), active(true) {}

Pixel::Pixel(char c_) : character(c_), color(""), active(true) {}


// overload operator for easy printing with color
std::ostream& operator<<(std::ostream& os, const Pixel& pixel) {
    if (pixel.active) {
        os << pixel.color << pixel.character << "\033[0m";
    }
    return os;
}