#include "User.hpp"
#include <iostream>

using namespace std;

User::User() : name(""), userdetail("", "") {}
User::User(string name, string phone, string email)
    : name(name), userdetail(phone, email) {}

// User::~User() {
//     delete booking;
// }

string User::getname() const {
    return name;
}


void User::setname(string NAME) {
    name = NAME;
}
void User::setBookingDetails(BookingDetails *bd){
        bookingDetails = bd;
    }


void User::DispInfoUser() {
    cout << "Name: " << name << endl;
    cout << "Phone Number: " << userdetail.getPhone() << endl;
    cout << "Email: " << userdetail.getEmail() << endl;
}

void User::Receipt() const 
{
    cout << "Booking Receipt:" << endl;
    bookingDetails->DispStatus();
}
