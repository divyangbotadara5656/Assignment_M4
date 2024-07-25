/*
4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/
#include <iostream>
using namespace std;

class Circle {
private:
    int radius;

public:
    // Get the radius of the circle from the user
    void getRadius() {
        cout << "Enter value of circle radius : ";
        cin >> radius;
    }

    // Calculate and display the area of the circle
    void calculateArea() {
        float area = 3.14 * radius * radius;
        cout << "\n\n\t Area of the circle : " << area;
    }

    // Calculate and display the circumference of the circle
    void calculateCircumference() {
        float circumference = 2 * 3.14 * radius;
        cout << "\n\n\t Circumference of the circle : " << circumference;
    }
};

int main() {
    Circle c1;
}
    // Get the radius of the circle

