#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Step 1: Create and write to file1 (countries)
    ofstream file1("file1.txt");
    if (!file1) {
        cout << "Error creating file1.txt" << endl;
        return 1;
    }

    file1 << "India\n";
    file1 << "USA\n";
    file1 << "Japan\n";
    file1.close();

    // Step 2: Create and write to file2 (capitals)
    ofstream file2("file2.txt");
    if (!file2) {
        cout << "Error creating file2.txt" << endl;
        return 1;
    }

    file2 << "New Delhi\n";
    file2 << "Washington D.C.\n";
    file2 << "Tokyo\n";
    file2.close();

    // Step 3: Read both files simultaneously
    ifstream readFile1("file1.txt");
    ifstream readFile2("file2.txt");

    if (!readFile1 || !readFile2) {
        cout << "Error opening files for reading." << endl;
        return 1;
    }

    string country, capital;
    cout << "Country\t\tCapital\n";
    cout << "--------------------------\n";

    // Read line by line from both files
    while (getline(readFile1, country) && getline(readFile2, capital)) {
        cout << country << "\t\t" << capital << endl;
    }

    // Close files
    readFile1.close();
    readFile2.close();

    return 0;
}
