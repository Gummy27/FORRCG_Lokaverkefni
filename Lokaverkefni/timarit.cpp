#include "timarit.h"

Timarit::Timarit(){
    this->tolublad = 0;
};

Timarit::Timarit(int id, string titill, int tolublad) : Safnkostur(id, titill){
    this->tolublad = tolublad;
};

int Timarit::getTolublad(){
    return this->tolublad;
};

void Timarit::setTolublad(int tolublad){
    this->tolublad = tolublad;
};

void Timarit::vista(){
    ofstream file;
    file.open("timarit.txt", ios_base::app);

    if(!file){
        cout << "Villa kom upp! Bókin" << this->getTitill() << "var ekki vistuð!" << endl;
    } else {
        file << this->getId()       << " "
             << this->getTitill()   << " "
             << this->getTolublad() << endl;
    }

    file.close();
}

void Timarit::prenta(){
    cout << this->getId() << ", " << this->getTitill() << ", tlb. " << this->getTolublad() << endl;
};
