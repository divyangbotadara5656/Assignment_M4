#include <iostream>
using namespace std;

class Individual {
protected:
    string personName;
    int personAge;
public:
    void inputDetails() {
        cout << "\n Enter name: ";
        cin >> personName;
        cout << "\n Enter age: ";
        cin >> personAge;
    }
};

class Pupil : public Individual {
private:
    int gradePercentage;
public:
    void setPercentage(int percentage) {
        gradePercentage = percentage;
        cout << "\n\n Enter pupil info...";
        cout << "\n --------------------------";
        inputDetails();
    }
    void displayPupil() {
        cout << "\n\n Pupil Details - ";
        cout << "\n --------------------------";
        cout << "\n Name: " << personName;
        cout << "\n Age: " << personAge;
        cout << "\n Percentage: " << gradePercentage << "%";
    }
};

class Educator : public Individual {
private:
    int monthlySalary;
public:
    void setSalary(int salary) {
        monthlySalary = salary;
        cout << "\n\n Enter educator info...";
        cout << "\n --------------------------";
        inputDetails();
    }
    void displayEducator() {
        cout << "\n\n Educator Details - ";
        cout << "\n --------------------------";
        cout << "\n Name: " << personName;
        cout << "\n Age: " << personAge;
        cout << "\n Salary: " << monthlySalary << " Rs";
    }
};

int main() {
    Pupil student;
    student.setPercentage(50);

    Educator teacher;
    teacher.setSalary(2000);

    student.displayPupil();
    teacher.displayEducator();

    return 0;
}

