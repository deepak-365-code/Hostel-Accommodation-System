#include<iostream>
#include<iomanip>
#include "Room.h"
using namespace std;
Room::Room(int r, int c, int o, string rt): roomNumber(r), capacity(c), occupiedBeds(o), roomType(rt) {}

// Getters functions 
int Room::getRoomNumber() const{
    return roomNumber;
}
int Room::getCapacity() const{
    return capacity;
}
int Room::getOccupiedBeds() const{
    return occupiedBeds;
}
int Room::getAvailableBeds() const{
    return capacity - occupiedBeds;
}
string Room::getRoomType() const{
    return roomType;
}
bool Room::isAvailable() const{
    return occupiedBeds < capacity ;
}
// Add occupant
bool Room::addOccupant(){
    if(isAvailable()){
        occupiedBeds++;
        return true;
    }else{
        return false;
    }
}
// remove occupant
bool Room::removeOccupant(){
    if(occupiedBeds == 0) return false;
    occupiedBeds--;
    return true;
}
//update capacity
bool Room::updateCapacity(int newCapacity){
    if(newCapacity < occupiedBeds || newCapacity <= 0){
        return false;
    }
    capacity = newCapacity;
    return true;
}
// display room details
void Room::displayRoom() const {

    cout << left
         << setw(12) << roomNumber
         << setw(12) << roomType
         << setw(12) << capacity
         << setw(12) << occupiedBeds
         << setw(12) << getAvailableBeds()
         << (isAvailable() ? "Available" : "Full")
         << endl;
}