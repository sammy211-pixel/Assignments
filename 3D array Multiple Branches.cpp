#include <iostream>
using namespace std;

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {

                cout << "Branch "
                     << branch + 1
                     << ", Floor "
                     << floor + 1
                     << ", Room "
                     << room + 1
                     << " (1=Occupied, 0=Vacant): ";

                cin >> chain[branch][floor][room];

                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    cout << "\nTotal Occupied Rooms Across All Branches: "
         << totalOccupied << endl;

    return 0;
}
