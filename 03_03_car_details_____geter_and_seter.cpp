#include<iostream>
using namespace std;

class Vehicle {
private:
    string manufacturer;
    string type;
    int productionYear;

public:
    Vehicle() {}

    Vehicle(string manu, string typ, int year) {
        manufacturer = manu;
        type = typ;
        productionYear = year;
    }

    Vehicle(Vehicle& obj) {
        manufacturer = obj.manufacturer;
        type = obj.type;
        productionYear = obj.productionYear;
    }

    void display() {
        cout << "\n Manufacturer: " << manufacturer;
        cout << "\n Model: " << type;
        cout << "\n Year: " << productionYear;
    }
};

int main() {
    Vehicle vehicle1("Toyota", "Corolla", 2010), vehicle2;
    vehicle1.display();
    vehicle2 = vehicle1;
    vehicle2.display();

    return 0;
}

