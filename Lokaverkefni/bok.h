#pragma once

#include "safnkostur.h"

class Bok : public Safnkostur {
    private:
        std::string hofundur;
    public:
        Bok();
        Bok(int id, std::string titill, std::string hofundur);
        std::string getHofundur();
        void setHofundur(std::string hofundur);
        void prenta();
};