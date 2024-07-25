#include<iostream>
using namespace std;

class Dimensions {
protected:
    int length;
    int width;
public:
    void inputDimensions() {
        cout << "\n Enter length: ";
        cin >> length;
        cout << "\n Enter width: ";
        cin >> width;
    }
};

class RectangleArea : public Dimensions {
public:
    void displayArea() {
        cout << "\n Area of Rectangle: " << length * width;
    }
};

int main() {
    RectangleArea rectangle;
    rectangle.inputDimensions();
    rectangle.displayArea();

    return 0;
}

