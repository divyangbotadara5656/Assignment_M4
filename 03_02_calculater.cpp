#include <iostream>
using namespace std;

class MathOperations {
private:
    int num1, num2; // Private member variables for operands

public:
    // Constructor to initialize operands
    MathOperations(int first, int second) {
        num1 = first;
        num2 = second;
    }

    // Function to perform addition
    void add() {
        cout << "\n\n\t Addition = " << num1 + num2;
    }

    // Function to perform subtraction
    void subtract() {
        cout << "\n\n\t Subtraction = " << num1 - num2;
    }

    // Function to perform division
    void divide() {
        if (num2 != 0) {
            cout << "\n\n\t Division = " << num1 / num2;
        } else {
            cout << "\n\n\t Division = Undefined (division by zero)";
        }
    }

    // Function to perform multiplication
    void multiply() {
        cout << "\n\n\t Multiplication = " << num1 * num2;
    }
};

int main() {
    int value1, value2;

    // Input values
    cout << "Enter value one: ";
    cin >> value1;
    cout << "Enter value two: ";
    cin >> value2;

    // Create MathOperations object with the given values
    MathOperations mo(value1, value2);

    // Perform calculations
    mo.add();
    mo.subtract();
    mo.divide();
    mo.multiply();

    return 0;
}

