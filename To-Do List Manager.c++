#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    do {
        cout << "\n1. Add Task\n2. Show Tasks\n3. Remove Task\n0. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
        }

        else if(choice == 2) {
            for(int i = 0; i < tasks.size(); i++)
                cout << i + 1 << ". " << tasks[i] << endl;
        }

        else if(choice == 3) {
            int index;
            cout << "Task number: ";
            cin >> index;
            if(index > 0 && index <= tasks.size())
                tasks.erase(tasks.begin() + index - 1);
        }

    } while(choice != 0);

    return 0;
}
