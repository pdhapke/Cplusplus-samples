// Peter Hapke
// 6/2/17
// pdhapke@DMACC.edu

#include <iostream>
using namespace std;

int main(){
	//first create the constant
	const double widgetW = 13.2;

	//create the variables
	double palletW; 
	double combinedW; 
	int numberOfWidgets;
	
	//get the weight of the 
	cout << "Please enter the weight of the pallet without widgets "; 
	cin >> palletW; 
	
	//get the weight of the combined pallet and widgets
	cout << "Please enter the weight of the pallet when it is loaded with widgets ";
	cin >> combinedW;
	
	//this first finds the weight of the widgets then divides by the weight of the widgets
	//I chose to divde first and then cast as an int to remove any partial widgets, 
	//casting as an int first could cause an error of more then one widget, this will be more accurate
	numberOfWidgets = static_cast<int>((combinedW - palletW)/widgetW);
	
	//this then reports the number as an int which requires no special formating
	cout << "There are " <<  numberOfWidgets << " widgets on the pallet.";
	
	
	return 0;
}





