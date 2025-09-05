#include "Bus.h"

int Bus::getParkingDuration() const {
    int s = secondsSinceEntry();
    return static_cast<int>(s * 0.75); // 25% reduction
}
