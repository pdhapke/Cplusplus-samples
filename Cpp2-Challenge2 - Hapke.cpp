// Peter Hapke
//5/25/16
//pdhapke@dmacc.edu


//This program will predict the share of sales by one part of a company. 
//It is a waste to write a program which can only do one calculation, 
//so context information was added to the output

//this line will include input output ability
#include <iostream>

//this line includes the ability to manipulate the format of outputted numbers
#include <iomanip>


using namespace std;
//sets the standard space

//the main function to be run
int main(){
	
	//decalre and set initial values
	float shareOfSales = 0.58, grossSales = 8600000; //decimal capable to keep the cents
	
	//this will output the requested information, almost long enough to be put on multiple lines
	cout << "Based on previous information the East Coast Division accounted for $";
	cout << setprecision(2) << fixed;
	cout << (shareOfSales*grossSales);
	cout << " in sales this fiscal year."; 
	
	
	
	return 0;
}
