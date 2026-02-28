#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter: number operator number (ex: 5 + 3)\n";
    cin >> a >> op >> b;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': 
            if(b != 0)
                cout << a / b;
            else
                cout << "Error!";
            break;
        default:
            cout << "Invalid operator!";
    }

    return 0;
}
