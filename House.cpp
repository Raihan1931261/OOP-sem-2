#include "House.h"

// default constructor
House::House() {
    appliances = 0; // no appliances
    numAppliances = 0;
}

// constructor with number of appliances
House::House(int numAppliances) {
    this->numAppliances = numAppliances;
    appliances = new Appliance*[numAppliances]; // create array
    for (int i = 0; i < numAppliances; i++) {
        appliances[i] = 0; // initialize to null
    }
}

// add appliance to house
bool House::addAppliance(Appliance* appliance) {
    for (int i = 0; i < numAppliances; i++) {
        if (appliances[i] == 0) { // find empty spot
            appliances[i] = appliance;
            return true; // added successfully
        }
    }
    return false; // no space
}

// get total power consumption
double House::getTotalPowerConsumption() {
    double total = 0;
    for (int i = 0; i < numAppliances; i++) {
        if (appliances[i] != 0) { // if appliance exists
            total = total + appliances[i]->getPowerConsumption(); // add power
        }
    }
    return total;
}
