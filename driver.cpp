using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "parked_car.cpp"
#include "parking_meter.cpp"
#include "parking_ticket.cpp"
#include "police_officer.cpp"

class Driver{
	int main(){

		ParkedCar car(2004, "Civic", "white", 1438674, 110);
		ParkingMeter meter(45);
		PoliceOfficer cop("Chief Wiggum", 4357);

		cout<<"The owner of the 2004 Civic purchased 45 minutes, and has been parked for 110 minutes.";

		bool busted = cop.scanExpiration(car, meter);
		if(busted == true){
			cop.issueTicket(car, meter, cop);
		}
	}
};
