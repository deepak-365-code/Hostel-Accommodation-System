
#include <iostream>
#include <iomanip>
#include "RoomManager.h"

using namespace std;

// Add room
bool RoomManager::addRoom(const Room& room) {

    if (room.getRoomNumber() <= 0 ||
        room.getCapacity() <= 0 ||
        room.getOccupiedBeds() < 0 ||
        room.getOccupiedBeds() > room.getCapacity()) {
        return false;
    }

    if (findRoom(room.getRoomNumber()) != nullptr) {
        return false;
    }

    rooms.push_back(room);
    return true;
}

// Display all rooms
void RoomManager::displayAllRooms() const {

    if (rooms.empty()) {
        cout << "No rooms available.\n";
        return;
    }

    cout << left
         << setw(12) << "Room No."
         << setw(12) << "Type"
         << setw(12) << "Capacity"
         << setw(12) << "Occupied"
         << setw(12) << "Available"
         << "Status\n";

    cout << string(70, '-') << endl;

    for (const Room& room : rooms) {
        room.displayRoom();
    }
}

// Display available rooms
void RoomManager::displayAvailableRooms() const {

    bool found = false;

    for (const Room& room : rooms) {

        if (room.isAvailable()) {

            if (!found) {
                cout << "Available Rooms:\n";
                found = true;
            }

            room.displayRoom();
        }
    }

    if (!found) {
        cout << "No rooms available.\n";
    }
}

// Search room
Room* RoomManager::findRoom(int roomNumber) {

    for (Room& room : rooms) {

        if (room.getRoomNumber() == roomNumber) {
            return &room;
        }
    }

    return nullptr;
}

// Update room capacity
bool RoomManager::updateRoomCapacity(
    int roomNumber, int newCapacity) {

    Room* room = findRoom(roomNumber);

    if (room == nullptr) {
        return false;
    }

    return room->updateCapacity(newCapacity);
}

// Delete room
bool RoomManager::deleteRoom(int roomNumber) {

    for (auto it = rooms.begin(); it != rooms.end(); it++) {

        if (it->getRoomNumber() == roomNumber) {
            if (it->getOccupiedBeds() != 0) {
                return false;
            }

            rooms.erase(it);
            return true;
        }
    }

    return false;
}
