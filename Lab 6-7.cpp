#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency

// Peter Hapke

//Constants 
const double TO_EUROS = 1.06; 
const double TO_PESOS = 9.73; 
const double TO_YEN = 124.35; 



// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);





int main()
{
	float dollars;
	float euros;
	float pesos;
	float yen;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted "
		 << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;

	// Fill in the code to call convertMulti with parameters dollars, euros, and pesos
	convertMulti(dollars, euros, pesos);
	// Fill in the code to output the value of those dollars converted to both euros
	// and pesos
	cout << "$" << dollars << " is converted to "; 
	cout << euros << " euros and ";
	cout << pesos << " pesos" << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;

	// Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
	convertMulti(dollars, euros, pesos, yen);
	// Fill in the code to output the value of those dollars converted to euros,
	// pesos and yen
	cout << "$" << dollars << " is converted to "; 
	cout << euros << " euros, ";
	cout << pesos << " pesos, and " ;
	cout << yen << " yen" << endl;


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" << endl;
	cin >> dollars;

	// Fill in the code to call convertToYen
	yen = convertToYen(dollars);
	// Fill in the code to output the value of those dollars converted to yen
	cout << "$" << dollars << " is converted to "; 
	cout << yen << " yen" << endl;
	
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin >> dollars;

	// Fill in the code to call convert ToEuros
	euros = convertToEuros(dollars);
	// Fill in the code to output the value of those dollars converted to euros
	cout << "$" << dollars << " is converted to "; 
	cout << euros << " euros" << endl;

	
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;

	// Fill in the code to call convertToPesos
	pesos = yen = convertToPesos(dollars);
	// Fill in the code to output the value of those dollars converted to pesos
	cout << "$" << dollars << " is converted to "; 
	cout << pesos << " pesos" << endl;

	return 0;
}

// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly

//	**************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          and pesos
//	data in:  dollars
//	data out: euros and pesos
//
//	*************************************************************************

void convertMulti(float dollars, float& euros, float& pesos)
{
	cout << "The function convertMulti with dollars, euros and pesos "
		 << endl << " was called with " << dollars << " dollars" << endl << endl;
		 
	euros = dollars * TO_EUROS; 	 
	pesos = dollars * TO_PESOS; 	 
		 		 
		 
}

//	************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          pesos and yen
//	data in:  dollars
//	data out: euros pesos yen
//
//	***********************************************************************

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	cout << "The function convertMulti with dollars, euros, pesos and yen"
		 << endl << " was called with " << dollars << " dollars" << endl << endl;
		 
	euros = dollars * TO_EUROS; 	 
	pesos = dollars * TO_PESOS; 
	yen = dollars * TO_YEN; 
		 
}

//	****************************************************************************
//	convertToYen
//
//	task:	       This function takes a dollar value and converts it to yen
//	data in:	   dollars
//	data returned: yen
//
//	***************************************************************************

float convertToYen(float dollars)
{
	cout << "The function convertToYen was called with " << dollars << " dollars"
		 << endl << endl;
double yen = dollars * TO_YEN; 


	return (yen);
}

//	****************************************************************************
//	convertToEuros
//
//	task:	       This function takes a dollar value and converts it to euros
//	data in:	   dollars
//	data returned: euros
//
//	****************************************************************************

float convertToEuros(float dollars)
{
	cout << "The function convertToEuros was called with " << dollars
		 << " dollars" << endl << endl;
double euros = dollars * TO_EUROS; 

	return (euros);
}

//	*****************************************************************************
//	convertToPesos
//
//	task:	       This function takes a dollar value and converts it to pesos
//	data in:	   dollars
//	data returned: pesos
//
//	****************************************************************************

float convertToPesos(float dollars)
{
	cout << "The function convertToPesos was called with " << dollars
		 << " dollars" << endl;
	double pesos = dollars * TO_PESOS; 

	return (pesos);
}
