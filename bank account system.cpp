#include <iostream>
using namespace std;

class BankAccount {
private:
    string holderName;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int accNo, double bal) {
        holderName = name;
        accountNumber = accNo;
        balance = bal;

        cout << "Account successfully created" << endl;
    }

    void displayAccount() {
        cout << "\nAccount Holder: " << holderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }
};

int main() {
    BankAccount account("John Doe", 12345, 50000);

    account.displayAccount();

    return 0;
}
