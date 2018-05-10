using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

class ParkedCar{

private:
	int make;
	string model;
	string color;
	int license;
	int minutes;

public:

	ParkedCar(int _make, string _model, string _color, int _license, int _minutes){
		make = _make;
		model = _model;
		color = _color;
		license = _license;
		minutes = _minutes;
	}

	void setMake(int n){
		make = n;
	}
	void setLicense(int n){
		license = n;
	}
	void setMinutes(int n){
		minutes = n;
	}
	void setModel(string n){
		model = n;
	}
	void setColor(string n){
		color = n;
	}

	int getMake(){
		return make;
	}
	int getLicense(){
		return license;
	}
	int getMinutes(){
		return minutes;
	}
	string getModel(){
		return model;
	}
	string getColor(){
		return color;
	}


};
