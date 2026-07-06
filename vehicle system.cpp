#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    void inputVehicle() {
        cout << "Enter Brand: ";
        getline(cin, brand);

        cout << "Enter Year of Manufacture: ";
        cin >> year;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    int doors;
    double engineCapacity;

public:
    void inputCar() {
        cin.ignore();

        inputVehicle();

        cout << "Enter Number of Doors: ";
        cin >> doors;

        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    void displayCar() {
        displayVehicle();

        cout << "Number of Doors: "
             << doors << endl;

        cout << "Engine Capacity: "
             << engineCapacity << " CC" << endl;
    }
};

int main() {
    Car c;

    c.inputCar();

    cout << "\nCar Details" << endl;
    c.displayCar();

    return 0;
}
