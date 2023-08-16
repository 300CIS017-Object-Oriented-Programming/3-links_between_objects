#include "guest.h"

Guest::Guest(const string& name, const string& phoneNumber){
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(10000, 80000);
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->cash = dist(mt);
}

Guest::Guest(){
    this->name = "Null";
    this->phoneNumber = "-1" ;
    this->cash = -1;
}

string Guest::getName(){
    return this->name;
}

string Guest::getPhoneNumber(){
    return this->phoneNumber;
}

int Guest::getCash(){
    return this->cash;
}

void Guest::info(){
    cout << "-----------------------------------"<< endl;
    cout << "- Guest:" << endl;
    cout << "Name: " << this->getName() << endl;
    cout << "Cel: " << this->getPhoneNumber() << endl;
}

void Guest::pay(int valor){
    this->cash -= valor;
}
