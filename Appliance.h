#ifndef APPLIANCE_H
#define APPLIANCE_H

// Base class for appliances
class Appliance {
private:
    int powerRating; // power rating
    bool isOn; // if appliance is on

public:
    // constructors
    Appliance();
    Appliance(int powerRating);
    
    // getters
    int get_powerRating();
    bool get_isOn();
    // setters
    void set_powerRating(int powerRating);
    void set_isOn(bool isOn);
    
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption(); // virtual function
};

#endif
