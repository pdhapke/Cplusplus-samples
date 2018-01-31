//Peter Hapke
//6/15/17
//pdhapke@dmacc.edu


//This program asks for the number of accidents in each of 5 regions
//and then outputs the region with the lowest number of accidents 

//In the case of a tie it will output the lowest number of accidents 
//and the regions that have the low number, in order with correct punctuation

#include <iostream>
#include <string>
using namespace std;

int getNumAccidents (string regionName);

void findLowest(int, int, int, int, int);


int main(){
	
int north	= getNumAccidents("North");
int south	= getNumAccidents("South");	
int east	= getNumAccidents("East");	
int west	= getNumAccidents("West");
int central	= getNumAccidents("Central");
	
findLowest(north, south, east, west, central);
	

	
	return 0; 
}

int getNumAccidents(string regionName){
	int accidents; 
	
	//a do loop for number verification
	do{
		cout << "Please enter the number of accidents in the " << regionName << " region.";

		cin >> accidents;
		if (accidents < 0 )
			cout << "That is not a valid number please try again" << endl; 
	
} while (accidents < 0 );
	
	return accidents;
}



void findLowest(int north, int south, int east, int west, int central){
	//default to the north which can then change
	//after I wrote this I decided that parallel arrays would have been better
	
	int lowestValue = north; 
	string lowestRegion = "North region"; 

//all of these flags are built to track which are low and if a tie is present
	bool nIsLow = true; 
	bool sIsLow = false; 
	bool eIsLow = false; 
	bool wIsLow = false; 
	bool cIsLow = false; 
	bool tied = false; 

//each if statement compares to the current lowest number and resets the flags and values as needed
	if ( south < lowestValue){
		lowestValue = south; 
		lowestRegion = "South region"; 
		nIsLow = false; 
		sIsLow = true; 
		eIsLow = false; 
		wIsLow = false; 
		cIsLow = false; 
		tied = false;
	}else if ( south == lowestValue){
		sIsLow = true; 
		tied = true;
	}
	
	if ( east < lowestValue){
		lowestValue = east; 
		lowestRegion = "East region"; 
		nIsLow = false; 
		sIsLow = false; 
		eIsLow = true; 
		wIsLow = false; 
		cIsLow = false; 
		tied = false;
	}else if ( east == lowestValue){
		eIsLow = true; 
		tied = true;
	}

	if ( west < lowestValue){
		lowestValue = west; 
		lowestRegion = "West region"; 
		nIsLow = false; 
		sIsLow = false; 
		eIsLow = false; 
		wIsLow = true; 
		cIsLow = false; 
		tied = false;
	}else if ( west == lowestValue){
		wIsLow = true; 
		tied = true;
	}
	
	if ( central < lowestValue){
		lowestValue = central; 
		lowestRegion = "Central region"; 
		nIsLow = false; 
		sIsLow = false; 
		eIsLow = false; 
		wIsLow = false; 
		cIsLow = true; 
		tied = false;
	}else if ( central == lowestValue){
		cIsLow = true;
		tied = true; 
	}
	
	
	if (tied){
		cout << "The "; 
		
		//this monstrosity will alter the output so that the oxford comma is observed
		//the if statements add the regions which are tied
		//the ternary operator adds correct puntuation by checking to see 
		//if a region preceeded it for a comma and if it is the last region for an and
		
		
		
		if(nIsLow)
			cout << "North region";
		(sIsLow && nIsLow) ? cout << ", ": cout << "" ;
		!(eIsLow||wIsLow||cIsLow) ? cout << "and ": cout << "" ;
		if(sIsLow)
			cout << "South region";
		(eIsLow && (nIsLow || sIsLow)) ? cout << ", ": cout << "" ;
		!(wIsLow||cIsLow) ? cout << "and ": cout << "";
		if(eIsLow)
			cout << "East region";
		(wIsLow && (nIsLow || sIsLow || eIsLow)) ? cout << ", ": cout << "" ;
		!(cIsLow) ? cout << "and ": cout << "";
		if(wIsLow)
			cout << "West region";
		(cIsLow) ? cout << ", and ": cout << "";
		if(cIsLow)
			cout << "Central region";
		
		cout << " are tied for lowest number of accidents with " << lowestValue << " accidents.";
		
	}else{
	//if there is only one area with the lowest value	
		cout << "The " << lowestRegion << " has the lowest number of accidents with "<< lowestValue << " accidents.";
	}
	

	
	
}
