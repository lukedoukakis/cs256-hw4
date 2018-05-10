using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "ship.cpp"

class CargoShip : public Ship{

private:

	int maxCargo;

public:

	CargoShip(int _maxCargo){
		maxCargo = _maxCargo;
	}

	void setMaxCargo(int i){
			maxCargo = i;
		}
	int getMaxCargo(){
		return maxCargo;
	}

	void print(){
		cout<<name<<"\n";
		cout<<maxCargo<<"\n\n";
	}
};


