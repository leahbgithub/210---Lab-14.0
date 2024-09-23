#include <iostream>

using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}
    
    void setRed(int r) {
        red = (r >= 0 && r <= 255) ? r : 0;
    }
    
    void setGreen(int g) {
        green = (g >= 0 && g <= 255) ? g : 0;
    }
    
    void setBlue(int b) {
        blue = (b >= 0 && b <= 255) ? b : 0;
    }
    
    int getRed() const {
        return red;
    }
    
    int getGreen() const {
        return green;
    }
    
    int getBlue() const {
        return blue;
    }
};
