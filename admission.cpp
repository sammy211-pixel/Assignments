#include <iostream>
using namespace std;

int main() {
    string studentName;
    int age;
    double score;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Exam Score: ";
    cin >> score;

    if (age >= 18) {
        if (score >= 50)
            cout << "Admitted" << endl;
        else
            cout << "Not Admitted: Low Score" << endl;
    }
    else {
        cout << "Not Admitted: Underage" << endl;
    }

    return 0;
}
