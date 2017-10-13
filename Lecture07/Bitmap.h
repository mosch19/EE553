//
// Created by mosch on 10/13/17.
//

#pragma once

#include <cstdint>
#if 0
//TODO: make color object to encapsulate details
class Color {

};
#endif
class Bitmap {
private:

public:
    typedef uint32_t Color;
    // fast functions should be in header file
    Bitmap(uint32_t rows, uint32_t cols);
    ~Bitmap();
    Bitmap(const Bitmap& orig);
    operator = (const Bitmap& orig);
    void horizLine(uint32_t x1, uint32_t x2, uint32_t y, Color c);
    void vertLine(uint32_t y1, uint32_t y2, uint32_t x, Color c);
    Bitmap(Bitmap&& orig);  // move constructor
    // draw a line at arbitrary angle
    void line(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color);
    void antialiasedLine(uint32_t x1, uint32_t y1, uint32_t x2, uintmax_t y2, Color);
    void drawEllipse(uint32_t xCenter, uint32_t yCenter, uint32_t width, uintmax_t height, Color);
    void fillEllipse(uint32_t x1, uint32_t y1, uint32_t width, uintmax_t height, Color);
    void drawRectangle(uint32_t x, uint32_t y, uint32_t width, uintmax_t height, Color);
    void fill(uint32_t x, uint32_t y, Color c);
};