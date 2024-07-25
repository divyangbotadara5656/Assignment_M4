#include<iostream>
using namespace std;

class Student {
protected:
    int studentRollNumber;

public:
    // Set the roll number of the student
    void setRollNumber(int roll) {
        studentRollNumber = roll;
    }
};

class Marks : public Student {
protected:
    int subject1;
    int subject2;

public:
    // Set the marks obtained in two subjects
    void setMarks(int s1, int s2) {
        subject1 = s1;
        subject2 = s2;
    }
};

class ReportCard : public Marks {
private:
    int totalMarks;

public:
    // Calculate the total marks obtained
    void calculateTotal() {
        totalMarks = subject1 + subject2;
    }

    // Display the roll number, marks in subjects, and total marks
    void displayDetails() {
        cout << "\n Roll Number: " << studentRollNumber;
        cout << "\n Subject 1: " << subject1 << " / Subject 2: " << subject2;
        cout << "\n Total Marks: " << totalMarks;
    }
};

int main() {
    ReportCard rc;

    // Set the roll number
    rc.setRollNumber(50);

    // Set the marks obtained in two subjects
    rc.setMarks(80, 90);

    // Calculate the total marks
    rc.calculateTotal();

    // Display the details
    rc.displayDetails();

    return 0;
}

