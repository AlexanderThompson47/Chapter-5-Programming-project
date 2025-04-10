//this is program 4 patterns
#include <iostream>
using namespace std;

int main() {
    const int numRows = 10;

    // Pattern A
    cout << "Pattern A\n";
    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl; // Separate patterns with a blank line

    // Pattern B
    cout << "Pattern B\n";
    for (int i = numRows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}