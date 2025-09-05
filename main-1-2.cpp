#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

static Vehicle* makeVehicle(const std::string& type, int id) {
    if (type == "car") return new Car(id);
    if (type == "bus") return new Bus(id);
    return new Motorbike(id);
}

int main() {
    ParkingLot lot(10);

    while (lot.getCount() < 10) {
        std::string type; int id;
        std::cin >> type >> id; // type then id
        lot.parkVehicle(makeVehicle(type, id)); // prints if full
    }

    int removeId;
    std::cin >> removeId;
    lot.unparkVehicle(removeId); // prints if not found
    return 0;
}
