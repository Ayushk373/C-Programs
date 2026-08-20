#include<iostream>
#include <fstream>
#include <string>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                `
using namespace std;

int main() {
    const string filename = "sample_output.txt";

    ofstream outFile(filename);

    if (!outFile.is_open()) {
        cerr << "Error: Could not create or open the output file." << endl;
        return 1;
    }

    cout << "Writing data to " << filename << "...\n";
    outFile << "Line 1: Hello, C++ File I/O!\n";
    outFile << "Line 2: Demonstration of writing to a file.\n";
    outFile << "Line 3: Storing integer value = " << 100 << "\n";
    outFile << "Line 4: NMIET\n";


    outFile.close();
    cout << "File closed successfully after writing.\n\n";

    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cerr << "Error: Could not open the file for reading." << endl;
        return 1;
    }

    cout << "--- Contents of " << filename << " ---" << endl;

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
