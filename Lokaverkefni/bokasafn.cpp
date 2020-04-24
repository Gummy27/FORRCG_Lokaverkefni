#include "bokasafn.h"

Bokasafn::Bokasafn(){
    this->head = nullptr;
};

void Bokasafn::setjaILista(Safnkostur* safnkostur){
    if(this->head == nullptr) {
        this->head = new GognNode(safnkostur);
    } else {
        GognNode* nyttStak = new GognNode(safnkostur);
        if(this->head->data->getId() > nyttStak->data->getId()){
            nyttStak->next = this->head;
            this->head = nyttStak;
        } else {
            GognNode* current = this->head;
            GognNode* prev = this->head;
            while(current && current->data->getId() < nyttStak->data->getId()) {
                prev = current;
                current = current->next;
            }
            prev->next = nyttStak;
            nyttStak->next = current;
        }
    }
};

void Bokasafn::prentaAllaSafnkosti(){
    GognNode* current = this->head;
    while(current) {
        current->data->prenta();
        current = current->next;
    }
}