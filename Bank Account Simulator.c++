#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() { balance = 0; }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Not enough money!\n";
    }

    void showBalance() {
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    double amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Balance\n0. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Amount: ";
            cin >> amount;
            account.deposit(amount);
        }

        else if(choice == 2) {
            cout << "Amount: ";
            cin >> amount;
            account.withdraw(amount);
        }

        else if(choice == 3) {
            account.showBalance();
        }

    } while(choice != 0);

    return 0;
}
