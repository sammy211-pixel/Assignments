#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter Account Balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "\nEnter Withdrawal Amount: ";
        cin >> withdrawal;

        if (withdrawal > balance) {
            cout << "Insufficient Balance!" << endl;
            break;
        }

        balance -= withdrawal;

        cout << "Remaining Balance: " << balance << endl;

        if (balance == 0) {
            cout << "Account Balance Exhausted." << endl;
            break;
        }
    }

    return 0;
}
