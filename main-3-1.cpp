#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"
using namespace std;

int main() {
    // create house with 3 appliances
    House myHouse(3);
    
    // create appliances
    Fridge* fridge = new Fridge(150, 200);
    TV* tv = new TV(100, 42);
    Appliance* app = new Appliance(50);
    
    // add appliances to house
    myHouse.addAppliance(fridge);
    myHouse.addAppliance(tv);
    myHouse.addAppliance(app);
    
    // print total power
    cout << "Total power: " << myHouse.getTotalPowerConsumption() << endl;
    
    // try to add another appliance (should fail)
    Appliance* extra = new Appliance(75);
    bool added = myHouse.addAppliance(extra);
    cout << "Added extra: " << added << endl;
    
    // test empty house
    House emptyHouse;
    cout << "Empty house power: " << emptyHouse.getTotalPowerConsumption() << endl;
    
    return 0;
}
