#pragma once

#include <string>
#include <iostream>

// color codes
namespace Colors {
    // Foreground colors (text)
    const std::string BLACK          = "\033[30m";
    const std::string RED            = "\033[31m";
    const std::string GREEN          = "\033[32m";
    const std::string YELLOW         = "\033[33m";
    const std::string BLUE           = "\033[34m";
    const std::string MAGENTA        = "\033[35m";
    const std::string CYAN           = "\033[36m";
    const std::string WHITE          = "\033[37m";
    const std::string BRIGHT_BLACK   = "\033[90m"; // Gray
    const std::string BRIGHT_RED     = "\033[91m";
    const std::string BRIGHT_GREEN   = "\033[92m";
    const std::string BRIGHT_YELLOW  = "\033[93m";
    const std::string BRIGHT_BLUE    = "\033[94m";
    const std::string BRIGHT_MAGENTA = "\033[95m";
    const std::string BRIGHT_CYAN    = "\033[96m";
    const std::string BRIGHT_WHITE   = "\033[97m";

    // Background colors
    const std::string BG_BLACK          = "\033[40m";
    const std::string BG_RED            = "\033[41m";
    const std::string BG_GREEN          = "\033[42m";
    const std::string BG_YELLOW         = "\033[43m";
    const std::string BG_BLUE           = "\033[44m";
    const std::string BG_MAGENTA        = "\033[45m";
    const std::string BG_CYAN           = "\033[46m";
    const std::string BG_WHITE          = "\033[47m";
    const std::string BG_BRIGHT_BLACK   = "\033[100m"; // Gray
    const std::string BG_BRIGHT_RED     = "\033[101m";
    const std::string BG_BRIGHT_GREEN   = "\033[102m";
    const std::string BG_BRIGHT_YELLOW  = "\033[103m";
    const std::string BG_BRIGHT_BLUE    = "\033[104m";
    const std::string BG_BRIGHT_MAGENTA = "\033[105m";
    const std::string BG_BRIGHT_CYAN    = "\033[106m";
    const std::string BG_BRIGHT_WHITE   = "\033[107m";

    // Reset code (useful for reference, though not used in << directly)
    const std::string RESET = "\033[0m";
}

struct Pixel {

    char character;
    std::string color; // background or foreground

    bool active;

    Pixel(char c_, std::string color_, bool active_) : character(c_), color(color_), active(active_) {}

    Pixel(char c_, bool active_) : character(c_), color(""), active(active_) {}

    Pixel(char c_, std::string color_) : character(c_), color(color_), active(true) {}

    Pixel(char c_) : character(c_), color(""), active(true) {}

};

// overload operator for easy printing with color
std::ostream& operator<<(std::ostream& os, const Pixel& pixel) {
    os << pixel.color << pixel.character << "\033[0m";
    return os;
}