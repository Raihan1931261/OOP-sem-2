#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus : public Vehicle {
public:
    explicit Bus(int id) : Vehicle(id) {}
    int getParkingDuration() const override; // 25% reduction
};

#endif
