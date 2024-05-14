#include<bits/stdc++.h>
using namespace std;

class Bank {
private:
    int balance;
    int min_withdraw;
    int max_withdraw;

public:
    Bank(int balance) {
        this->balance = balance;
        this->min_withdraw = 100;
        this->max_withdraw = 100000;
    }

    int get_balance() {
        return balance;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(int amount) {
        if (amount < min_withdraw) {
            cout << "Sorry, you cannot withdraw below " << min_withdraw << endl;
        }
        else if (amount > max_withdraw) {
            cout << "Sorry, you cannot withdraw more than " << max_withdraw << endl;
        }
        else {
            balance -= amount;
            cout << "Here is your money: " << amount << endl;
            cout << "Your balance after withdrawal: " << get_balance() << endl;
        }
    }
};

int main() {
    Bank brac(15000);
    brac.withdraw(25);
    brac.withdraw(50000000);
    brac.withdraw(1000);

    Bank dbbl(5000);
    dbbl.deposit(2000);
    dbbl.deposit(2000);
    cout << dbbl.get_balance() << endl;

    return 0;
}
