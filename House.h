#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

// House class that holds appliances
class House {
private:
    Appliance** appliances; // array of appliance pointers
    int numAppliances; // number of appliances

public:
    House(); // default constructor
    House(int numAppliances); // constructor with number of appliances
    
    bool addAppliance(Appliance* appliance); // add appliance to house
    double getTotalPowerConsumption(); // get total power consumption
};

#endif
