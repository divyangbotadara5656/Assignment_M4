#include <iostream>
using namespace std;

class ShapeAreaCalculator {
    int length, width;
    float pi = 3.14, multiplier;
public:
    void calculateArea(int l, int w) {
        length = l;
        width = w;
        cout << "\n Area of Rectangle: " << length * width;
    }

    void calculateArea(int base, int height, float factor) {
        length = base;
        width = height;
        multiplier = factor;
        cout << "\n Area of Triangle: " << multiplier * length * width;
    }

    void calculateArea(int radius) {
        length = radius;
        cout << "\n Area of Circle: " << pi * length * length;
    }
};

int main() {
    float factor = 0.5;
    ShapeAreaCalculator calc;
    calc.calculateArea(45, 5);      // Rectangle
    calc.calculateArea(50, 60, factor); // Triangle
    calc.calculateArea(50);         // Circle

    return 0;
}

