#ifndef ROOMPREMIUM_HPP
#define ROOMPREMIUM_HPP

#include <string>
#include "Room.hpp"
using namespace std;

class RoomPremium : public Room{
    public:
        RoomPremium(double);
        void DispRoom() override;
        double getPrice() const override;
        string getType() const override;

};

#endif