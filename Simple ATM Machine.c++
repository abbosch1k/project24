#include <iostream>
using namespace std;

int main() {
    int pin = 1234, input;
    double balance = 1000;
    int choice;
    double amount;

    cout << "Enter PIN: ";
    cin >> input;

    if(input != pin) {
        cout << "Wrong PIN!\n";
        return 0;
    }

    do {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n0. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1)
            cout << "Balance: $" << balance << endl;

        else if(choice == 2) {
            cout << "Amount: ";
            cin >> amount;
            balance += amount;
        }

        else if(choice == 3) {
            cout << "Amount: ";
            cin >> amount;
            if(amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient funds!\n";
        }

    } while(choice != 0);

    return 0;
}
