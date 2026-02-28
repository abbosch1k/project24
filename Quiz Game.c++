#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;

    cout << "1) 5 + 3 = ?\n1) 6\n2) 8\n3) 10\n";
    cin >> answer;
    if(answer == 2) score++;

    cout << "2) 10 / 2 = ?\n1) 2\n2) 5\n3) 8\n";
    cin >> answer;
    if(answer == 2) score++;

    cout << "Score: " << score << "/2\n";

    return 0;
}
