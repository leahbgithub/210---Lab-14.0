#include <iostream>

using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    // Constructor for Color
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}
    
    // Setters
    void setRed(int r) {
        red = (r >= 0 && r <= 255) ? r : 0;
    }
    
    void setGreen(int g) {
        green = (g >= 0 && g <= 255) ? g : 0;
    }
    
    void setBlue(int b) {
        blue = (b >= 0 && b <= 255) ? b : 0;
    }
    
    // Getters
    int getRed() const {
        return red;
    }
    
    int getGreen() const {
        return green;
    }
    
    int getBlue() const {
        return blue;
    }
    
    // Print statement which handles outputting the RGB conversions of colors
    void print() const {
        cout << "RGB values of Color - " << red << ", " << green << ", " << blue << endl;
    }
};

int main() {
    // Now we create objects of Color
    Color num1;
    Color num2(255, 0, 0); // For red
    Color num3(0, 255, 0); // For green
    Color num4(0, 0, 255); // For blue
    

