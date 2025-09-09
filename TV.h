#ifndef TV_H
#define TV_H

#include "Appliance.h"

// TV class inherits from Appliance
class TV : public Appliance {
private:
    double screenSize; // screen size in inches

public:
    TV(); // default constructor
    TV(int powerRating, double screenSize); // constructor with parameters
    
    void setScreenSize(double screenSize); // set screen size
    double getScreenSize(); // get screen size
    double getPowerConsumption(); // calculate power consumption
};

#endif
