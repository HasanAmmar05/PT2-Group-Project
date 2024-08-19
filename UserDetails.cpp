#include "UserDetails.hpp"
#include <iostream>
#include <string>


using namespace std;

UserDetails :: UserDetails() {
    email = "";
    phone = "";
}

UserDetails :: UserDetails ( string phone, string email) {
    this->phone = phone;
    this->email = email;
}


string UserDetails::getEmail() const {
    return email;
}

string UserDetails::getPhone() const {
    return phone;
}

void UserDetails :: setEmail(string email){
    this->email = email;
}

void UserDetails :: setPhone(string phone) {
    this->phone = phone;
}

void UserDetails :: ReadUserInput () {
    cout << "Enter your email : ";
    cin >> email;

    cout << "Enter your phone number : ";
    cin >> phone;
}