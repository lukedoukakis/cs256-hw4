using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

class ParkingMeter{

private:
	int timePurchased;

public:

	ParkingMeter(int _timePurchased){
		timePurchased = _timePurchased;
	}

	void setTimePurchased(int t){
		timePurchased = t;
	}
	int getTimePurchased(){
		return timePurchased;
	}
};
