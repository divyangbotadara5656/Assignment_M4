#include <iostream>
using namespace std;

class NumberSwap {
private:
    int first;
    int second;

public:
    // Set the values of first and second
    void setValues(int x, int y) {
        first = x;
        second = y;
    }

    // Declare friend function to swap values
    friend void swapValues(NumberSwap);
};

void swapValues(NumberSwap obj) {
    // Swap the values without using a third variable
    obj.first = obj.first + obj.second;
    obj.second = obj.first - obj.second;
    obj.first = obj.first - obj.second;

    // Display the swapped values
    cout << "\n First = " << obj.first;
    cout << "\n Second = " << obj.second;
}

int main() {
    NumberSwap ns;

    // Set initial values
    ns.setValues(50, 60);

    // Swap the values
    swapValues(ns);

    return 0;
}

