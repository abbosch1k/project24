#include <iostream>
using namespace std;

int main() {
    string word;
    cout << "Enter word: ";
    cin >> word;

    string reversed = "";
    for(int i = word.length()-1; i >= 0; i--)
        reversed += word[i];

    if(word == reversed)
        cout << "Palindrome!\n";
    else
        cout << "Not palindrome!\n";

    return 0;
}
