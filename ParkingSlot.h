#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

#include <iostream>
#include<bits/stdc++.h>
#include "Vehicle.h"

using namespace std;


class ParkingSlot{
    private:
        int position;
        bool IsEmpty;
        Vehicle myVehicle;
    public:

        ParkingSlot(int pos);
        int Getposition();
        void setposition(int pos);
        bool CheckIsEmpty();
        void SetIsEmpty(bool emptycheck);
        void Park(Vehicle  myVehicle);
        Vehicle GetVehicle();
        void SetVehicle(Vehicle newVehicle);
};

#endif // PARKING SLOT_H
