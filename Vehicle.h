#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Vehicle{
    private:
        string myVehicleRegistrationPlate;
        int myDriversAge;
    public:
        Vehicle();
        Vehicle(string VehicleRegistrationPlate, int DriversAge );
        string GetVehicleRegistrationPlate();
        void SetVehicleRegistrationPlate(string VehicleRegistrationPlate);
        int GetDriverAge();
        void SetDriverAge(int Age);
};

#endif // VEHICLE_H
