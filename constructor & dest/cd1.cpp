#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;

public:
    BankAccount() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter balance: ";
        cin >> balance;

        cout << "Bank account opened" << endl;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    ~BankAccount() {
        cout << "Bank account closed" << endl;
    }
};

int main() {
    BankAccount acc;
    acc.display();
    return 0;
}
