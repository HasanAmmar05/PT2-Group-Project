#ifndef USER_HPP
#define USER_HPP
#include "UserDetails.hpp"
#include "BookingDetails.hpp"
#include <string>


using namespace std;

class User {
    protected:
    BookingDetails *bookingDetails;
    string name;

    public:
    UserDetails userdetail;
    User();
    User (string name, string phone, string email);
    // ~User();

    string getname () const;

    void setname(string NAME);
    void setBookingDetails(BookingDetails *);

    void DispInfoUser();
    void Receipt() const;
};

#endif 
