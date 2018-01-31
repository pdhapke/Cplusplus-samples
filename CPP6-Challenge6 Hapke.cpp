//Peter Hapke
//6/15/17
//pdhapke@dmacc.edu


//This program asks for the mass and velocity of an object and then computes its
//kinetic energy

#include <iostream>
#include <iomanip>

using namespace std;

double kineticEnergy (double mass, double velocity);


int main(){
	
	double mass; 
	double velocity; 
	
	cout << "This program will calculate the kinetic energy of an object." << endl;
	
	//the main loop 
	do{
	
	
	//enter the mass, validation by loop
		do{
		
		cout<< "Please enter the mass of the object in kilograms or enter -9999 to exit:";
		cin >> mass; 
			if (mass <=0 && mass != -9999){
				cout << "Mass cannot be negative or zero, please try again"<<endl;
			}
		
		} while(mass <= 0 && mass != -9999);
		
		//data validation, no speed can be equal to or greater than the speed of light for an object with mass
		//no validation for negative numbers because velocity can be negative, velocity includes direction and 
		//the negatives will cancel in the equation
		if (mass != -9999){
		
		do{
			cout<< "Please enter the velocity of the object in m/s:";
			cin >> velocity; 
			if (velocity >= 299792458){
				cout << "velocity cannot be this high, please try again"<<endl;
			}
		} while (velocity >= 299792458);
	
		cout << "The kinetic energy of the object is "; 
		cout << kineticEnergy(mass, velocity);
		cout << endl << endl;
		}
	}while (mass != -9999); 

cout << "Goodbye!";
	
	return 0;
}

double kineticEnergy (double mass, double velocity){
	
//avoid the cmath include by just multiplying velocity twice
//I could divide by two instead, but that risks integer division
	double KE = 0.5 * mass * velocity * velocity ;
		
	return KE;	
}
