#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess number (1-100)\n";

    do {
        cin >> guess;

        if(guess > secret)
            cout << "Too high!\n";
        else if(guess < secret)
            cout << "Too low!\n";
        else
            cout << "Correct!\n";

    } while(guess != secret);

    return 0;
}
