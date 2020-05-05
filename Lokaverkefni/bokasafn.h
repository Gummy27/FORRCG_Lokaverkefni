#pragma once

#include "safnkosturnode.h"

class Bokasafn {
    private:
        GognNode* head;
    public:
        Bokasafn();
        void setjaILista(Safnkostur* Safnkostur);

        void skraBok(int id, string titill, string hofundur);
        void skraTimarit(int id, string titill, int tolublad);
        void skraMyndband(int id, string titill, int lengd);

        void skodaSafnkost(int id);
        void afskraSafnkost(int id);

        void breytaTitil(int id, string titill);
        void breytaHofundur(int id, string hofundur);
        void breytaLengd(int id, int lengd_tolublad);
        void breytaTolublad(int id, int tolublad);

        void vistaSafnosti();

        GognNode* leitaSafnkost(int id);

        void prentaAllaSafnkosti();
};