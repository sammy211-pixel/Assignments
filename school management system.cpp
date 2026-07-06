#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string admissionNo;
    string studentClass;

public:
    void inputStudent() {
        inputPerson();

        cout << "Enter Admission Number: ";
        getline(cin, admissionNo);

        cout << "Enter Class: ";
        getline(cin, studentClass);
    }

    void displayStudent() {
        displayPerson();

        cout << "Admission Number: "
             << admissionNo << endl;

        cout << "Class: "
             << studentClass << endl;
    }
};

int main() {
    Student s;

    s.inputStudent();

    cout << "\nStudent Details" << endl;
    s.displayStudent();

    return 0;
}
