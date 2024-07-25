#include<iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    int isValidDate() {
        bool validDay = day > 0 && day <= 31;
        bool validMonth = month > 0 && month <= 12;
        bool validYear = year != 0;

        if (validDay && validMonth && validYear) {
            return 1;
        } else {
            cout << "Your date " << day << "/" << month << "/" << year << " is not valid..";
            return 0;
        }
    }
};

int main() {
    int day, month, year;
    cout << "\n Enter day: ";
    cin >> day;
    cout << "\n Enter month: ";
    cin >> month;
    cout << "\n Enter year: ";
    cin >> year;

    Date dateObj;
    dateObj.setDate(day, month, year);

    int isValid = dateObj.isValidDate();
    if (isValid) {
        cout << "Your date " << day << "/" << month << "/" << year << " is valid!";
    }

    return 0;
}

