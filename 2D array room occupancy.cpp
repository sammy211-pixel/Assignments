#include <iostream>
using namespace std;

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    for (int floor = 0; floor < 5; floor++) {

        occupied = 0;
        vacant = 0;

        cout << "\nFloor "
             << floor + 1 << endl;

        for (int room = 0; room < 10; room++) {
            cout << "Room "
                 << room + 1
                 << " (1=Occupied, 0=Vacant): ";

            cin >> occupancy[floor][room];

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        cout << "Occupied Rooms: "
             << occupied << endl;

        cout << "Vacant Rooms: "
             << vacant << endl;
    }

    return 0;
}
