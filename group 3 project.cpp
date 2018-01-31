//group 3 group assignment
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>


using namespace std;

class temperature {
	private: 
	double itemTemperature; 
	
	public:
	temperature(double temp) {itemTemperature = temp;}
	void setTemp(double temp) {itemTemperature = temp;}

	bool isEthylFreezing() ;
	bool isOxygenFreezing();
	bool isWaterFreezing() ;
	bool isWaterBoiling();
	bool isOxygenBoiling();
	bool isEthylBoiling();
	
};

int main(){

double temp; 
	
cout << "Please enter the temperature in degrees Farheinheit: ";
cin >> temp; 

temperature example(temp);

cout << example.isEthylFreezing();

cout << "***********************" << endl; 
cout << "The following is a list of things that will freeze:" << endl;
cout << ((example.isEthylFreezing())? ("Ethyl Alchohol will freeze.") :  ("Ethyl Alchohol will not freeze."))<< endl;
cout << ((example.isOxygenFreezing())? "Oxygen will freeze."  :  "Oxygen will not freeze.")<< endl;
cout << ((example.isWaterFreezing())? "Water will freeze."  :  "Water will not freeze.")<< endl;


cout << "***********************" << endl; 
cout << "The following is a list of things that will boil" << endl;
cout << ((example.isEthylBoiling())? "Ethyl Alchohol will boil."  :  "Ethyl Alchohol will not boil.")<< endl;
cout << ((example.isOxygenBoiling())? "Oxygen will boil."  :  "Oxygen will not boil.")<< endl;
cout << ((example.isWaterBoiling())? "Water will boil."  :  "Water will not boil.")<< endl;

return 0; 
}
	bool temperature ::  isEthylFreezing() {
		
	bool tempBool = false; 
	if (itemTemperature < -173)
	tempBool = true;  
	
	return tempBool;
	}

	bool temperature ::  isOxygenFreezing() {
		
	bool tempBool = false; 
	if (itemTemperature < -362)
	tempBool = true;  
	
	return tempBool;
	}
	
	bool temperature ::  isWaterFreezing() { 

	bool tempBool = false ;  
	if (itemTemperature < 32)
		tempBool = true; 
		return tempBool;
	}
	
	bool temperature ::  isWaterBoiling() { 
	bool tempBool = false; 
	if (itemTemperature > 212)
		tempBool = true;  
	return tempBool;}
	
	bool temperature ::  isOxygenBoiling() { 
	bool tempBool = false; 
	if (itemTemperature > -306)
		tempBool = true; 
	return tempBool;}
	
	bool temperature ::  isEthylBoiling() {
	bool tempBool = false;
	if (itemTemperature > 172)
		tempBool = true;   
	return tempBool;}
