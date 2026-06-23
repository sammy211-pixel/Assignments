#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Operator (+,-,*,/): ";
    cin >> op;

    cout << "Enter Second Number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Division by zero is not allowed";
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}
