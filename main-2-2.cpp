#include <iostream>
#include "TV.h"
using namespace std;

int main() {
    // test default constructor
    TV tv1;
    cout << "TV power: " << tv1.get_powerRating() << endl;
    cout << "TV size: " << tv1.getScreenSize() << endl;
    
    // test constructor with parameters
    TV tv2(200, 55);
    cout << "TV2 power: " << tv2.get_powerRating() << endl;
    cout << "TV2 size: " << tv2.getScreenSize() << endl;
    cout << "TV2 consumption: " << tv2.getPowerConsumption() << endl;
    
    // test setters and methods
    tv1.set_powerRating(180);
    tv1.setScreenSize(42);
    cout << "TV1 consumption: " << tv1.getPowerConsumption() << endl;
    
    // test turning on
    tv2.turnOn();
    cout << "TV2 on: " << tv2.get_isOn() << endl;
    
    return 0;
}
