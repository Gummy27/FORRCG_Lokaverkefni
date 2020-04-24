#include <iostream>
#include <sstream>

#include "bokasafn.h"
#include "bok.h"
using namespace std;

int main(){
    Bokasafn klasi;
    Bok* b = new Bok(3, "Englar Alheimsins", "Einar Már");
    Bok* c = new Bok(1, "Sjálfstætt fólk", "Halli Lax");
    Bok* d = new Bok(2, "Hella gay", "No one cares");
    b->prenta();
    c->prenta();
    d->prenta();

    cout << "-------------------" << endl;

    klasi.setjaILista(b);
    klasi.setjaILista(c);
    klasi.setjaILista(d);
    klasi.prentaAllaSafnkosti();

    /*
    Bokasafn b;

    string inntak;
    string skipun;
    string form;
    string titill;
    string hofundur;
    int lengd_tolublad;
    int id, einkunn;

   do {
        cout << "Hvað viltu gera? ";
        getline(cin, inntak);
        cout << inntak << endl;
        stringstream ss;
        ss << inntak;
        ss >> skipun;
        if(skipun == "skrá") {
            ss >> form >> id >> titill;
            if(form == "bók") {
                ss >> hofundur;
                b.skraBok(id, titill, hofundur);
            } else if(form == "tímarit") {
                ss >> lengd_tolublad;
                b.skraTimarit(id, titill, lengd_tolublad);
            } else if(form == "myndband") {
                ss >> lengd_tolublad;
                b.skraMyndband(id, titill, lengd_tolublad);
            } else {
                cout << "get ekki skráð " << form << endl;
            }
        } else if(skipun == "skoða") { 
            ss >> id;
        } else if(skipun == "eyða") { 
            ss >> id;
            b.afskraSafnkost(10);
        } else if(skipun == "breyta") { 
            ss >> form;
            if(form == "titill") {
                ss >> id >> titill;
                b.breytatitilli(id, titill);
            } else if(form == "einkunn") {
                ss >> id >> einkunn;
                b.breytaEinkunn(id, einkunn);
            } else if(form == "eigandi") {
                ss >> id >> titill;
                b.breytaEigandi(id, titill);
            }

        } else if(skipun == "prenta") {
            b.prenta();
        }
    } while(skipun != "hætta");
    */
    return 0;
};