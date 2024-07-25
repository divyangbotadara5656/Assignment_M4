#include <iostream>
using namespace std;

class NumberComparer {
private:
    int num1;
    int num2;

public:
    // Constructor to initialize the values
    NumberComparer(int x, int y) {
        num1 = x;
        num2 = y;
    }

    // Declare friend function to find the maximum number
    friend void findMax(NumberComparer);
};

void findMax(NumberComparer obj) {
    // Find and display the maximum number
    if (obj.num1 > obj.num2) {
        cout << "Max number : " << obj.num1;
    } else {
        cout << "Max number : " << obj.num2;
    }
}

int main() {
    // Initialize object with values
    NumberComparer nc(550, 60);

    // Find and display the maximum number
    findMax(nc);

    return 0;
}

