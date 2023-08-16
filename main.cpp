#include <iostream>
#include "hotel.h"
#include "guest.h"
#include "room.h"
#include <string>

using namespace std;

void test1();
void test2();
void showCommands();

int main(){
    int a;
    cout << "type '1' for test 1 and '2' for test 2" << endl << "> ";
    cin >> a;
    if ( a == 1 ){
        test1();
    } else if ( a == 2 ){
        test2();
    } else {
        cout << "?" << endl;
    }
}

void test1() {
    Hotel houston("Houston", "Cr 10 N 11-202", "456-123-741");
    Guest jorge("Jorge", "312-741-8523");
    Guest luis("Luis", "312-526-8523");
    Guest maria("Maria", "312-526-1234");
    Guest juan("Juan", "312-741-9856");
    Guest oscar("oscar", "325-895-412");

    houston.reserveRoom(1, jorge, 5);
    houston.reserveRoom(4, maria, 10);
    houston.reserveRoom(7, luis, 4);
    houston.reserveAnyRoom(juan, 8);
    houston.info();
    houston.freeRoom(1);
    houston.freeRoom(4);
    houston.info();
    houston.reserveRoom(1, oscar, 2);
    houston.info();
}

void test2(){
    showCommands();
    int id,  nNights;
    Guest myGuest;
    Hotel hotel( "Houston", "Near the park", "154616546516" );
    string name, phoneNumber, comand;
    cin >> comand;
    while ( comand != "exit" ){
        system("cls");
        if ( comand == "reserveRoom" ){
            cin >> id >> name >> phoneNumber >> nNights;
            myGuest = Guest( name, phoneNumber );
            hotel.reserveRoom( id, myGuest , nNights);
        } else if ( comand == "reserveAnyRoom" ){
            cin >> name >> phoneNumber;
            myGuest = Guest( name, phoneNumber );
            hotel.reserveAnyRoom( myGuest, nNights );
        } else if ( comand == "freeRoom" ){
            cin >> id;
            hotel.freeRoom( id );
        } else if( comand == "infoSpecificReserve"){
            cin >> id;
            hotel.infoSpecificReserve(id - 1);
        }else if ( comand == "infoRooms" ){
            hotel.info();
        } else if( comand == "infoReserves"){
            hotel.infoReserves();
        }else if ( comand == "help" ){
            showCommands();
        } else {
            cout << "The command wasn't understood" << endl ;
        }
        cin >> comand;
    }
}

void showCommands(){
    cout << "Good day\n->_<-\nThe available commands are:\n'exit' | to exit\n";
    cout << "'reserveRoom' + roomId + clientName + clientPhone + numberNight | to reserve a particular room\n";
    cout << "'reserveAnyRoom' + clientName + clientPhone + numberNight | to reserve any room in the hotel\n";
    cout << "'freeRoom' + 'idReserver' | free a room \n";
    cout << "'infoSpecificReserve' + 'idReserver' | to get all the information related to the specific reserve\n";
    cout << "'infoReserves'        | to get all the information related to the Reserves\n";
    cout << "'infoRooms'           | to get all the information related to the Hotel and Rooms\n";
    cout << "'help'                | to show this again\n";

}