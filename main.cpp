// #include<iostream>
// #include "Student.h"
// using namespace std;
// int main(){
//     Student s1(57, "Deepak Anand", 20, "CSE", "1234567890");
//     s1.displayDetails();
// }


#include <iostream>
#include "RoomManager.h"

using namespace std;

int main() {

    RoomManager manager;

    // Add rooms
    manager.addRoom(Room(101, 3, 2, "Triple"));
    manager.addRoom(Room(102, 2, 2, "Double"));
    manager.addRoom(Room(103, 3, 0, "Triple"));
    manager.addRoom(Room(104, 2, 1, "Double"));

    // Display all rooms
    cout << "\n===== ALL ROOMS =====\n";
    manager.displayAllRooms();

    // Display available rooms
    cout << "\n===== AVAILABLE ROOMS =====\n";
    manager.displayAvailableRooms();

    // Search room
    cout << "\n===== SEARCH ROOM =====\n";

    Room* room = manager.findRoom(101);

    if (room != nullptr) {
        room->displayRoom();
    } else {
        cout << "Room not found.\n";
    }

    // Update capacity
    cout << "\n===== UPDATE CAPACITY =====\n";

    if (manager.updateRoomCapacity(103, 4)) {
        cout << "Capacity updated successfully.\n";
    } else {
        cout << "Capacity update failed.\n";
    }

    // Delete room
    cout << "\n===== DELETE ROOM =====\n";

    if (manager.deleteRoom(102)) {
        cout << "Room deleted successfully.\n";
    } else {
        cout << "Room deletion failed.\n";
    }

    return 0;
}