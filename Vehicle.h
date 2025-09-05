#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    std::time_t timeOfEntry;
    int ID;

protected:
    // raw parked seconds since creation (no discounts)
    int secondsSinceEntry() const {
        std::time_t now = std::time(nullptr);
        return static_cast<int>(now - timeOfEntry);
    }

public:
    explicit Vehicle(int id);
    virtual ~Vehicle() = default;

    int getID() const;
    virtual int getParkingDuration() const = 0; // seconds (after class-specific reduction)
};

#endif
