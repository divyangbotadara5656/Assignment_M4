#include <iostream>
using namespace std;

class Polygon {
private:
    int side1; // Length of side 1
    int side2; // Length of side 2
    int side3; // Length of side 3

public:
    // Constructor to initialize the lengths of the polygon's sides
    Polygon(int s1, int s2, int s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to check the type of triangle
    void determineType() {
        if (side1 == side2 && side2 == side3) {
            cout << "Your triangle is Equilateral";
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "Your triangle is Isosceles";
        } else {
            cout << "Your triangle is Scalene";
        }
    }
};

int main() {
    int s1, s2, s3;

    // Input lengths of the triangle sides
    cout << "\n Enter length of side 1: ";
    cin >> s1;
    cout << "\n Enter length of side 2: ";
    cin >> s2;
    cout << "\n Enter length of side 3: ";
    cin >> s3;

    // Create a Polygon object with the given side lengths
    Polygon triangle(s1, s2, s3);

    // Check and display the type of the triangle
    triangle.determineType();

    return 0;
}

