#include "bok.h"

Bok::Bok(){
    this->hofundur = "";
};

Bok::Bok(int id, string titill, string hofundur) : Safnkostur(id, titill){
    this->hofundur = hofundur;
};

string Bok::getHofundur(){
    return this->hofundur;
};

void Bok::setHofundur(string hofundur){
    this->hofundur = hofundur;
};

void Bok::vista(){
    ofstream file;
    file.open("baekur.txt", ios_base::app);

    if(!file){
        cout << "Villa kom upp! Bókin" << this->getTitill() << "var ekki vistuð!" << endl;
    } else {
        file << this->getId()       << " "
             << this->getTitill()   << " "
             << this->getHofundur() << endl;
    }
    file.close();
};

void Bok::prenta(){
    cout << this->getId() << ", " << this->getTitill() << " eftir " << this->getHofundur() << endl;
};
