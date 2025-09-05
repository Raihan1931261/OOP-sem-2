#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    Vehicle** vehicles;     // dynamic array of pointers
    int maxCapacity;
    int currentCount;

public:
    explicit ParkingLot(int capacity);
    ~ParkingLot();

    int getCount() const;
    void parkVehicle(Vehicle* v);      // prints "The lot is full" when full
    void unparkVehicle(int id);        // prints "Vehicle not in the lot" when missing
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif
