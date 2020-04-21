#pragma once

#include <iostream>
#include <string>

class Safnkostur {
    private:
        int id;
        std::string titill;

    public:
        Safnkostur();
        Safnkostur(int id, std::string titill);
        int getId();
        void setId();
        std::string getTitill();
        void setTitill(std::string titill);
        virtual void prenta();
        virtual ~Safnkostur() {}
};