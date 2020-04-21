#include "timarit.h"

Timarit::Timarit(){
    this->tolublad = 0; 
};

Timarit::Timarit(int id, std::string titill, int tolublad){
    this->tolublad = tolublad;
};

int Timarit::getTolublad(){
    return this->tolublad;
};

void Timarit::setHofundur(int tolublad){
    this->tolublad = tolublad;
};

void Timarit::prenta(){
    std::cout << this->getId() << ", " << this->getTitill() << " Tölublað:" << this->getTolublad();
};
