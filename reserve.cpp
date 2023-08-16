#include "reserve.h"

Reserve::Reserve(int id, Guest& guest, Room& room, Payment& payment)
        : id(id), guestRef(&guest), roomRef(&room), paymentRef(&payment), status("Enabled") {
        // ...
    }

int Reserve::getId(){
    return this->id;
};

Guest* Reserve::getGuest(){
    return guestRef;
}

Room* Reserve::getRoom(){
    return roomRef;
}

Payment* Reserve::getPayment(){
    return paymentRef;
}

string Reserve::getStatus(){
    return this->status;
}

bool Reserve::finish(){
    this->status = "Disabled";
    (*roomRef).freeRoom();
    return (*roomRef).freeRoom();
}



void Reserve::infoSimple(){
    cout << "***********************************"<< endl;
    cout << "- Reserve:" << endl;
    cout << "Id: " << this->getId() << endl;
    cout << "Status: " << this->getStatus() << endl;
};

void Reserve::infoComplete(){
    this->infoSimple();
    guestRef->info();
    roomRef->info();
}

