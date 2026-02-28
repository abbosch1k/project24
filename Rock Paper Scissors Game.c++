#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int user, computer;

    cout << "1=Rock 2=Paper 3=Scissors\nChoice: ";
    cin >> user;

    computer = rand() % 3 + 1;
    cout << "Computer chose: " << computer << endl;

    if(user == computer)
        cout << "Draw!\n";
    else if((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2))
        cout << "You win!\n";
    else
        cout << "Computer wins!\n";

    return 0;
}
