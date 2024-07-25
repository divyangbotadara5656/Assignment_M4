#include <iostream>
using namespace std;

class Calculator {
private:
    int number; // Private member variable

public:
    // Function to get the value for multiplication and cube
    void get_value() {
        cout << "\n\n\t Enter the value for multiplication and cube: ";
        cin >> number;
    }

    // Inline function to perform multiplication
    inline void multiply() {
        cout << "\n\n\t Multiplication of " << number << " = " << number * number;
    }

    // Inline function to perform cube calculation
    inline void cube() {
        cout << "\n\n\t Cube of " << number << " = " << number * number * number;
    }
};

int main() {
    Calculator calc; // Create an object of class Calculator
    calc.get_value(); // Get the value from the user
    calc.multiply();  //
}

