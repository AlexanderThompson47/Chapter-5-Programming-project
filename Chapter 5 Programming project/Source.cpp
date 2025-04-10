//this is program 5 random number guessing game
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100

    int userGuess;
    int guessCount = 0;

    cout << "I have generated a random number between 1 and 100.\n";
    cout << "Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        guessCount++;

        if (userGuess > randomNumber) {
            cout << "Too high, try again." << endl;
        }
        else if (userGuess < randomNumber) {
            cout << "Too low, try again." << endl;
        }
    } while (userGuess != randomNumber);

    cout << "Congratulations! You guessed the number!" << endl;
    cout << "It took you " << guessCount << " guesses." << endl;

    return 0;
}