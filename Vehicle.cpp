#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(){

}
Vehicle::Vehicle(string VehicleRegistrationPlate, int DriversAge ){
    myVehicleRegistrationPlate=VehicleRegistrationPlate;
    myDriversAge=DriversAge;
}
string Vehicle::GetVehicleRegistrationPlate(){
    return myVehicleRegistrationPlate;
}
void Vehicle::SetVehicleRegistrationPlate(string VehicleRegistrationPlate){
    myVehicleRegistrationPlate = VehicleRegistrationPlate;
}

int Vehicle::GetDriverAge(){
    return myDriversAge;
}
void Vehicle::SetDriverAge(int Age){
    myDriversAge=Age;
}

