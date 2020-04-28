#include <iostream>
#include <sstream>

#include "bokasafn.h"
#include "bok.h"
using namespace std;

int main(){
    Bokasafn b;

    Bok* c = new Bok(3, "Englar Alheimsins", "Einar Már");
    Bok* d = new Bok(1, "Sjálfstætt fólk", "Halli Lax");
    Bok* e = new Bok(2, "Hella gay", "No one cares");

    b.setjaILista(c);
    b.setjaILista(d);
    b.setjaILista(e);

    string inntak;
    string skipun;
    string form;
    string titill;
    string hofundur;
    int lengd_tolublad;
    int id;

    do {
        cout << "Hvað viltu gera? ";
        getline(cin, inntak);

        stringstream ss;
        
        ss << inntak;
        ss >> skipun;
        if(skipun == "skrá" || skipun == "skra") {
            ss >> form >> id >> titill;
            if(form == "bók" || form == "bok") {
                ss >> hofundur;
                b.skraBok(id, titill, hofundur);
            } else if(form == "tímarit" || form == "timarit") {
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
            b.skodaSafnkost(id);
        } else if(skipun == "eyða") { 
            ss >> id;
            b.afskraSafnkost(id);
        } else if(skipun == "breyta") { 
            ss >> form;
            if(form == "titil") {
                ss >> id >> titill;
                b.breytaTitil(id, titill);
            } else if(form == "höfundur" || form == "hofundur") {
                ss >> id >> hofundur;
                b.breytaHofundur(id, hofundur);
            } else if(form == "lengd") {
                ss >> id >> lengd_tolublad;
                b.breytaLengd(id, lengd_tolublad);
            } else if(form == "tölublað" || form == "tolublad") {
                ss >> id >> lengd_tolublad;
                b.breytaTolublad(id, lengd_tolublad);
            }

        } else if(skipun == "prenta") {
            b.prentaAllaSafnkosti();
        } else if(skipun != "hætta"){
            cout << "Óþekkt skipun! Reyndu aftur." << endl;
        }
    cout << "----------------------" << endl;
    } while(skipun != "hætta");

    cout << "Sjáumst seinna :)" << endl;    
    return 0;
};