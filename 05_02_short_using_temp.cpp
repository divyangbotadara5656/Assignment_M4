#include <iostream>
using namespace std;

template <class T>
class ArraySorter {
    T* array;
    int size;
public:
    // Constructor to initialize the array and its size
    ArraySorter(T values[], int n) {
        if (n <= 0) {
            throw invalid_argument("Empty array provided");
        }
        size = n;
        array = new T[size];
        for (int i = 0; i < size; ++i) {
            array[i] = values[i];
        }
    }

    // Destructor to clean up allocated memory
    ~ArraySorter() {
        delete[] array;
    }

    // Function to swap two elements
    void swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }

    // Function to perform selection sort
    void sort() {
        for (int i = 0; i < size - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < size; j++) {
                if (array[j] < array[minIndex]) {
                    minIndex = j;
                }
            }
            swap(array[minIndex], array[i]);
        }
    }

    // Function to display the sorted array
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    int intArray[] = { 5, 4, 3, 5, 1, 2 };
    int intLen = sizeof(intArray) / sizeof(intArray[0]);
    ArraySorter<int> intSorter(intArray, intLen);
    intSorter.sort();
    intSorter.display();

    float floatArray[] = { 1.2, 4.2, 5.3, 9.2, 1.1 };
    int floatLen = sizeof(floatArray) / sizeof(floatArray[0]);
    ArraySorter<float> floatSorter(floatArray, floatLen);
    floatSorter.sort();
    floatSorter.display();

    return 0;
}

