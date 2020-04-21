#include "bok.h"

Bok::Bok(){
    this->hofundur = "";
};

Bok::Bok(int id, std::string titill, std::string hofundur){
    this->hofundur = hofundur;
};

std::string Bok::getHofundur(){
    return this->hofundur;
};

void Bok::setHofundur(std::string hofundur){
    this->hofundur = hofundur;
};

void Bok::prenta(){
    std::cout << this->getId() << ", " << this->getTitill() << " eftir " << this->getHofundur();
};
