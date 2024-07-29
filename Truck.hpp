
#ifndef Truck_hpp
#define Truck_hpp
#include "Vehicle.hpp"
using namespace std;
class Truck : public Vehicle {
private:
    double towingCapacity;

public:
Truck(const string& manu, int year, double capacity);
    
    double getTowingCapacity() const;
    void setTowingCapacity(double capacity);
    
    void displayInfo() const override;
};

#endif
