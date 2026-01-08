#include <iostream>
using namespace std;

class Account {
protected:
    int accNo;
    float balance;

public:
    Account() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;

        cout << "Account opened" << endl;
    }

    void displayAccount() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }

    ~Account() {
        cout << "Account closed" << endl;
    }
};

class SavingsAccount : public Account {
private:
    float interest;

public:
    SavingsAccount() {
        cout << "Enter Interest Rate: ";
        cin >> interest;

        cout << "Savings account activated" << endl;
    }

    void displaySavings() {
        displayAccount();
        cout << "Interest Rate: " << interest << "%" << endl;
    }

    ~SavingsAccount() {
        cout << "Savings account deactivated" << endl;
    }
};

int main() {
    SavingsAccount acc;
    acc.displaySavings();
    return 0;
}
