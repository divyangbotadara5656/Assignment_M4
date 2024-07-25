#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber; // Private member variable for account number
    int currentBalance; // Private member variable for current balance
    int depositAmount; // Private member variable for deposit amount
    int balanceAfterDeposit; // Private member variable for balance after deposit
    int withdrawalAmount; // Private member variable for withdrawal amount

public:
    // Constructor to initialize account details
    Account(int num, int balance, int deposit, int withdraw) {
        accountNumber = num;
        currentBalance = balance;
        depositAmount = deposit;
        withdrawalAmount = withdraw;
    }

    // Function to print current balance
    void displayBalance() {
        cout << "\n ----Current Balance----";
        cout << "\n Account Number: " << accountNumber;
        cout << "\n Balance: " << currentBalance;
    }

    // Function to deposit money into the account
    void deposit() {
        cout << "\n Deposit = " << depositAmount;
        balanceAfterDeposit = currentBalance + depositAmount;
        cout << "\n Balance (After Deposit): " << balanceAfterDeposit;
    }

    // Function to withdraw money from the account
    void withdraw() {
        cout << "\n Withdrawal = " << withdrawalAmount;
        cout << "\n Balance (After Withdrawal): " << balanceAfterDeposit - withdrawalAmount;
    }
};

int main() {
    int accNum, initialBalance, deposit, withdraw;

    // Input account details
    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;
    cout << "Enter Deposit Amount: ";
    cin >> deposit;
    cout << "Enter Withdrawal Amount: ";
    cin >> withdraw;

    // Create an Account object with the given details
    Account acc(accNum, initialBalance, deposit, withdraw);

    // Display current balance
    acc.displayBalance();
    cout << "\n -------------------------------";

    // Deposit money and display balance after deposit
    acc.deposit();
    cout << "\n -------------------------------";

    // Withdraw money and display balance after withdrawal
    acc.withdraw();

    return 0;
}

