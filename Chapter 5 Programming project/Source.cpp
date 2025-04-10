//this is program 3 population bar chart
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
//you can enter whatever you want for the town name but you have to enter "People.txt" or the numbers wont show up
//this part is where you enter the data
int main() {
    string townName, fileName;
    cout << "Enter the name of the town (whatever you want): ";
    getline(cin, townName);
    cout << "Enter the name of the data file (People.txt or it will give error): ";
    cin >> fileName;
    //the error happens when you put the fileName in wrong
    ifstream dataFile(fileName);

    if (!dataFile) {
        cerr << "Error opening file: " << fileName << endl;
        return 1;
    }

    cout << "\nPopulation Growth Bar Chart for " << townName << "\n" << endl;

    int year, population;
    while (dataFile >> year >> population) {
        cout << year << " | ";
        for (int i = 0; i < population / 1000; i++) {
            cout << '*';
        }
        cout << " (" << population << ")" << endl;
    }

    dataFile.close();
    return 0;
}