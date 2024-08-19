#ifndef USERDETAIL_HPP
#define USERDETAIL_HPP

#include <string>

using namespace std;

class UserDetails{
    private:
        string email;
        string phone;
    
    public:
        UserDetails();
        UserDetails (string phone, string email);

        string getEmail() const;
        string getPhone() const;

        void setEmail(string email);
        void setPhone(string phone);

        void ReadUserInput();
};

#endif