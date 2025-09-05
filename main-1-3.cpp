#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);

    // Park 5 cars, 3 buses, 2 motorbikes (IDs 1..10 as an example)
    int id = 1;
    for (int i = 0; i < 5; ++i) lot.parkVehicle(new Car(id++));
    for (int i = 0; i < 3; ++i) lot.parkVehicle(new Bus(id++));
    for (int i = 0; i < 2; ++i) lot.parkVehicle(new Motorbike(id++));

    // Count > 15 seconds
    int result = lot.countOverstayingVehicles(15);
    std::cout << result << std::endl;
    return 0;
}
