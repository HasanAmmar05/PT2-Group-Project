#include "RoomNormal.hpp"
#include <iostream>

using namespace std;

RoomNormal::RoomNormal(double p) : Room("Normal", 
            "Single Bed, Breakfast", p, nullptr) {}

void RoomNormal::DispRoom() {
    cout << "\tRoom Type: " << type << endl;
    cout << "\tPackages: " << package << endl;
    cout << "\tPrice: $" << price << endl;
    cout << endl;
    Room::DispRoom();
}

double RoomNormal::getPrice() const{
    return price;
}

string RoomNormal::getType() const{
    return type;
}