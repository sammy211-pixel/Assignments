#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int admNo;
    float feeBalance;

    void inputStudent()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter admission number: ";
        cin >> admNo;

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment()
    {
        float payment;

        cout << "Enter amount paid: ";
        cin >> payment;

        feeBalance = feeBalance - payment;
    }

    void displayStatus()
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Admission Number: " << admNo << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main()
{
    Student s;

    s.inputStudent();
    s.makePayment();
    s.displayStatus();

    return 0;
}
