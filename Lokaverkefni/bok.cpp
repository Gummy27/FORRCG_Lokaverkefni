#include "bok.h"

Bok::Bok(){
    this->hofundur = "";
};

Bok::Bok(int id, string titill, string hofundur) : Safnkostur(id, titill){
    cout << "This constructor runs!" << endl;
    this->hofundur = hofundur;
};

string Bok::getHofundur(){
    return this->hofundur;
};

void Bok::setHofundur(){
    this->hofundur = hofundur;
};

void Bok::prenta(){
    cout << this->getId() << ", " << this->getTitill() << " eftir " << this->getHofundur() << endl;
};
