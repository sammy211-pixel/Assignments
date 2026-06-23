#include <iostream>
using namespace std;

int main() {
    string studentName;
    double theoryMarks, practicalMarks, average;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Theory Test Marks: ";
    cin >> theoryMarks;

    cout << "Enter Practical Test Marks: ";
    cin >> practicalMarks;

    average = (theoryMarks + practicalMarks) / 2;

    cout << "\nStudent Name: " << studentName << endl;
    cout << "Theory Marks: " << theoryMarks << endl;
    cout << "Practical Marks: " << practicalMarks << endl;
    cout << "Average Score: " << average << endl;

    if (average >= 50)
        cout << "Result: PASS" << endl;
    else
        cout << "Result: FAIL" << endl;

    return 0;
}
