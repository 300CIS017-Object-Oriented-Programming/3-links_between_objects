#ifndef GUEST_H
#define GUEST_H

#include <string>
#include <iostream>
#include <random>

using namespace std;

class Guest{
private:
    string name;
    string phoneNumber;
    int cash;
public:
    Guest(const string& name, const string& phoneNumber);
    Guest();

    /*
     * setters y getters
     */
    string getName();
    string getPhoneNumber();
    int getCash();
    /*
     * metodos
     */
    void pay(int value);
    void info();
};

#endif
