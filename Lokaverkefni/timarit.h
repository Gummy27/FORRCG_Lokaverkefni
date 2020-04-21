#pragma once

#include "safnkostur.h"

class Timarit : public Safnkostur {
    private:
        int tolublad;
    public:
        Timarit();
        Timarit(int id, std::string titill, int tolublad);
        int getTolublad();
        void setHofundur(int tolublad);
        void prenta();
};