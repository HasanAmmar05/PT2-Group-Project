#ifndef PAYMENTMETHOD_HPP
#define PAYMENTMETHOD_HPP

#include <string>

using namespace std;

class PaymentMethod {
public:
    string method;
    string street;

public:

    string getMethod() const;
    string getStreet() const;

    void setMethod(const string& METHOD);
    void setStreet(const string& STREET);

    virtual bool Validate() = 0; // for future polymorphism
    virtual ~PaymentMethod() = 0;
};

#endif

