#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1. Add Student\n2. Show Students\n3. Average Grade\n4. Best Student\n0. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1) {
            Student s;
            cout << "Enter name: ";
            cin >> s.name;
            cout << "Enter grade: ";
            cin >> s.grade;
            students.push_back(s);
        }

        else if(choice == 2) {
            for(auto s : students)
                cout << s.name << " - " << s.grade << endl;
        }

        else if(choice == 3) {
            double sum = 0;
            for(auto s : students)
                sum += s.grade;
            if(!students.empty())
                cout << "Average: " << sum / students.size() << endl;
        }

        else if(choice == 4) {
            if(!students.empty()) {
                Student best = students[0];
                for(auto s : students)
                    if(s.grade > best.grade)
                        best = s;
                cout << "Best: " << best.name << " - " << best.grade << endl;
            }
        }

    } while(choice != 0);

    return 0;
}
