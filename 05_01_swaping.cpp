#include <iostream>
using namespace std;

template <class T>
class Swapper {
private:
    T firstValue, secondValue;
public:
    void swapValues(T x, T y) {
        firstValue = x;
        secondValue = y;
        cout << "\n firstValue : " << firstValue;
        cout << "\n secondValue : " << secondValue;
        firstValue = firstValue + secondValue;
        secondValue = firstValue - secondValue;
        firstValue = firstValue - secondValue;
        cout << "\n -----After swapping-----";
        cout << "\n firstValue : " << firstValue;
        cout << "\n secondValue : " << secondValue << "\n";
    }
};

int main() {
    Swapper<int> intSwapper;
    intSwapper.swapValues(3, 5);

    Swapper<float> floatSwapper;
    floatSwapper.swapValues(1.4, 2.4);

    return 0;
}

