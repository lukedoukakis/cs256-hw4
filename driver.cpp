using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "ship.cpp"
#include "cruise_ship.cpp"
#include "cargo_ship.cpp"


class Driver{

	int main(){
		Ship *shipArray[] = {
			new Ship("Ironsides", 1893),
			new CruiseShip("Caribbean Explorer", 1200),
			new CargoShip("U.S.S. Stanley", 430)
		};

		for(int i = 0; i < shipArray.size(); i++){
			shipArray[i].print();
		}
	}

};
