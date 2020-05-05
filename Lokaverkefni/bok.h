#pragma once

#include "safnkostur.h"

class Bok : public Safnkostur {
    private:
        std::string hofundur;
    public:
        Bok();
        Bok(int id, string titill, string hofundur);
        string getHofundur();
        void setHofundur(string hofundur);
        void vista();
        void prenta();
};