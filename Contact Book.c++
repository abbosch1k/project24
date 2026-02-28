#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    vector<Contact> contacts;
    int choice;

    do {
        cout << "\n1. Add\n2. Show\n0. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1) {
            Contact c;
            cout << "Name: ";
            cin >> c.name;
            cout << "Phone: ";
            cin >> c.phone;
            contacts.push_back(c);
        }

        else if(choice == 2) {
            for(auto c : contacts)
                cout << c.name << " - " << c.phone << endl;
        }

    } while(choice != 0);

    return 0;
}
