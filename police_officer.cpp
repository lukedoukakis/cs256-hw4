using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "parked_car.cpp"
#include "parking_meter.cpp"

class PoliceOfficer{

private:
	string name;
	int badgeNum;

public:
	PoliceOfficer(string n, int i){
		name = n;
		badgeNum = i;
	}

	bool scanExpiration(ParkedCar c, ParkingMeter m){
		if(c.getMinutes() > m.getTimePurchased){ return true; }
			else { return false; }
	}

	void issueTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o){
		ParkingTicket t;
		t.reportCar(c);
		t.reportFine(c, m);
		t.reportPoliceOfficer(o);
	}

	void setName(string n){
		name = n;
	}
	void setBadgeNum(int i){
		badgeNum = i;
	}
	string getName(){
		return name;
	}
	string getBadgeNum(){
		return badgeNum;
	}

};


