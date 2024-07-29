
#include "Vehicle.hpp"
#include <iostream>
using namespace std;

Vehicle::Vehicle(const string& manu, int year) : manufacturer(manu), yearBuilt(year) {}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setManufacturer(const string& manu) {
    manufacturer = manu;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int year) {
    yearBuilt = year;
}

void Vehicle::displayInfo() const {
   cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}
