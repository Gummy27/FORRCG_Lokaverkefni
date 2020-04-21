#include "bokasafn.h"


Bokasafn::Bokasafn(){
    this->staerdFylkis = 0;
    this->fjoldi = 0;
    this->bokasafn = new Safnkostur*[this->staerdFylkis]();
};

Bokasafn::Bokasafn(int upphafsstaerd){
    this->staerdFylkis = upphafsstaerd;
    this->fjoldi = 0;
    this->bokasafn = new Safnkostur*[this->staerdFylkis]();
};

void Bokasafn::skraSafnkost(Safnkostur* safnkostur){
    if(this->fjoldi < this->staerdFylkis) {
        this->bokasafn[fjoldi++] = safnkostur;
    } else {
        Safnkostur** temp = new Safnkostur*[this->staerdFylkis+2];
        for(int i = 0; i < this->staerdFylkis; i++){
            temp[i] = this->bokasafn[i];
        }
        delete [] this->bokasafn;
        this->bokasafn = temp;
        this->staerdFylkis += 2;
        this->bokasafn[fjoldi++] = safnkostur;
    }
}

void Bokasafn::skraBok(int id, std::string titill, std::string hofundur){
    Bok* bok = new Bok(id, titill, hofundur);
    skraSafnkost(bok);
};

void Bokasafn::skraTimarit(int id, std::string titill, int tolublad){
    Timarit* timarit = new Timarit(id, titill, tolublad);
    skraSafnkost(timarit);
};

void Bokasafn::skraMyndband(int id, std::string titill, int lengd){
    Myndband* myndband = new Myndband(id, titill, lengd);
    skraSafnkost(myndband);
};

void Bokasafn::afskraSafnkost(int id){
    for(int i = 0; i < this->staerdFylkis; i++){
        if(this->bokasafn[i]->getId() == id){
            delete bokasafn[i];
            bokasafn[i] = nullptr;
        }
    }
};

void Bokasafn::prenta(){
    for(int i = 0; i < this->staerdFylkis; i++){
        if(bokasafn[i] != nullptr){
            bokasafn[i]->prenta();
        }
    }
};

Bokasafn::~Bokasafn(){

};
