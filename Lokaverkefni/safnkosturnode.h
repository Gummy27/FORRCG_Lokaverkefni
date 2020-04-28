#pragma once

#include "safnkostur.h"
#include "bok.h"
#include "myndband.h"
#include "timarit.h"

struct GognNode {
    Safnkostur* data;
    GognNode* next;

    GognNode(Safnkostur* nyttStak){
        data = nyttStak;
        next = nullptr;
    }
};