#include "Hotel.hpp"
#include "RoomNormal.hpp"
#include "RoomPremium.hpp"
#include <iostream>

using namespace std;

Hotel::Hotel() : name(""), location(""), availability(false), package(""), rating(0), room(nullptr) {}

Hotel::Hotel(string _name, string _location, bool _availability, string _package, double _rating) : name(_name), location(_location), 
            availability(_availability), package(_package), rating(_rating), room(nullptr) {} //, roomCount(0)

Hotel::~Hotel(){
    room = nullptr;
}

void Hotel::setRoom(int roomChoice){
    delete room;
    if(roomChoice == 1){
        room = new RoomNormal(200.0);
    }
    else if(roomChoice == 2){
        room = new RoomPremium(590.0);
    }
}

void Hotel::DispHotel() const {
    cout << "\tHotel: " << name << endl
         << "\tLocation: " << location << endl
         << "\tAvailability: " << (availability ? "Yes" : "No") << endl
         << "\tPackage: " << package << endl
         << "\tRating: " << rating << endl;

    // for (int i = 0; i < 10; i++) {
    //     rooms[i].DispRoom();
    // }
}

void Hotel::DispRoomOpt(){
        cout << "Room Options:" << endl;
        cout << "1. Normal Room:" << endl;
        cout << "\tPackage: Limited Features" << endl;
        cout << "\tPrice: $200" << endl;
        cout << "2. Premium Room:" << endl;
        cout << "\tPackage: Luxury Features" << endl;
        cout << "\tPrice: $590 + Valet $10" << endl; 
    }


void Hotel::DisplayChosenRoom(int roomChoice){
    if (room) {
        room->DispRoom();
    }
    else{
        cout << "This room is currently Available.\n" << endl;
    }
}

void Hotel::setUserForRoom(User* user){
    if(room){
        room->setUser(user);
    }
    else{
        cout << "No room has been registerd." << endl;
    }
}

// void Hotel::ReadUserInput() {
//     cout << "Enter the name of the hotel: ";
//     getline(cin, name);
//
//     cout << "Enter hotel location: ";
//     getline(cin, location);
//
//     cout << "Is the hotel available? (type 1 for Yes / 0 for No): ";
//     cin >> availability;
//
//     cout << "Enter package: ";
//     cin.ignore();
//     getline(cin, package);
// 
//     cout << "Enter rating: ";
//     cin >> rating;
// }
// 
// void Hotel::AddRoom(const Room& room) {
//     if (roomCount < 100) {
//         rooms[roomCount] = room;
//         roomCount++;
//     } else {
//         cout << "No rooms available anymore." << endl;
//     }
// }

// Getters
string Hotel::getName() const {
    return name;
}

string Hotel::getLocation() const {
    return location;
}

bool Hotel::getAvailability() const {
    return availability;
}

string Hotel::getPackage() const {
    return package;
}

double Hotel::getRating() const {
    return rating;
}

// int Hotel::getRoomCount() const {
//     return roomCount;
// }
//
// Room Hotel::getRoom(int index) const {
//     if (index >= 0 && index < roomCount) {
//         return rooms[index];
//     }
//     return Room(); 
// }
// 
// Setters
void Hotel::setName(const string name) 
{
    this->name = name;
}

void Hotel::setLocation(const string location) 
{
    this->location = location;
}

void Hotel::setAvailability(bool availability) 
{
    this->availability = availability;
}

void Hotel::setPackage(const string package) 
{
    this->package = package;
}

void Hotel::setRating(double rating) 
{
    this->rating = rating;
}

// void Hotel::setRoomCount(int roomCount)
// {
//     this->roomCount = roomCount;
// }

// void Hotel::setRoom(int index, const Room& room)
// {
//     if (index >= 0 && index < 100)
//     {
//         rooms[index] = room;
//     }
// }



