#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2, ans;

public:
    void getNumbers() {
        cout << " Enter number 1 for operation : ";
        cin >> num1;
        cout << "Enter number 2 for operation : ";
        cin >> num2;
    }

    void addition() {
        ans = num1 + num2;
        cout << "\n\n\t Your Ans :" << ans;
    }

    void subtraction() {
        ans = num1 - num2;
        cout << "\n\n\t Your Ans :" << ans;
    }

    void division() {
        ans = num1 / num2;
        cout << "\n\n\t Your Ans :" << ans;
    }

    void multiplication() {
        ans = num1 * num2;
        cout << "\n\n\t Your Ans :" << ans;
    }
};

int main() {
    int operation;
    Calculator calc;

    // Get the numbers from the user
    calc.getNumbers();

    // Display operation choices
    cout << "\n\n\t Which operation would you like to perform? ";
    cout << "\n\n\t 1. + (Addition)";
    cout << "\n\n\t 2. - (Subtraction)";
    cout << " \n\n\t 3. * (Multiplication)";
    cout << "\n\n\t 4. / (Division)";
    cout << "\n\n\t Enter operation number : ";
    cin >> operation;

    // Perform the chosen operation
    switch (operation) {
    case 1:
        calc.addition();
        break;
    case 2:
        calc.subtraction();
        break;
    case 3:
        calc.multiplication();
        break;
    case 4:
        calc.division();
        break;
    default:
        cout << "\n\n\t Enter right value!";
        break;
    }

    return 0;
}

