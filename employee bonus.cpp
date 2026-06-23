#include <iostream>
using namespace std;

int main() {
    string employeeName;
    double basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++) {
        cout << "\nEmployee " << i << endl;

        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, employeeName);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << "\n--- Employee Report ---" << endl;
        cout << "Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}
