#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include <iostream>
#include <random>

using namespace std;

class Payment{
private:
    int amount;
    int nNight;
public:
    Payment(int costNight, int nNight);
    int getAmount();
    int getNNight();
};

#endif
