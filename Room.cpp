#include "Room.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

// Room::Room() : type(""), package(""), price("") {}

Room::Room(string t = "Normal", string p = "Standard Features", double pr = 300.0,
            User *u = nullptr)
     :  type(t), package(p), price(pr), user(u) {}

// Display room details
void Room::DispRoom(){
    
    if(user){
        for(int i=0;i<=30;i++)
            cout << "#";
        cout << endl;
        cout << "User Information: " << endl;
        user->DispInfoUser();
        user->Receipt();
        for(int i=0;i<=30;i++)
            cout << "#";
        cout << endl;
    }
    else{
        cout << "This room is available." << endl;
    }
    cout << endl;
}



User* Room::getUser() const {
    return user;
}
string Room::getPackage() const{
    return package;
}

void Room::setUser(User* USER) {
    user = USER;
}

void Room::setType(string t){
    type = t;
    }
void Room::setPackage(string p ){
    package = p;
}

void Room::setPrice(double PRICE) {
    this->price = PRICE;
}


// void Room::UpdateInfo(User* user) 
// {
//     this->user = user;
// }

// string Room::ReadUserInput() const 
// {
//     return "User input";
// }


// int Room::getRoomNumber() const 
// {
//     return roomnum;
// }

// bool Room::getavailability() const 
// {
//     return availability;
// }

// void Room::setRoomNumber(int ROOMNUM) 
// {
//     this->roomnum = ROOMNUM;
// }

// void Room::setavailability(bool AVAILABILITY) 
// {
//     this->availability = AVAILABILITY;
// }



