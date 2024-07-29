

#ifndef VEHICLE_Hpp
#define VEHICLE_Hpp

#include <string>
using namespace std;

class Vehicle {
private:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle(const string& manu, int year);
    
    string getManufacturer() const;
    void setManufacturer(const string& manu);
    
    int getYearBuilt() const;
    void setYearBuilt(int year);
    
    virtual void displayInfo() const;
};

#endif 
