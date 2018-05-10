using namespace std;
#include "die.h";
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib> // For rand and srand
#include <ctime>

Die::Die(int numSides){

	unsigned seed = time(0);
	srand(seed);
	sides = numSides;
}

void Die::roll(){


	const int MIN_VALUE = 1; // Minimum die value

	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;

}

int Die::getSides(){
	return sides;
}

int Die::getValue(){
	return value;
}

}
