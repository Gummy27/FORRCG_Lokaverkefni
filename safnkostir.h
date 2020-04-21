#pragma once

#include <iostream>
#include <string>

class Safnkostir {
    private:
        int id;
        std::string nafn;

    public:
        Safnkostir();
        Safnkostir(int id, std::string nafn);
        int getId();
        void setId();
        std::string getNafn();
        void setNafn(std::string nafn);
        virtual void prenta();
        virtual ~Safnkostir() {}
};