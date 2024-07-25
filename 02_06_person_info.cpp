#include <iostream>
using namespace std;

class RectangularShape {
private:
    int width;
    int length;

public:
    // Get the width and length of the shape from the user
    void getDimensions() {
        cout << "\n\n\t Enter shape width : ";
        cin >> width;
        cout << "\n\n\t Enter shape length : ";
        cin >> length;
    }

    // Calculate and display the area of the shape
    void calculateArea() {
        int area = width * length;
        cout << "\n\n\t Area of Shape : " << area;
    }

    // Calculate and display the perimeter of the shape
    void calculatePerimeter() {
        int perimeter = 2 * (length + width);
        cout << "\n\n\t Perimeter of Shape : " << perimeter;
    }
};

int main() {
    RectangularShape shape;

    // Get the dimensions of the shape
    shape.getDimensions();

    // Calculate and display the area of the shape
    shape.calculateArea();

    // Calculate and display the perimeter of the shape
    shape.calculatePerimeter();

    return 0;
}

