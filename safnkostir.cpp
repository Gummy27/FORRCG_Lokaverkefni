#include "safnkostir.h"

Safnkostir::Safnkostir(){
    this->id = -1;
    this->nafn = "";
};

Safnkostir::Safnkostir(int id, std::string nafn){
    this->id = id;
    this->nafn = nafn;
};

int Safnkostir::getId(){
    return this->id;

};

void Safnkostir::setId(){
    this->id = id;
};

std::string Safnkostir::getNafn(){
    return this->nafn;
};

void Safnkostir::setNafn(std::string nafn){
    this->nafn = nafn;
};

void Safnkostir::prenta(){
    std::cout << "Safnkostur: " << this->id << ", " << this->nafn;
};

