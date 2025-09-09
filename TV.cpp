#include "TV.h"

TV::TV() {
    screenSize = 0;
}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating) {
    this->screenSize = screenSize;
}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getScreenSize() {
    return screenSize;
}

double TV::getPowerConsumption() {
    double power = get_powerRating() * (screenSize / 10.0);
    return power;
}
