

#ifndef Car_hpp
#define Car_hpp
#include "Vehicle.hpp"
using namespace std;

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(const string& manu, int year, int doors);
    
    int getNumDoors() const;
    void setNumDoors(int doors);
    
    void displayInfo() const override;
};

#endif 
