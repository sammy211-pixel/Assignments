#include <iostream>
using namespace std;

class Payment {
public:
    void processPayment(int amount) {
        cout << "Cash Payment: "
             << amount << endl;
    }

    void processPayment(double amount,
                        double fee) {
        cout << "Card Payment: "
             << amount + fee << endl;
    }

    void processPayment(double amount,
                        double fee,
                        double discount) {
        cout << "Mobile Payment: "
             << (amount + fee - discount)
             << endl;
    }
};

int main() {
    Payment p;

    p.processPayment(1000);
    p.processPayment(1000, 50);
    p.processPayment(1000, 50, 100);

    return 0;
}
