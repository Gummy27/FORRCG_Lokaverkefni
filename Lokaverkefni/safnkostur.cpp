#include "safnkostur.h"

Safnkostur::Safnkostur(){
    this->id = 0;
    this->titill = "";
};

Safnkostur::Safnkostur(int id, string titill){
    this->id = id;
    this->titill = titill;
};

int Safnkostur::getId(){
    return this->id;
};

string Safnkostur::getTitill(){
    return this->titill;
};

void Safnkostur::setId(int id){
    this->id = id;
};

void Safnkostur::setTitill(string titill){
    this->titill = titill;
};

void Safnkostur::vista(){
    ofstream file;
    file.open("test.txt", std::ios_base::app);

    if(!file){
        cout << "Villa kom upp! Bókin" << this->getTitill() << "var ekki vistuð!" << endl;
    } else {
        file << "s"                 << ","
             << this->getId()       << ","
             << this->getTitill()   << ",";
    }
}

void Safnkostur::prenta(){
    cout << this->getId() << ", " << this->getTitill() << endl;
};
