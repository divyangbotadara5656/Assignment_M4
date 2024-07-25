#include<iostream>
using namespace std;

class PersonalDetails {
protected:
    string studentName;
    int studentRollNumber;
public:
    void inputDetails() {
        cout << "\n Enter student name: ";
        cin >> studentName;
        cout << "\n Enter student roll number: ";
        cin >> studentRollNumber;
    }
};

class Marks {
protected:
    int mathMarks, scienceMarks, englishMarks;
public:
    void inputMarks() {
        cout << "\n Enter the Math marks: ";
        cin >> mathMarks;
        cout << "\n Enter the Science marks: ";
        cin >> scienceMarks;
        cout << "\n Enter the English marks: ";
        cin >> englishMarks;
    }
};

class MarkSheet : public PersonalDetails, public Marks {
public:
    void showMarkSheet() {
        inputDetails();
        inputMarks();
        cout << "\n\n\t ------Student Mark Sheet----";
        cout << "\n Name: " << studentName;
        cout << "\n Roll No: " << studentRollNumber;
        cout << "\n Maths: " << mathMarks;
        cout << "\n Science: " << scienceMarks;
        cout << "\n English: " << englishMarks;
    }
};

int main() {
    MarkSheet studentMarkSheet;
    studentMarkSheet.showMarkSheet();

    return 0;
}

