#include<iostream>
using namespace std;

class Cricketer {
private:
    string playerName;
    int playerAge;
public:
    void getDetails() {
        cout << "\n Enter your name: ";
        cin >> playerName;
        cout << "\n Enter your age: ";
        cin >> playerAge;
    }

    void showDetails() {
        cout << "\n Name: " << playerName;
        cout << "\n Age: " << playerAge;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns, averageRuns, bestPerformance;
public:
    void inputData(int runs, int performance) {
        totalRuns = runs;
        bestPerformance = performance;
    }

    void calculateAverage() {
        averageRuns = totalRuns / 20; // Assuming 20 matches for calculation
    }

    void displayData() {
        cout << "\n Total Runs: " << totalRuns;
        cout << "\n Average Runs: " << averageRuns;
        cout << "\n Best Performance: " << bestPerformance;
    }
};

int main() {
    int runs, performance;

    Batsman batsman;
    batsman.getDetails();
    cout << "\n Enter Runs: ";
    cin >> runs;
    cout << "\n Enter Best Performance: ";
    cin >> performance;
    batsman.inputData(runs, performance);
    batsman.calculateAverage();
    batsman.showDetails();
    batsman.displayData();

    return 0;
}

