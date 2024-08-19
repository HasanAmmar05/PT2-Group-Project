#include <iostream>
#include "Hotel.hpp"
#include "Room.hpp"
#include "User.hpp"
using namespace std;

int main(){

///////////// Welcome /////////////////
    string location;
    int days;
    int numG;
    int numR;
    cout << "Welcome to HOTEL RESERVATION SYSTEM" << endl;
    cout << "Choose location, duration of stay, guest and rooms\n";
    cout << "Enter your location: ";
    getline(cin, location);
    cout << "Enter Duration of stay(days): ";
    cin >> days;
    cout << "Enter Number of Guest(s): ";
    cin >> numG;
    cout << "Enter Number of Room(s): ";
    cin >> numR;
    cout << endl;

    string name, phone, email;
///////////// User Details /////////////////
    cout << "User Details\n";
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Phone Number: ";
    cin >> phone;
    cout << "Enter Email: ";
    cin >> email;
    cout << endl;

    User user1(name, phone, email);
///////////// Display Hotel /////////////////
    Hotel hotels[] = {
        Hotel("Hotel Hilton", "Kuala Lumpur", true, "Normal/Premium", 4.5),
        Hotel("Ritz-Carlton","Kuala Lumpur", true, "Normal/Premium", 4.0),
        Hotel("Sherraton", "Kuala Lumpur", true, "Normal/Premium", 4.2),
        Hotel("Royal Chulan", "Kuala Lumpur", true, "Normal/Premium", 4.7),
        Hotel("Hotel Avillion", "Kuala Lumpur", true, "Normal/Premium", 4.3)
    };

    // cout << "Hotels offered in " << location << endl;
    // int numHotels = sizeof(hotels) / sizeof(hotels[0]);

    // for(int i = 0; i < numHotels; i++){
    //     cout << i+1 << ". " << hotels[i].getName() << endl;
    // }
    // cout << endl;
    int choice;
    char continueChoice;
    char continueRoom;
    int roomChoice;

    do{
        cout << "Hotels offered in " << location << endl;
        int numHotels = sizeof(hotels) / sizeof(hotels[0]);

        for(int i = 0; i < numHotels; i++){
        cout << i+1 << ". " << hotels[i].getName() << endl;
        }
        cout << endl;

    cout << "Choose Hotel for more info: ";
    cin >> choice;

    switch(choice) {
        case 1 :
            hotels[0].DispHotel();
            cout << endl;
            break;
        case 2 :
            hotels[1].DispHotel();
            cout << endl;
            break;
        case 3 :
            hotels[2].DispHotel();
            cout << endl;
            break;
        case 4 :
            hotels[3].DispHotel();
            cout << endl;
            break;
        case 5 :
            hotels[4].DispHotel();
            cout << endl;
            break;   
    }
    cout << "Do you want to continue with this hotel? (Y/N)\n";
    cin >> continueChoice;
    cout << endl;
   
   if(continueChoice == 'Y' || continueChoice == 'y'){
    cout << "Choose room type for more info: " << endl;
    hotels[choice-1].DispRoomOpt();
    do{
    cout << "Enter your choice: ";
    cin >> roomChoice;
    cout << endl;
    hotels[choice - 1].DisplayChosenRoom(roomChoice);
    cout << "Do you want to continue with this room? (Y/N)\n";
    cin >> continueRoom;

    if(continueRoom == 'Y' || continueRoom == 'y'){
    hotels[choice - 1].setRoom(roomChoice);

    double roomPrice = (roomChoice == 1) ? 200.0 : 600.0;
    string roomType;
    roomType = (roomChoice == 1) ? "Normal" : "Premium";
    BookingDetails bookingDetails(days, roomPrice);
    user1.setBookingDetails(&bookingDetails);


    hotels[choice-1].setUserForRoom(&user1);

    cout << "\nYou have chosen" << endl;
    hotels[choice - 1].DispHotel();
    hotels[choice - 1].DisplayChosenRoom(roomChoice);

    cout << "Do want to finalize? (Y/N)\n";
    cin >> continueChoice;
    }
    }
    while(continueRoom != 'Y' && continueRoom != 'y');
    }
    }
    while(continueChoice != 'Y' && continueChoice != 'y');
     cout << "You have finalized your choice. " << endl;
    
    
    return 0;
}