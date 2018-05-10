using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "parked_car.cpp"
#include "police_officer.cpp"
#include "parking_meter.cpp"

class ParkingTicket{

private:
	int fine;
	int timeOver;

public:
	void reportCar(ParkedCar c){
		cout<<"\n"<<c.getMake()<<"\n"<<c.getModel()<<"\n"<<c.getColor<<"\n"<<c.getLicense()<<"\n\n";
	}
	void reportFine(ParkedCar c, ParkingMeter m){
		fine = 25;
		timeOver = c.getMinutes() - m.getTimePurchased();

		for(int i = 61; i < timeOver; i+=60){
			fine += 10;
		}
		cout<<fine<<"\n\n";
	}
	void reportPoliceOfficer(PoliceOfficer o){
		cout<<o.getName()<<"\n";
		cout<<o.getBadgeNumber<<"\n\n";
	}
};

