//Peter Hapke
//6/22/17
//pdhapke@dmacc.edu

/*
This program will calculate the projected population 
of an area if supplied with the starting population, 
birthrate and death rate 

*/




#include <iostream> 
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int newPop(int, double, double);

int main(){
	
	//setup
	int population = 0; 
	double birthRate = 0;
	double deathRate = 0;
	int years = 0;
	string clear_cin;
	
	//info to user
	cout << "This program will calculate the population increase over a number of years and report each year." << endl; 
	
	//data entry
	cout << population; 
	
	do{ 
		cout << "Please enter the starting population: "; 
		cin >> population; 
		cout << population; 

   
	
		if (population < 2){
			cout << "Populations less than 2 will die out! Please enter a new population." << endl;
			
		}
		
		cout << population; 	
	}while (population < 2);

	do{ 
		cout << "Please enter the birthrate: "; 
		cin >> birthRate; 
		
		
		if (birthRate < 0 || birthRate > 1 ){
			cout << "Birthrates over 50% or 0.5 are rare and over 1 are impossible....and negative birthrates are a death rate"<< endl;
		
		}
	}while (birthRate < 0 || birthRate > 1);
	
	do{ 
		cout << "Please enter the deathrate: "; 
		cin >> deathRate; 
		
		
		if (deathRate < 0 || deathRate > 1 ){
			cout << "Negative death rates are a birthrate, and anything above 1 is genocide."<< endl;
		}
	}while (deathRate < 0 || deathRate > 1);
	
	do{ 
		cout << "Please enter the number of years you want to calculate: "; 
		cin >> years; 
	

	
		if (years <  1 ){
			cout << "Less than one year is not acceptable" << endl;
		
		}
	}while (years < 1 );
	
	for (int i = 1; i <= years; i++){
		
		population = newPop(population, birthRate, deathRate); 
		
		cout << "The population after " << i << " years will be " << population << " people" << endl; 
		
	}
	
	
	
	
	
	return 0; 
} 


//by the way I ended up using population in the main program I could have used pass by reference for the population
int newPop(int population, double birthRate, double deathRate){
	int newPopulation; 
	
	//use a little math to simplify the expression and then cast as an int because people are a discreet qunatity
	//this part had a big problem because of the way the data is stored it would return incorrect values
	// 240 would truncate to 239
	//to mix this c math was added and people were rounded to give better answers
	newPopulation = round(population * (1.00 + birthRate - deathRate)); 
	
	cout << (population * (1.0000000 + birthRate - deathRate)); 
	return newPopulation;
}
