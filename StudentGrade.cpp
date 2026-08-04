#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int SUBJECTS = 5;
    string subjects[SUBJECTS] = {"Physics", "Chemistry", "Maths", "English", "Geography"};
    int marks[SUBJECTS];
    int total = 0;

    cout << "Enter marks for 5 subjects (0-100):\n";
    for (int i = 0; i < SUBJECTS; ++i) {
        cout << subjects[i] << ": ";
        cin >> marks[i];
        if (!cin) {
            cerr << "Invalid input. Please enter numeric marks.\n";
            return 1;
        }
        if (marks[i] < 0) marks[i] = 0;
        if (marks[i] > 100) marks[i] = 100;
        total += marks[i];
    }

    double average = static_cast<double>(total) / SUBJECTS;
    char grade;
    if (average >= 90.0) grade = 'A';
    else if (average >= 80.0) grade = 'B';
    else if (average >= 70.0) grade = 'C';
    else if (average >= 60.0) grade = 'D';
    else grade = 'F';

    cout << "\nTotal marks: " << total << "\n";
    cout << "Average: " << fixed << setprecision(2) << average << "\n";
    cout << "Grade: " << grade << "\n";

    return 0;
}
