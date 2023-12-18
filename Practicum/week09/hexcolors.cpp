#include <iostream>

int main() {
    int color = 0xA21616;

    int red = (color >> 16) & 0xFF;
    int green = (color >> 8) & 0xFF;
    int blue = (color)&0xFF;

    std::cout << "Red: " << red << std::endl;
    std::cout << "Green: " << green << std::endl;
    std::cout << "Blue: " << blue << std::endl;

    return 0;
}
