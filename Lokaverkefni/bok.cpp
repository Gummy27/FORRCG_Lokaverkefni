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

void Bok::prenta(){
    cout << this->getId() << ", " << this->getTitill() << " eftir " << this->getHofundur() << endl;
};
