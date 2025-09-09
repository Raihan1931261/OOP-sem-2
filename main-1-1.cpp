#include <iostream>
#include "Appliance.h"
using namespace std;

int main() {
    // test default constructor
    Appliance app1;
    cout << "Power rating: " << app1.get_powerRating() << endl;
    cout << "Is on: " << app1.get_isOn() << endl;
    
    // test constructor with parameter
    Appliance app2(100);
    cout << "App2 power: " << app2.get_powerRating() << endl;
    
    // test turn on/off
    app2.turnOn();
    cout << "App2 is on now: " << app2.get_isOn() << endl;
    
    app2.turnOff();
    cout << "App2 is on: " << app2.get_isOn() << endl;
    
    // test power consumption
    cout << "Power consumption: " << app2.getPowerConsumption() << endl;
    
    return 0;
}
