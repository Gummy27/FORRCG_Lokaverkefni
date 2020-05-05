#pragma once

#include "safnkostur.h"

class Timarit : public Safnkostur {
    private:
        int tolublad;
    public:
        Timarit();
        Timarit(int id, string titill, int tolublad);
        int getTolublad();
        void setTolublad(int tolublad);
        void vista();
        void prenta();
};