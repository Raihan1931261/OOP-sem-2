#include <iostream>
#include "Fridge.h"
using namespace std;

int main() {
    Fridge f1;
    cout << "Fridge power: " << f1.get_powerRating() << endl;
    cout << "Fridge volume: " << f1.getVolume() << endl;
    
    Fridge f2(150, 200);
    cout << "F2 power: " << f2.get_powerRating() << endl;
    cout << "F2 volume: " << f2.getVolume() << endl;
    cout << "F2 consumption: " << f2.getPowerConsumption() << endl;
    
    f1.set_powerRating(120);
    f1.setVolume(180);
    cout << "F1 new power: " << f1.get_powerRating() << endl;
    cout << "F1 consumption: " << f1.getPowerConsumption() << endl;
    
    return 0;
}
