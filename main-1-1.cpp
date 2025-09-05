#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int n;
    std::cin >> n; // number of vehicles
    std::vector<Vehicle*> arr;
    arr.reserve(n);

    for (int i = 0; i < n; ++i) {
        std::string type; int id;
        std::cin >> type >> id; // type in {car,bus,motorbike}
        if (type == "car") arr.push_back(new Car(id));
        else if (type == "bus") arr.push_back(new Bus(id));
        else arr.push_back(new Motorbike(id));
    }

    // Print parking duration (seconds) for each object
    for (Vehicle* v : arr) {
        std::cout << v->getParkingDuration() << std::endl;
        delete v;
    }
    return 0;
}
