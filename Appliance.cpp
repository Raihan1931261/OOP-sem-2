#include "Appliance.h"

Appliance::Appliance() {
    powerRating = 0;
    isOn = false;
}

Appliance::Appliance(int powerRating) {
    this->powerRating = powerRating;
    isOn = false;
}

int Appliance::get_powerRating() {
    return powerRating;
}

bool Appliance::get_isOn() {
    return isOn;
}

void Appliance::set_powerRating(int powerRating) {
    this->powerRating = powerRating;
}

void Appliance::set_isOn(bool isOn) {
    this->isOn = isOn;
}

void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}

double Appliance::getPowerConsumption() {
    return 0;
}
