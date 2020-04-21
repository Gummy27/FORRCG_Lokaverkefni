#include "myndband.h"

Myndband::Myndband(){
    this->lengd = 0;
};

Myndband::Myndband(int id, std::string titill, int lengd){
    this->lengd = lengd;
};

int Myndband::getLengd(){
    return this->lengd;
};

void Myndband::setHofundur(int lengd){
    this->lengd = lengd;
};

void Myndband::prenta(){
    std::cout << this->getId() << ", " << this->getTitill() << " lengd:" << this->getLengd() << " min.";
};
