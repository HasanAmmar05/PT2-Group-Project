#include "BookingDetails.hpp"
// #include "PaymentMethod.hpp"
#include <iostream>

using namespace std;


BookingDetails::BookingDetails(int d = 0, double pr = 0.0):
                durationOfStay(d), roomPrice(pr) {}

double BookingDetails::calcTotalPrice() const{
    return durationOfStay * roomPrice;
}

// Getters
int BookingDetails::getDurationOfStay() const {
    return durationOfStay;
}
double BookingDetails::getRoomPrice() const {
    return roomPrice;
}
// string BookingDetails::getSummary() const {
//     return summary;
// }

// PaymentMethod* BookingDetails::getPayment() const {
//     return payment;
// }

// Setters
void BookingDetails::setDurationOfStay(int duration) {
    durationOfStay = duration;
}
void BookingDetails::setRoomPrice(double price) {
    roomPrice = price;
}
// void BookingDetails::setSummary(const string &summary) {
//     this->summary = summary;
// }

// void BookingDetails::setPayment(PaymentMethod *payment) {
//     this->payment = payment;
// }


void BookingDetails::DispStatus() const {
    cout << "Duration of stay: " << durationOfStay << " days" << endl;
    cout << "Room Price $" << roomPrice << " per night" << endl;
    cout << "Total price: $" << calcTotalPrice() << endl;
    // cout << "Summary: " << summary << endl;
}

void BookingDetails::DispPrice() const {
    cout << "Total price: " << calcTotalPrice() << endl;
}

// void BookingDetails::Payment(PaymentMethod *payment) {
//     this->payment = payment;
// }

