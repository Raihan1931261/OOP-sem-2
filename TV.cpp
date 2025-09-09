#include "TV.h"

// default constructor
TV::TV() {
    screenSize = 0; // set screen size to 0
}

// constructor with parameters
TV::TV(int powerRating, double screenSize) : Appliance(powerRating) {
    this->screenSize = screenSize; // set screen size
}

// set the screen size
void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

// get the screen size
double TV::getScreenSize() {
    return screenSize;
}

// calculate power consumption using the formula
double TV::getPowerConsumption() {
    double power = get_powerRating() * (screenSize / 10.0); // formula from assignment
    return power;
}
