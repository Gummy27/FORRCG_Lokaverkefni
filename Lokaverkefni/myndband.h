#pragma once

#include "safnkostur.h"

class Myndband : public Safnkostur {
    private:
        int lengd;
    public:
        Myndband();
        Myndband(int id, std::string titill, int lengd);
        int getLengd();
        void setHofundur(int lengd);
        void prenta();
};