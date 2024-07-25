#include<iostream>
using namespace std;

class BaseClass
{
public:
    void method1() {
        cout << "\n Called BaseClass";
    }
};

class IntermediateClass : public BaseClass
{
public:
    void method2() {
        cout << "\n Called IntermediateClass";
    }
};

class DerivedClass : public IntermediateClass
{
public:
    void method3() {
        cout << "\n Called DerivedClass";
    }

    void displayAll() {
        method1();
        method2();
        method3();
    }
};

int main()
{
    cout << "\n Display all class methods ---";
    DerivedClass obj;
    obj.displayAll();

    return 0;
}

