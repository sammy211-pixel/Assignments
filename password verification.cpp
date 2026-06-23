#include <iostream>
using namespace std;

int main() {
    string username, password;

    string correctUsername = "admin";
    string correctPassword = "1234";

    do {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if (username == correctUsername &&
            password == correctPassword) {
            cout << "Access Granted" << endl;
            break;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (true);

    return 0;
}
