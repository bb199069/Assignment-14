//Branden Bowling
// CIS 1202
//  Assignment #14
//7/28/24.


#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Truck.hpp"

using namespace std;

int main() {
    string manufacturer;
    int year;
    int doors;
    double capacity;

 
    cout << "Enter vehicle manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> year;
    cin.ignore();

    Vehicle vehicle(manufacturer, year);
    cout << "\nVehicle Information:\n";
    vehicle.displayInfo();

    
    cout << "\nEnter car manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> year;
    cout << "Enter number of doors: ";
    cin >> doors;
    cin.ignore();

    Car car(manufacturer, year, doors);
    cout << "\nCar Information:\n";
    car.displayInfo();


    cout << "\nEnter truck manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> year;
    cout << "Enter towing capacity (in tons): ";
    cin >> capacity;

    Truck truck(manufacturer, year, capacity);
    cout << "\nTruck Information:\n";
    truck.displayInfo();

    return 0;
}
