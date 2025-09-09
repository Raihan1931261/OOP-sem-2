#include "Fridge.h"

Fridge::Fridge() {
    volume = 0; // set volume to 0
}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating) {
    this->volume = volume;
}

void Fridge::setVolume(double volume) {
    this->volume = volume;
}

double Fridge::getVolume() {
    return volume;
}

// calculate power consumption using formula
double Fridge::getPowerConsumption() {
    double power = get_powerRating() * 24.0 * (volume / 100.0); // formula from worksheet
    return power;
}
