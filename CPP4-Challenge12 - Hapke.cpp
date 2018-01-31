//Peter Hapke
//pdhapke@DMACC.edu
// 6/6/2017


//This file will ask a user for the number of copies of a software package they wish to buy
//and then it will calculate the total cost with a discount for bulk purchases

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int numberOfPackages; 
	double discount = 0; 
	double discountAmount; 
	double totalCost; 
	
	const double COST_OF_PACKAGE = 129.00;
	
	//asks for the number of packages to be bought
	cout << "Please enter the number of software packages you would like to buy: ";
	cin >> numberOfPackages; 
	
	
	//decides the discount based on the number of packages
	 if (numberOfPackages >= 100)
	{
		discount = 0.5; 	
	} else if (numberOfPackages >= 50){
		discount = 0.4; 	
	} else if (numberOfPackages >= 20){
		discount = 0.3; 	
	} else if (numberOfPackages >= 10){
		discount = 0.2; 	
	} else if (numberOfPackages >= 0){
		discount = 0.0; 	
	} else {
		cout << "I do not recognize that number, please try again";
	}
	

//this calculates the discount 
discountAmount = discount*numberOfPackages*COST_OF_PACKAGE; 

//this catches a discounts over 500 and sets it to 500
if (discountAmount > 500){
	discountAmount = 500.00; 
}

//this finds the total cost by subtracting the discount from the total cost
totalCost =  numberOfPackages*COST_OF_PACKAGE - discountAmount; 


cout<< "The total cost of your purchase will be: $";
cout<< fixed << showpoint << setprecision(2);
cout<< totalCost;


return 0;
}
