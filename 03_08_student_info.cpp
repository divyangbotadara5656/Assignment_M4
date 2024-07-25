#include <iostream>
using namespace std;

class Location {
public:
    string street;
    string city;
    string state;
    string postalCode;

    Location(string street, string city, string state, string postalCode) {
        this->street = street;
        this->city = city;
        this->state = state;
        this->postalCode = postalCode;
    }
};

class Pupil {
    Location* address;
public:
    string name;
    string gradeLevel;
    int rollNumber;
    int marks;

    Pupil(string name, string gradeLevel, int rollNumber, int marks, Location* address) {
        this->name = name;
        this->gradeLevel = gradeLevel;
        this->rollNumber = rollNumber;
        this->marks = marks;
        this->address = address;  // Assign the address pointer
    }

    char calculateGrade() {
        if (marks <= 100 && marks >= 90) {
            return 'A';
        } else if (marks <= 89 && marks >= 80) {
            return 'B';
        } else if (marks <= 79 && marks >= 70) {
            return 'C';
        } else if (marks <= 69 && marks >= 60) {
            return 'D';
        } else if (marks < 60) {
            return 'F';
        } else {
            cout << "Enter valid marks";
            return 'I';  // Indeterminate grade for invalid marks
        }
    }

    void displayInfo() {
        cout << "\nName: " << name;
        cout << "\nClass: " << gradeLevel;
        cout << "\nRoll No: " << rollNumber;
        cout << "\nMarks: " << marks;
        cout << "\nGrade: " << calculateGrade();
        cout << "\nAddress: " << address->street << ", " << address->city << ", " << address->state << ", " << address->postalCode << endl;
    }
};

int main() {
    Location address("123 Main St", "Springfield", "IE", "62704");
    Pupil student("Divyesh", "9th", 23, 60, &address);

    student.displayInfo();
    return 0;
}

