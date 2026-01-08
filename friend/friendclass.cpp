#include <iostream>
using namespace std;

class Account {
private:
    int balance;

public:
    Account(int b) {
        balance = b;
    }

    friend class Bank;
};

class Bank {
public:
    void showBalance(Account acc) {
        cout << "Account Balance: " << acc.balance << endl;
    }

    void addMoney(Account acc, int amount) {
        cout << "Balance after deposit: "
             << acc.balance + amount << endl;
    }
};

int main() {
    Account a1(5000);
    Bank b1;

    b1.showBalance(a1);
    b1.addMoney(a1, 2000);

    return 0;
}
