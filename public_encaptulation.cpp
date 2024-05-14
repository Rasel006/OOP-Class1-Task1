#include<bits/stdc++.h>
using namespace std;

class Bank {
private:
    string holder_name;
    string branch;
    int balance;

public:
    Bank(const string& holder_name, int initial_deposit) : holder_name(holder_name), branch("banani 11"), balance(initial_deposit) {}

    void deposit(int amount) {
        balance += amount;
    }

    int get_balance() const {
        return balance;
    }

    int withdraw(int amount) {
        if (amount < balance) {
            balance -= amount;
            return amount;
        } else {
            cout << "Forkia taka nai" << endl;
            return 0;
        }
    }

    int get_balance_public() const {
        return balance;
    }
};

int main() {
    Bank rafsun("Choooto bro", 10000);

    cout << rafsun.get_balance() << endl;
    rafsun.deposit(40000);
    cout << rafsun.get_balance() << endl;
    cout << rafsun.get_balance_public() << endl;

    return 0;
}
