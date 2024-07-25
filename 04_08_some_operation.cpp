#include<iostream>
using namespace std;

class MathOperations {
    int num1, num2, num3, num4;
public:
    void performOperation(int a, int b, int c, int d) {
        num1 = a;
        num2 = b;
        num3 = c;
        num4 = d;
        cout << "\n Addition of your numbers: " << num1 + num2 + num3 + num4;
    }

    void performOperation(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
        cout << "\n Subtraction of your numbers: " << num1 - num2 - num3;
    }

    void performOperation(int a) {
        num1 = a;
        cout << "\n Multiplication of your number: " << num1 * num1;
    }

    void performOperation(int a, int b) {
        num1 = a;
        num2 = b;
        cout << "\n Division of your numbers: " << num1 / num2;
    }
};

int main() {
    MathOperations obj;
    obj.performOperation(2, 3, 6, 9);  // Addition
    obj.performOperation(205, 103, 20); // Subtraction
    obj.performOperation(2);           // Multiplication
    obj.performOperation(200, 20);     // Division

    return 0;
}

