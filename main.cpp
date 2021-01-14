#include <iostream>
#include<bits/stdc++.h>
#include "ParkingSlot.h"
#include "ParkingLot.h"
#include "Vehicle.h"

using namespace std;

int main()
{
    string fileinput="";

    ifstream myreadline("input.txt");

    ParkingLot myParkinglot;
    while( getline(myreadline,fileinput)){
        string commands;
        stringstream ss(fileinput);
        vector<string> input;
        while(getline(ss ,commands, ' ')){
            input.push_back(commands);
        }
        if(input[0]=="Create_parking_lot"){
            int slots=stoi(input[1]);
            myParkinglot= ParkingLot(slots);
        }
        else if(input[0]=="Park"){
            myParkinglot.Park(input[1],stoi(input[3]));
        }
        else if(input[0]=="Slot_numbers_for_driver_of_age"){
            myParkinglot.SlotNumberOfDriversWithAge(stoi(input[1]));
        }
        else if(input[0]=="Slot_number_for_car_with_number"){
            myParkinglot.GetSlotByVehicle(input[1]);
        }
        else if(input[0]=="Leave"){
            myParkinglot.Leave(stoi(input[1]));
        }
        else{
            myParkinglot.VehicleNumberByAge(stoi(input[1]));
        }
    }
    getchar();
    return 0;
}
