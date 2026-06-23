#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone, totalSales;

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Phone Model: ";
    getline(cin, phoneModel);

    cout << "Enter Quantity Bought: ";
    cin >> quantity;

    cout << "Enter Price Per Phone: ";
    cin >> pricePerPhone;

    totalSales = quantity * pricePerPhone;

    cout << "\n===== SALES RECEIPT =====" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Model: " << phoneModel << endl;
    cout << "Quantity Bought: " << quantity << endl;
    cout << "Price Per Phone: " << pricePerPhone << endl;
    cout << "Total Sales Amount: " << totalSales << endl;

    return 0;
}
