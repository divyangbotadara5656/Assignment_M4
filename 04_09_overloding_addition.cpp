#include<iostream>
using namespace std;

class Vector {
    int value;
public:
    Vector() {
    }
    Vector(int x) {
        value = x;
    }
    void display() {
        cout << "Value: " << value;
    }

    Vector operator+(const Vector& obj) const {
        Vector result;
        result.value = value + obj.value;
        return result;
    }
};

int main() {
    Vector vec1(5);
    Vector vec2(6);
    Vector vecSum;
    vecSum = vec1 + vec2;
    vecSum.display();

    return 0;
}

