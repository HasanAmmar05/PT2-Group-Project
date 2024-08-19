#ifndef BOOKINGDETAILS_HPP
#define BOOKINGDETAILS_HPP

#include <string>
// #include "PaymentMethod.hpp"

using namespace std;

class BookingDetails {
private:
    int durationOfStay;
    double roomPrice;
    // string summary;
    // PaymentMethod *payment; // aggregation to PaymentMethod

public:
    BookingDetails(int, double);
    double calcTotalPrice() const;

    // Getters
    int getDurationOfStay() const;
    double getRoomPrice() const;
    // string getSummary() const;
    // PaymentMethod* getPayment() const;

    // Setters
    void setDurationOfStay(int duration);
    void setRoomPrice(double price);
    // void setSummary(const string &summary);
    // void setPayment(PaymentMethod *payment);

    void DispStatus() const;
    void DispPrice() const;
    // void Payment(PaymentMethod *payment);
};

#endif

