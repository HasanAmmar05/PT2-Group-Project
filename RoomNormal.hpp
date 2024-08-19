#ifndef ROOMNORMAL_HPP
#define ROOMNORMAL_HPP

#include <string>
#include "Room.hpp"
using namespace std;

class RoomNormal : public Room{
    public:
        RoomNormal(double);
        void DispRoom() override;
        double getPrice() const override;
        string getType() const override;

};

#endif