#pragma once

#include "safnkostur.h"

class Myndband : public Safnkostur {
    private:
        int lengd;
    public:
        Myndband();
        Myndband(int id, string titill, int lengd);
        int getLengd();
        void setLengd(int lengd);
        void prenta();
};