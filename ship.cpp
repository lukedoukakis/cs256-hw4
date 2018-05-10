using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

class Ship{

private:
	string name;
	string year;

public:

	Ship(string n, string y){
		name =n;
		year =y;
	}

	void setName(string s){
		name = s;
	}
	void setYear(string s){
		year = s;
	}
	string getName(){
		return name;
	}
	string getYear(){
		return year;
	}

	void print(){
		cout<<name<<"\n";
		cout<<year<<"\n\n";
	}
};
