#include <iostream>
using namespace std;

int main() {
    double value;
    int choice;

    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nChoice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    if(choice == 1)
        cout << "Result: " << (value * 9/5 + 32) << endl;
    else if(choice == 2)
        cout << "Result: " << ((value - 32) * 5/9) << endl;
    else
        cout << "Invalid choice!\n";

    return 0;
}
