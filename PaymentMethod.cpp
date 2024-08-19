#include "PaymentMethod.hpp"
#include <iostream>

using namespace std;


string PaymentMethod::getMethod() const 
{
    return method;
}

string PaymentMethod::getStreet() const 
{
    return street;
}


void PaymentMethod::setMethod(const string& METHOD) 
{
    method = METHOD;
}

void PaymentMethod::setStreet(const string& STREET) 
{
    street = STREET;
}

bool PaymentMethod::Validate() {
    if (method.empty() || street.empty()) {
        cout << "Street or Payment are not correctly set" << endl;
        return false;
    }
    cout << "Street and Payment Method have been verified successfully" << endl;
    return true;
}
