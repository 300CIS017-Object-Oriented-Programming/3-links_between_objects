#ifndef ROOM_H
#define ROOM_H

#include "guest.h"

class Room{
private:
    int id;
    bool available;
    int cost;
public:
    Room(const int& id, const int& cost);

    /*
     * setters y getters
     */
    int getCost();
    int getId();
    /*
     * metodos
     */
    //bool reserve(Guest& gues);
    bool isAvailable();
    bool freeRoom();
    void info();
    bool reserve( Guest &guest, int nNight);
};

#endif
