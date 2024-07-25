#include <iostream>
using namespace std;

class Staff {
private:
    string staffName;   // Private member variable for staff name
    int staffID;        // Private member variable for staff ID
    int staffSalary;    // Private member variable for staff salary

public:
    // Constructor to initialize staff details
    Staff(string name, int id, int salary) {
        staffName = name;
        staffID = id;
        staffSalary = salary;
    }

    // Function to display staff details
    void showDetails() {
        cout << "\n Staff Name: " << staffName;
        cout << "\n Staff ID: " << staffID;
        cout << "\n Staff Salary: " << staffSalary << "\n";
    }

    // Function to adjust salary based on performance
    void evaluatePerformance(string performance);

    // Function to display staff details (used after performance evaluation)
    void display() {
        cout << "\n Staff Name: " << staffName;
        cout << "\n Staff ID: " << staffID;
        cout << "\n Staff Salary: " << staffSalary << "\n";
    }
};

// Definition of the evaluatePerformance function outside the class
void Staff::evaluatePerformance(string performance) {
    if (performance == "a" || performance == "A") {
        staffSalary += staffSalary * 0.20; // Increase salary by 20%
    } else if (performance == "b" || performance == "B") {
        staffSalary += staffSalary * 0.10; // Increase salary by 10%
    } else if (performance == "c" || performance == "C") {
        staffSalary += staffSalary * 0.80; // Increase salary by 80%
    } else if (performance == "d" || performance == "D") {
        staffSalary += staffSalary * 0.20; // Increase salary by 20%
    }
}

int main() {
    // Creating a Staff object with initial details
    Staff s("John Doe", 1329, 2000);

    cout << "\n -----------------------------";
    cout << "\n Initial Staff Details:";
    cout << "\n -----------------------------";
    s.showDetails(); // Display initial details

    // Adjust salary based on performance
    s.evaluatePerformance("e");

    cout << "\n -----------------------------";
    cout << "\n Staff Details after Performance Evaluation";
    cout << "\n -----------------------------";
    s.display(); // Display updated details

    return 0;
}

