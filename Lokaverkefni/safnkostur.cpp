#include "safnkostur.h"

Safnkostur::Safnkostur(){
    this->id = -1;
    this->titill = "";
};

Safnkostur::Safnkostur(int id, std::string Titill){
    this->id = id;
    this->titill = titill;
};

int Safnkostur::getId(){
    return this->id;

};

void Safnkostur::setId(){
    this->id = id;
};

std::string Safnkostur::getTitill(){
    return this->titill;
};

void Safnkostur::setTitill(std::string titill){
    this->titill = titill;
};

void Safnkostur::prenta(){
    std::cout << "Safnkostur: " << this->id << ", " << this->titill;
};

