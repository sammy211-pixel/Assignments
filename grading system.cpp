#include <iostream>
using namespace std;

int main() {
    string studentName;
    int marks;
    char grade;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Marks: ";
    cin >> marks;

    if (marks >= 70)
        grade = 'A';
    else if (marks >= 60)
        grade = 'B';
    else if (marks >= 50)
        grade = 'C';
    else if (marks >= 40)
        grade = 'D';
    else
        grade = 'E';

    cout << "\nStudent Name: " << studentName << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
