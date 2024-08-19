#ifndef HOTEL_HPP
#define HOTEL_HPP

#include <string>
#include "Room.hpp"
using namespace std;

class Hotel {
private:
    Room *room;
    string name;
    string location;
    bool availability;
    string package;
    double rating;

public:

    Hotel();
    Hotel(string, string, bool, string, double);
    ~Hotel();
    void DispHotel() const;
    void setRoom(int);
    void DispRoomOpt();
    void setUserForRoom( User*);
    void DisplayChosenRoom(int);
    
    
    // void ReadUserInput();
    // void AddRoom(const Room& room);
    

    //getters
    string getName() const;
    string getLocation() const;
    bool getAvailability() const;
    string getPackage() const;
    double getRating() const;
    // int getRoomCount() const;
    // Room getRoom(int index) const;

    //setters
    void setName(const string name);
    void setLocation(const string location);
    void setAvailability(bool availability);
    void setPackage(const string package);
    void setRating(double rating);
    // void setRoomCount(int roomCount);
    // void setRoom(int index, const Room& room);
};

#endif


