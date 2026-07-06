#include <iostream>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudentData() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Fee Balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        double payment;

        cout << "Enter Payment Amount: ";
        cin >> payment;

        feeBalance -= payment;
    }

    void displayStatus() {
        cout << "\nStudent Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student s;

    s.inputStudentData();
    s.makePayment();
    s.displayStatus();

    return 0;
}
