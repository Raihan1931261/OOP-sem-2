#include <iostream>
#include "Appliance.h"
using namespace std;

int main() {
    Appliance app1;
    cout << "Power rating: " << app1.get_powerRating() << endl;
    cout << "Is on: " << app1.get_isOn() << endl;
    
    Appliance app2(100);
    cout << "App2 power: " << app2.get_powerRating() << endl;
    
    app2.turnOn();
    cout << "App2 is on now: " << app2.get_isOn() << endl;
    
    app2.turnOff();
    cout << "App2 is on: " << app2.get_isOn() << endl;
    
    cout << "Power consumption: " << app2.getPowerConsumption() << endl;
    
    return 0;
}
