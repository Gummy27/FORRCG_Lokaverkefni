#pragma once

#include "safnkostur.h"

struct GognNode {
    Safnkostur* data;
    GognNode* next;

    GognNode(Safnkostur* nyttStak){
        data = nyttStak;
        next = nullptr;
    }
};