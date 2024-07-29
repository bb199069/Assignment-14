
#include "Car.hpp"

#include <iostream>
using namespace std;

Car::Car(const string& manu, int year, int doors) : Vehicle(manu, year), numDoors(doors) {}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::setNumDoors(int doors) {
    numDoors = doors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numDoors <<endl;
}
