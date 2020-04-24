#pragma once

#include <iostream>
#include <string>

using namespace std;

class Safnkostur {
    private:
        int id;
        string titill;
    public:
        Safnkostur();
        Safnkostur(int id, string titill);

        int getId();
        string getTitill();

        void setId(int id);
        void setTitill(string titill);

        virtual void prenta();
};