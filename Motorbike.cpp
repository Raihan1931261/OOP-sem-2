#include "Motorbike.h"

int Motorbike::getParkingDuration() const {
    int s = secondsSinceEntry();
    return static_cast<int>(s * 0.85); // 15% reduction
}
