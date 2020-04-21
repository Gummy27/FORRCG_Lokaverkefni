#pragma once

#include <iostream>
#include <string>

#include "safnkostur.h"
#include "bok.h"
#include "timarit.h"
#include "myndband.h"

class Bokasafn {
    private:
        Safnkostur** bokasafn;
        int staerdFylkis;
        int fjoldi;
    public:
        Bokasafn();
        Bokasafn(int upphafsstaerd);
        void skraSafnkost(Safnkostur* safnkostur);
        void skraBok(int id, std::string titill, std::string hofundur);
        void skraTimarit(int id, std::string titill, int tolublad);
        void skraMyndband(int id, std::string titill, int lengd);
        void afskraSafnkost(int id);
        void prenta();
        ~Bokasafn();
};