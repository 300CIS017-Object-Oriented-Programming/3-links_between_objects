#include "payment.h"

Payment::Payment(int costNight, int nNight): nNight(nNight), amount(nNight * costNight){

};

int Payment::getAmount(){
    return amount;
}

int Payment::getNNight(){
    return nNight;
}