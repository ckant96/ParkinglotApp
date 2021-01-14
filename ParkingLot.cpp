#include "ParkingLot.h"
#include "ParkingSlot.h"
#include "Vehicle.h"
#include<bits/stdc++.h>

using namespace std;

void ParkingLot::create_Parking_slot(int n){
    for(int i=1;i<=n;i++){
        ParkingSlot mynewslot = ParkingSlot(i);
        myParkingSlotList.push_back(mynewslot);
    }
    cout<<"Created parking of "<<n<<" slots"<<endl;
}
ParkingLot::ParkingLot(){

}

ParkingLot::ParkingLot(int slots){
    create_Parking_slot(slots);
}


ParkingSlot* ParkingLot::GetEmptySlot(){
    list<ParkingSlot>:: iterator it;
    for(it=myParkingSlotList.begin();it!=myParkingSlotList.end();it++){
        if(it->CheckIsEmpty()){
            return &(*it);
        }
    }
    return NULL;
}


void ParkingLot::Park(string VehicleRegistrationPlate, int Age){
    Vehicle myNewVehicle = Vehicle(VehicleRegistrationPlate,Age);
    ParkingSlot* emptyslot = GetEmptySlot();
    if(emptyslot==NULL){
        cout<<"Parkinglot is Full"<<endl;
    }
    else{
        emptyslot->Park(myNewVehicle);
        cout<<"Car with vehicle registration Number \""<<VehicleRegistrationPlate<<"\" has been parked at slot "<<emptyslot->Getposition()<<endl;
    }
}




void ParkingLot::Leave(int slotnumber){
    list<ParkingSlot>:: iterator it=myParkingSlotList.begin();
    for(int i=1;i<slotnumber;i++){
        it++;
    }
    it->SetIsEmpty(true);
    Vehicle removevelcle = (*it).GetVehicle();
    cout<<"Slot Number "<<slotnumber<<" vacated, the car with vehicle registration number \""<<removevelcle.GetVehicleRegistrationPlate()<<"\" left the space. The driver of car was of age "<<removevelcle.GetDriverAge()<<endl;

}

int ParkingLot::GetSlotByVehicle(string VehicleNumber){
    list<ParkingSlot>:: iterator it=myParkingSlotList.begin();
    for(;it!=myParkingSlotList.end();it++){
        Vehicle v= it->GetVehicle();
        if(v.GetVehicleRegistrationPlate()==VehicleNumber){
           int position =it->Getposition();
            cout<<position<<endl;
            return position;
        }
    }
    cout<<" null"<<endl;
    return -1;
}

vector<int> ParkingLot::SlotNumberOfDriversWithAge(int Age){
    vector<int> myDriverSlots;
    list<ParkingSlot>:: iterator it=myParkingSlotList.begin();
    for(;it!=myParkingSlotList.end();it++){
        Vehicle v= it->GetVehicle();
        if(v.GetDriverAge()==Age){
            int position =it->Getposition();
            myDriverSlots.push_back(position);
        }

    }
    if(myDriverSlots.size()>0){
        int i=0;
        for(i=0;i<myDriverSlots.size()-1;i++){
            cout<<myDriverSlots[i]<<", ";
        }
        cout<<myDriverSlots[i]<<endl;
    }
    else{
        cout<<"No Driver with Age "<<Age<< " found"<<endl;
    }
    return myDriverSlots;
}

 vector<string> ParkingLot::VehicleNumberByAge(int Age){
     vector<string> vehiclelist;
     list<ParkingSlot>::iterator it;
     for(it=myParkingSlotList.begin();it!=myParkingSlotList.end();it++){
        if(it->CheckIsEmpty()==false){
            if((it->GetVehicle()).GetDriverAge()==Age){
             string vehiclenumber=(it->GetVehicle()).GetVehicleRegistrationPlate();
             cout<<vehiclenumber<<" ";
             vehiclelist.push_back(vehiclenumber);
            }
        }
     }
     if(vehiclelist.size()==0){
         cout<<"null"<<endl;
     }
     else{
         cout<<endl;
     }
     return vehiclelist;
 }
