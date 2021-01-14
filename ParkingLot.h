#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <iostream>
#include<bits/stdc++.h>
#include "ParkingSlot.h"
#include "Vehicle.h"
#include<bits/stdc++.h>

using namespace std;

class ParkingLot{
    private:
        list<ParkingSlot> myParkingSlotList;


    public:
        ParkingLot();
        ParkingLot(int slots);

        void create_Parking_slot(int n);

        void Park(string VehicleRegistrationPlate, int Age);

        ParkingSlot* GetEmptySlot();

        void Leave(int slotnumber);

        int GetSlotByVehicle(string VehicleNumber);

        vector<int> SlotNumberOfDriversWithAge(int Age);

        vector<string> VehicleNumberByAge(int Age);
};

#endif // PARKINGLOT_H
