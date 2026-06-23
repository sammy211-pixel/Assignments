#include <iostream>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        daysBooked = days;

        cout << "Room booking confirmed" << endl;
    }

    void displayBooking() {
        cout << "\nGuest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Days Booked: " << daysBooked << endl;
    }

    ~RoomBooking() {
        cout << "\nBooking ended, room released" << endl;
    }
};

int main() {
    RoomBooking booking("Sammy", 205, 3);

    booking.displayBooking();

    return 0;
}
