#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

// Fridge class inherits from Appliance
class Fridge : public Appliance {
private:
    double volume; // volume in litres

public:
    Fridge(); // default constructor
    Fridge(int powerRating, double volume); // constructor
    
    void setVolume(double volume); // set volume
    double getVolume(); // get volume
    double getPowerConsumption(); // calculate power
};

#endif
