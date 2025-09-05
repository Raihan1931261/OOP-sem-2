#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {
public:
    explicit Car(int id) : Vehicle(id) {}
    int getParkingDuration() const override; // 10% reduction
};

#endif
