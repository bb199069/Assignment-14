

#include "Truck.hpp"

#include <iostream>
using namespace std;

Truck::Truck(const string& manu, int year, double capacity) : Vehicle(manu, year), towingCapacity(capacity) {}

double Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(double capacity) {
    towingCapacity = capacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
   cout << "Towing Capacity: " << towingCapacity << " tons" << endl;
}
