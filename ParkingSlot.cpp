#include "ParkingSlot.h"
#include<bits/stdc++.h>
#include "Vehicle.h"

ParkingSlot::ParkingSlot(int pos){
    position=pos;
    IsEmpty=true;
}

int ParkingSlot::Getposition(){
    return position;
}
void ParkingSlot::setposition(int pos){
    position=pos;
}
bool ParkingSlot::CheckIsEmpty(){
    return IsEmpty;
}
void ParkingSlot::Park(Vehicle  newVehicle){
    myVehicle = newVehicle;
    IsEmpty=false;
}
void ParkingSlot:: SetIsEmpty(bool emptycheck){
    IsEmpty=emptycheck;
}

Vehicle ParkingSlot::GetVehicle(){
    return myVehicle;
}

void ParkingSlot::SetVehicle(Vehicle newVehicle){
    myVehicle = newVehicle;
}
