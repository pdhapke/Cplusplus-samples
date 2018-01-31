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
	temperature(double temp) {itemTemperature = temp;};
	void 	setTemp(double temp) {itemTemperature = temp;};

	bool isEthylFreezing() ;
	bool isOxygenFreezing();
	bool isWaterFreezing() ;
	bool isWaterboilinng();
	bool isOxygenboilinng();
	bool isEthylboilinng() ;
	
};

int main(){

double temp; 
	
cout << "Please enter the temperature in degrees Farheinheit: ";
cin >> temp; 

temperature example(temp);

cout << example.isEthylFreezing();

cout << "***********************" << endl; 
cout << "The following is a list of things that will freeze:" << endl;
//cout << ((static_castexample.isEthylFreezing())? ("Ethyl Alchohol will freeze.") :  ("Ethyl Alchohol will not freeze."))<< endl;
//cout << (example.isOxygenFreezing())? "Oxygen will freeze."  :  "Oxygen will not freeze."<< endl;
//cout << (example.isWaterFreezing())? "Water will freeze."  :  "Water will not freeze."<< endl;


cout << "***********************" << endl; 
//cout << "The following is a list of things that will boil" << endl;
//cout << (example.isEthylBoiling())? "Ethyl Alchohol will boil."  :  "Ethyl Alchohol will not boil."<< endl;
//cout << (example.isOxygenBoiling())? "Oxygen will boil."  :  "Oxygen will not boil."<< endl;cout << (example.isWaterBoiling())? "Water will boil."  :  "Water will not boil."<< endl;

return 0; 
}


	bool temperature ::  isOxygenFreezing() {
	bool out = itemTemperature < -362; 
	return out;
	};
	
	bool temperature ::  isWaterFreezing() { 
	bool out = (itemTemperature < 32); 
	return out;
	};
	
	bool temperature ::  isWaterboilinng() { 
	bool out = (itemTemperature > 212); 
	return out;};
	
	bool temperature ::  isOxygenboilinng() { 
	bool out = (itemTemperature > -306); 
	return out;};
	
	bool temperature ::  isEthylboilinng() {
	bool out = (itemTemperature > 172); 
	return out;};
