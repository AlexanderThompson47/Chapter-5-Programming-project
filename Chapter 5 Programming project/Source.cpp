//this is program 2 Student line up
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");
    vector<string> names;
    string name;

    // Check if file is successfully opened
    if (!inputFile) {
        cout << "Error: Could not open the file!" << endl;
        return 1;
    }

    // Read names from the file
    while (inputFile >> name) {
        names.push_back(name);
    }

    inputFile.close(); // Close the file

    // Check if the file was empty
    if (names.empty()) {
        cout << "The file is empty. No students found." << endl;
        return 1;
    }

    // Sort the names alphabetically
    sort(names.begin(), names.end());

    // Report the number of students and their positions in line
    cout << "Number of students in the class: " << names.size() << endl;
    cout << "Student at the front of the line: " << names.front() << endl;
    cout << "Student at the end of the line: " << names.back() << endl;

    return 0;
}