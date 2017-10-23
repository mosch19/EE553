#include <cstdint>
//
// Created by mosch on 10/13/17.
//
int main() {
    const uint32_t RED = 0xFF0000;
    const uint32_t GREEN = 0x00FF00;
    const uint32_t BLUE = 0x0000FF;
    Bitmap b(800, 800); // all pixels 0,0,0,0
    b.horizLine(0, 300, 0, RED);
    b.vertLine(0, 200, 300, BLUE);
    b.line(0, 0, 400, 300, GREEN);   // use Bresenham
    b.antializasedLine(0, 200, 400, 300, 0xFFFF00); // OPTIONAL: extra credit
    b.drawEllipse(500, 500, 200, 100, RED); // c^2 = ax^2 + by^2 // create an ellipse centered on 500, 500 that goes 100 high and 200 wide...wtf
    b.fillEllipse(500, 500, 150, 70, GREEN);
    b.drawRect(700, 600, 50, 50);   // red rectangle
    b.fill(720, 605, BLUE);   // fill in shape so keep going until hit an edge...this homework seems really hard
}
