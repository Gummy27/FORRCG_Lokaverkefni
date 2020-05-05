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

void Myndband::setLengd(int lengd){
    this->lengd = lengd;
};

void Myndband::vista(){
    ofstream file;
    file.open("myndbond.txt", ios_base::app);

    if(!file){
        cout << "Villa kom upp! Bókin" << this->getTitill() << "var ekki vistuð!" << endl;
    } else {
        file << this->getId()       << " "
             << this->getTitill()   << " "
             << this->getLengd()    << endl;
    }

    file.close();
}

void Myndband::prenta(){
    cout << this->getId() << ", " << this->getTitill() << ", " << this->getLengd() << " min að lengd" << endl;
};
