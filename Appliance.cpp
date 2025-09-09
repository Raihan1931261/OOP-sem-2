#include "Appliance.h"

// default constructor
Appliance::Appliance() {
    powerRating = 0; // set to 0
    isOn = false; // set to false
}

// constructor with parameter
Appliance::Appliance(int powerRating) {
    this->powerRating = powerRating;
    isOn = false;
}

// get power rating
int Appliance::get_powerRating() {
    return powerRating;
}

// get if on
bool Appliance::get_isOn() {
    return isOn;
}

// set power rating
void Appliance::set_powerRating(int powerRating) {
    this->powerRating = powerRating;
}

// set on/off
void Appliance::set_isOn(bool isOn) {
    this->isOn = isOn;
}

// turn on appliance
void Appliance::turnOn() {
    isOn = true;
}

// turn off appliance
void Appliance::turnOff() {
    isOn = false;
}

// return power consumption - base returns 0
double Appliance::getPowerConsumption() {
    return 0;
}
