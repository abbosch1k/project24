#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int length;

    cout << "Password length: ";
    cin >> length;

    string password;
    for(int i = 0; i < length; i++)
        password += chars[rand() % chars.size()];

    cout << "Generated Password: " << password << endl;

    return 0;
}
