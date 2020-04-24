#include "myndband.h"

Myndband::Myndband(){
    this->lengd = 0;
};

Myndband::Myndband(int id, string titill, int lengd) : Safnkostur(id, titill){
    this->lengd = lengd;
};

int Myndband::getLengd(){
    return this->lengd; 
};

void Myndband::setLengd(){
    this->lengd = lengd;
};

void Myndband::prenta(){
    cout << this->getId() << ", " << this->getTitill() << ", " << this->getLengd() << " min að lengd" << endl;
};
