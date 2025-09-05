#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity)
    : vehicles(new Vehicle*[capacity]), maxCapacity(capacity), currentCount(0) {}

ParkingLot::~ParkingLot() {
    // delete any vehicles still in the lot
    for (int i = 0; i < currentCount; ++i) delete vehicles[i];
    delete[] vehicles;
}

int ParkingLot::getCount() const { return currentCount; }

void ParkingLot::parkVehicle(Vehicle* v) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        delete v; // avoid leak on rejection
        return;
    }
    vehicles[currentCount++] = v;
}

void ParkingLot::unparkVehicle(int id) {
    int idx = -1;
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getID() == id) { idx = i; break; }
    }
    if (idx == -1) {
        std::cout << "Vehicle not in the lot" << std::endl;
        return;
    }
    delete vehicles[idx];
    for (int i = idx + 1; i < currentCount; ++i) vehicles[i - 1] = vehicles[i];
    --currentCount;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) ++count;
    }
    return count;
}
