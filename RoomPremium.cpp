#include "RoomPremium.hpp"
#include <iostream>

using namespace std;

RoomPremium::RoomPremium(double p) : Room("Premium", 
"Queen Bed, Breakfast, \n\t\tLunch, Dinner, Room Service, \n\t\tPrivate Sauna, Gym Access",
 p, nullptr) {}

void RoomPremium::DispRoom() {
    cout << "\tRoom Type: " << type << endl;
    cout << "\tPackages: " << package << endl;
    cout << "\tValet Parking: $" << 10 << endl;
    cout << "\tPrice: $" << price << endl;
    cout << endl;
    Room::DispRoom();
}

double RoomPremium::getPrice() const{
    return price + 10;
}

string RoomPremium::getType() const{
    return type;
}