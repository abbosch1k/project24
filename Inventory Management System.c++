#include <iostream>
#include <vector>
using namespace std;

struct Product {
    string name;
    int quantity;
    double price;
};

int main() {
    vector<Product> inventory;
    int choice;

    do {
        cout << "\n1. Add Product\n2. Show Products\n3. Sell Product\n0. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1) {
            Product p;
            cout << "Name: ";
            cin >> p.name;
            cout << "Quantity: ";
            cin >> p.quantity;
            cout << "Price: ";
            cin >> p.price;
            inventory.push_back(p);
        }

        else if(choice == 2) {
            for(int i = 0; i < inventory.size(); i++)
                cout << i+1 << ". " << inventory[i].name 
                     << " | Qty: " << inventory[i].quantity 
                     << " | $" << inventory[i].price << endl;
        }

        else if(choice == 3) {
            int index, amount;
            cout << "Product number: ";
            cin >> index;
            cout << "Amount to sell: ";
            cin >> amount;

            if(index > 0 && index <= inventory.size() &&
               inventory[index-1].quantity >= amount) {
                inventory[index-1].quantity -= amount;
                cout << "Sold!\n";
            } else {
                cout << "Not enough stock!\n";
            }
        }

    } while(choice != 0);

    return 0;
}
