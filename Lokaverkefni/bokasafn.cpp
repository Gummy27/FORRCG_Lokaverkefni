#include "bokasafn.h"

Bokasafn::Bokasafn(){
    this->head = nullptr;
    
    int id, tolublad_lengd;
    string titill, hofundur;

    ifstream file;

    file.open("baekur.txt");
    while (file >> id >> titill >> hofundur){
        this->skraBok(id, titill, hofundur);
    }
    file.close();

    file.open("timarit.txt");
    while (file >> id >> titill >> tolublad_lengd){
        this->skraTimarit(id, titill, tolublad_lengd);
    }
    file.close();

    file.open("myndbond.txt");
    while (file >> id >> titill >> tolublad_lengd){
        this->skraMyndband(id, titill, tolublad_lengd);
    }
    file.close();
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

void Bokasafn::skraBok(int id, string titill, string hofundur){
    this->setjaILista(new Bok(id, titill, hofundur));
};

void Bokasafn::skraTimarit(int id, string titill, int tolublad){
    this->setjaILista(new Timarit(id, titill, tolublad));
};

void Bokasafn::skraMyndband(int id, string titill, int lengd){
    this->setjaILista(new Myndband(id, titill, lengd));
};

GognNode* Bokasafn::leitaSafnkost(int id){
    GognNode* current = this->head;
    while(current){
        if(current->data->getId() == id){
            return current;
        }
        current = current->next;
    }  
    cout << "Enginn safnkostur er með þetta id í bókasafninu." << endl;
    return nullptr;
}

void Bokasafn::skodaSafnkost(int id){
    leitaSafnkost(id)->data->prenta();
};

void Bokasafn::afskraSafnkost(int id){
    if(this->head->data->getId() == id) {
        delete this->head;
        this->head = this->head->next;
        cout << "Hluturinn var skráður út af bókasafninu." << endl;
    } else {
        GognNode* current = this->head;
        GognNode* prev = this->head;
        while(current){
            if(current->data->getId() == id){
                prev->next = current->next;
                delete current;
                cout << "Hluturinn var skráður út af bóksafninu." << endl;
                break;
            }
            prev = current;
            current = current->next;
        }
        if(!current){
            cout << "Enginn safnkostur er með þetta id í bókasafninu." << endl;
        } 
    }
};

void Bokasafn::breytaTitil(int id, string titill){
    Safnkostur* safnkostur = leitaSafnkost(id)->data;
    if(safnkostur){
        safnkostur->setTitill(titill);
        cout << "Titil bókarinnar hefur verið uppfærður." << endl;
    } else {
        cout << "Titill var ekki uppfærður! Reyndu aftur." << endl;
    }
};

void Bokasafn::breytaHofundur(int id, string hofundur){
    Bok* safnkostur = (Bok*) leitaSafnkost(id)->data;
    if(safnkostur) {
        safnkostur->setHofundur(hofundur);
        cout << "Höfundur bókarinn hefur verið uppfærður." << endl;
    } else {
        cout << "Höfundur var ekki uppfærður! Reyndu aftur." << endl;
    }
};

void Bokasafn::breytaLengd(int id, int lengd){
    Myndband* safnkostur = (Myndband*) leitaSafnkost(id)->data;
    if(safnkostur) {
        safnkostur->setLengd(lengd);
        cout << "Lengd myndbandsins hefur verið uppfært." << endl;
    } else {
        cout << "lengd var ekki uppfærð! Reyndu aftur." << endl;
    }
};

void Bokasafn::breytaTolublad(int id, int tolublad){
    Timarit* safnkostur = (Timarit*) leitaSafnkost(id)->data;
    if(safnkostur) {
        safnkostur->setTolublad(tolublad);
        cout << "Tölublað tímaritsins hefur verið uppfært." << endl;
    } else {
        cout << "Tölublað var ekki uppfært! Reyndu aftur." << endl;
    }
};

void Bokasafn::vistaSafnosti(){
    std::ofstream ofs;
    ofs.open("baekur.txt", std::ofstream::out | std::ofstream::trunc);
    ofs.close();
    ofs.open("myndbond.txt", std::ofstream::out | std::ofstream::trunc);
    ofs.close();
    ofs.open("timarit.txt", std::ofstream::out | std::ofstream::trunc);
    ofs.close();

    GognNode* current = this->head;
    if(current) {
        while(current) {
            current->data->vista();
            current = current->next;
        }
    } else {
        cout << "Það eru enginn gögn hér til þess að vista!" << endl;
    }
};

void Bokasafn::prentaAllaSafnkosti(){
    GognNode* current = this->head;
    if(current) {
        while(current) {
            current->data->prenta();
            current = current->next;
        }
    } else {
        cout << "Bókasafnið er autt. Komdu aftur seinna." << endl;
    }
}

