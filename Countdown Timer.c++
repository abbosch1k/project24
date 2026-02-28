#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;

    while(seconds > 0) {
        cout << "Time left: " << seconds << " seconds\r";
        cout.flush();
        this_thread::sleep_for(chrono::seconds(1));
        seconds--;
    }

    cout << "\nTime's up!\n";

    return 0;
}
