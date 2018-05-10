using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "ship.cpp"

class CruiseShip : public Ship{

private:

	int maxPassengers;


public:

	CruiseShip(int _maxPassengers){
		maxPassengers = _maxPassengers;
	}

	void setMaxPassengers(int i){
		maxPassengers = i;
	}
	int getMaxPassengers(){
		return maxPassengers;
	}

	void print(){
		cout<<name<<"\n";
		cout<<maxPassengers<<"\n\n";
	}
};


