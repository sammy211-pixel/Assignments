#include <iostream>
using namespace std;

string name;
double basicSalary, overtimeHours;
double overtimePay, netSalary;
const double RATE_PER_HOUR = 500;

void getEmployeeDetails() {
    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Overtime Hours: ";
    cin >> overtimeHours;
}

double calculateOvertimePay() {
    return overtimeHours * RATE_PER_HOUR;
}

double calculateNetSalary() {
    return basicSalary + overtimePay;
}

void displayPayslip() {
    cout << "\n===== PAYSLIP =====" << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Overtime Pay: " << overtimePay << endl;
    cout << "Net Salary: " << netSalary << endl;
}

int main() {
    getEmployeeDetails();

    overtimePay = calculateOvertimePay();
    netSalary = calculateNetSalary();

    displayPayslip();

    return 0;
}
