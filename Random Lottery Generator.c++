#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    cout << "Lottery numbers: ";
    for(int i = 0; i < 6; i++)
        cout << rand() % 49 + 1 << " ";

    cout << endl;
    return 0;
}
