#include <iostream>
using namespace std;

string customerName;
double unitsConsumed;
double bill, discount, finalBill;

const double RATE_PER_UNIT = 50;

void getCustomerDetails() {
    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Units Consumed: ";
    cin >> unitsConsumed;
}

double calculateBill() {
    return unitsConsumed * RATE_PER_UNIT;
}

double applyDiscount(double billAmount) {
    if(unitsConsumed > 100)
        return billAmount * 0.10;
    return 0;
}

void displayBill() {
    cout << "\n===== WATER BILL =====" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Bill Before Discount: " << bill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount Payable: " << finalBill << endl;
}

int main() {
    getCustomerDetails();

    bill = calculateBill();
    discount = applyDiscount(bill);
    finalBill = bill - discount;

    displayBill();

    return 0;
}
