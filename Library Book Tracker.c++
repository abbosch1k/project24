#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string title;
    bool available;
};

int main() {
    vector<Book> library = {
        {"C++ Basics", true},
        {"Algorithms", true},
        {"Data Structures", true}
    };

    int choice;

    do {
        cout << "\n1. Show Books\n2. Borrow Book\n0. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1) {
            for(int i = 0; i < library.size(); i++)
                cout << i+1 << ". " << library[i].title 
                     << " - " << (library[i].available ? "Available" : "Borrowed") << endl;
        }

        else if(choice == 2) {
            int index;
            cout << "Book number: ";
            cin >> index;
            if(index > 0 && index <= library.size()) {
                if(library[index-1].available) {
                    library[index-1].available = false;
                    cout << "Borrowed!\n";
                } else
                    cout << "Already borrowed!\n";
            }
        }

    } while(choice != 0);

    return 0;
}
