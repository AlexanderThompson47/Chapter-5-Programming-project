//this is program 1 population
#include <iostream>
using namespace std;

int main() {
    int startingPopulation, days;
    double dailyIncrease;

    // Input Validation for starting population size
    do {
        cout << "Enter the starting number of organisms (minimum 2): ";
        cin >> startingPopulation;
        if (startingPopulation < 2) {
            cout << "Error: Starting population must be at least 2.\n";
        }
    } while (startingPopulation < 2);

    // Input Validation for average daily population increase
    do {
        cout << "Enter the average daily population increase (percentage, non-negative): ";
        cin >> dailyIncrease;
        if (dailyIncrease < 0) {
            cout << "Error: Daily increase must be non-negative.\n";
        }
    } while (dailyIncrease < 0);

    // Input Validation for number of days
    do {
        cout << "Enter the number of days they will multiply (minimum 1): ";
        cin >> days;
        if (days < 1) {
            cout << "Error: Days must be at least 1.\n";
        }
    } while (days < 1);

    // Calculate and display the population size for each day
    cout << "\nDay-by-Day Population Growth:\n";
    int population = startingPopulation;
    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << ": " << population << endl;
        population += population * (dailyIncrease / 100.0); // Increase population by percentage
    }

    return 0;
}