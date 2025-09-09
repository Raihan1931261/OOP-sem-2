#include <iostream>
#include "TV.h"
using namespace std;

int main() {
    TV tv1;
    cout << "TV power: " << tv1.get_powerRating() << endl;
    cout << "TV size: " << tv1.getScreenSize() << endl;
    
    TV tv2(200, 55);
    cout << "TV2 power: " << tv2.get_powerRating() << endl;
    cout << "TV2 size: " << tv2.getScreenSize() << endl;
    cout << "TV2 consumption: " << tv2.getPowerConsumption() << endl;
    
    tv1.set_powerRating(180);
    tv1.setScreenSize(42);
    cout << "TV1 consumption: " << tv1.getPowerConsumption() << endl;
    
    tv2.turnOn();
    cout << "TV2 on: " << tv2.get_isOn() << endl;
    
    return 0;
}
