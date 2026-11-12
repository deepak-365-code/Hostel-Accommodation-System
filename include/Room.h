#pragma once
#include<string>
using namespace std;
class Room{
    int roomNumber;
    int capacity;
    int occupiedBeds;
    string roomType;
    public:
    Room(int roomNumber, int capacity, int occupiedBeds, string roomType);

    // Getters;
    int getRoomNumber() const;
    int getCapacity() const;
    int getOccupiedBeds() const;
    int getAvailableBeds() const;
    string getRoomType() const;

    // Room operations
    bool isAvailable() const;
    bool addOccupant();
    bool removeOccupant();
    bool updateCapacity(int newCapacity);

    //display room information
    void displayRoom() const;

};