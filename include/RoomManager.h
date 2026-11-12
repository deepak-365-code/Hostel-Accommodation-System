#pragma once
#include<vector>
#include "Room.h"
using namespace std;
class RoomManager{
    private:
    vector<Room> rooms;
    public:
    // add room
    bool addRoom(const Room& room);

    //Display rooms
    void displayAllRooms() const;
    void displayAvailableRooms() const;

    // search room
    Room* findRoom(int roomNumber);

    // update room capacity
    bool updateRoomCapacity(int roomNumber, int newCapacity);

    // delete room
    bool deleteRoom(int roomNumber);
};