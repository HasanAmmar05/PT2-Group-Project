#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include "User.hpp"


using namespace std;

class Room  {
protected:
    User* user; // aggregation to class user
    double price;
    string type;
    string package;
    

public:
    // Room();
    Room(string , string , double, User*);
    
    virtual ~Room() {};
    virtual void DispRoom();
    virtual double getPrice() const = 0;
    virtual string getType() const = 0;

    User* getUser() const;
    string getPackage() const;

    void setType(string);
    void setPackage(string);
    // Setters
    void setPrice(double);
    void setUser(User* user);
    // void setRoomNumber(int );
    // void setavailability(bool);
    // void UpdateInfo(User* user);
    // string ReadUserInput() const;
    // int getRoomNumber() const;
    // bool getavailability() const;
    
};

#endif
