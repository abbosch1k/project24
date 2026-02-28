#include <iostream>
using namespace std;

int main() {
    int num;
    bool prime = true;

    cout << "Enter number: ";
    cin >> num;

    if(num <= 1)
        prime = false;

    for(int i = 2; i <= num/2; i++)
        if(num % i == 0)
            prime = false;

    if(prime)
        cout << "Prime number\n";
    else
        cout << "Not prime\n";

    return 0;
}
