
/*
2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    int balance;
    int balanceAfterDeposit;
    int balanceAfterWithdraw;

public:
    // Assign values to the bank account details
    void assignValues() {
        depositorName = "Bhambhana Divyesh";
        cout << "\n\n\t Name : " << depositorName;
        accountNumber = 13291329;
        cout << "\n\n\t A/C number : " << accountNumber;
        accountType = "saving";
        cout << "\n\n\t Account type : " << accountType;
        balance = 100;
        cout << "\n\n\t A/C balance : " << balance;
    }

    // Deposit an amount into the account
    void depositAmount() {
        int deposit = 50;
        balanceAfterDeposit = balance + deposit;
        cout << "\n\n\t Deposit successful : 50 . New balance: " << balanceAfterDeposit;
    }

    // Withdraw an amount after checking balance
    void withdrawAmount() {
        int withdrawal = 100;
        balanceAfterWithdraw = balanceAfterDeposit - withdrawal;
        cout << "\n\n\t Withdraw successful : 100 . New balance: " << balanceAfterWithdraw;
    }

    // Display the name and balance of the depositor
    void displayNameAndBalance() {
        cout << "\n\n\t Name : " << depositorName << " \n\t Balance : " << balanceAfterWithdraw;
    }
};

int main() {
    BankAccount account;
    
    // Assign values to the account
    account.assignValues();
    cout << "\n----------------------------------------------------------------------------";
    
    // Deposit an amount
    account.depositAmount();
    cout << "\n----------------------------------------------------------------------------";
    
    // Withdraw an amount
    account.withdrawAmount();
    cout << "\n----------------------------------------------------------------------------";
    
    // Display the name and balance
    account.displayNameAndBalance();

    return 0;
}

