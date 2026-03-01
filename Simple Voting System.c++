#include <iostream>
using namespace std;

int main() {
    int votesA = 0, votesB = 0, choice;

    do {
        cout << "\n1. Vote Candidate A\n2. Vote Candidate B\n3. Show Results\n0. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1) votesA++;
        else if(choice == 2) votesB++;
        else if(choice == 3) {
            cout << "Candidate A: " << votesA << " votes\n";
            cout << "Candidate B: " << votesB << " votes\n";

            if(votesA > votesB) cout << "Winner: A\n";
            else if(votesB > votesA) cout << "Winner: B\n";
            else cout << "Draw!\n";
        }

    } while(choice != 0);

    return 0;
}
