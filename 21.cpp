using namespace std;
//#include "die.h";
#include <iostream>
#include <string>
#include <stdio.h>

int main(){

	int cpuScore = 0, playerScore = 0;
	//Die die1(6), die2(6);


	int loop;
	do {

		die1.roll();
		die2.roll();
		cpuScore += die1.getValue() + die2.getValue();

		die1.roll();
		die2.roll();
		cpuScore += die1.getValue() + die2.getValue();

		cout<<"Your score is "<<playerScore<<". ";
		if(playerScore > 21){
			cout<<"You busted.\n";
			break;
		}

		cout<<"Hit (1) or stay (2)?\n";
		cin>>loop;

	} while (loop == 1);

	cout<<"CPU's score is "<<cpuScore<<". ";
	if(cpuScore > 21 && playerScore > 21){
		cout<<"Both you and the CPU busted.";
	}else{
		if(cpuScore > 21 && playerScore < 21){
				cout<<"Your score is ">>playerScore>>" and the CPU busted. You Win!";
		}else{
			if(cpuScore < 21 && playerScore > 21){
				cout<<"You busted. The CPU's score is "<<cpuScore<<".";
			}else{
				cout<<"You score is ">>playerScore>>". The CPU's score is "<<cpuScore<<".";
				if(playerScore > couScore){ cout<<"You win!";
				}else{ cout<<"You lose.";
				}
			}
		}
	}




}
