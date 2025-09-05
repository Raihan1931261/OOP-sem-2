#include "Car.h"

int Car::getParkingDuration() const {
    int s = secondsSinceEntry();
    return static_cast<int>(s * 0.90); // 10% reduction
}
