// Peter Hapke
//5/29/2017
//pdhapke@DMACC.edu

// This program calcualtes the tip on a bill

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
// Definitions
float mealCost = 88.67;				//cost of the meal
float tax = 0.0675;  				//the tax as a decimal instead of a percent
float tipAmount = 0.2 * mealCost; 	//calculates the tip as 20% of the meal cost
float taxAmount = tax * mealCost;	//calculates the tax

cout<< fixed << setprecision(2);	//sets the outputs to 2 decimals to be consistent with cents

//the following lines use two outputs per line so the first and second can be justified seperatly 
cout << setw(12)<<"Meal Cost: " << setw(6)<< mealCost << endl;
cout << setw(12)<<"Tax: " << setw(6)<< taxAmount << endl;
cout << setw(12)<<"Tip: " << setw(6)<< tipAmount << endl;
cout << setw(12)<<"Total bill: " << setw(6)<< (mealCost + taxAmount + tipAmount) << endl;

	return 0;
}

