#include "timarit.h"

Timarit::Timarit(){
    this->tolublad = 0;
};

Timarit::Timarit(int id, string titill, int tolublad) : Safnkostur(id, titill){
    this->tolublad = 0;
};

int Timarit::getTolublad(){
    return this->tolublad;
};

void Timarit::setTolublad(int tolublad){
    this->tolublad = tolublad;
};

void Timarit::prenta(){
    cout << this->getId() << ", " << this->getTitill() << ", tlb. " << this->getTolublad() << endl;
};
