//Peter Hapke
//6/11-17
//pdhapke@dmacc.edu

//I used the base proggram completed in chapter 5 and added in 
//the array ability to story all of the info and then report it back to
//the user.  

//This program will calculate the avearge rainfall of an area
//based on the quarterly rainfall entered by the user over a 
//requestred number of years

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int numberOfYears;

	int aggragateRainfall;
	int totalQuarters; 
	double averageRainfall;
	
	do{
	
	
	cout << "How many years of data would you like to enter?"; 
	cin >> numberOfYears; 
	if (numberOfYears < 1)
		cout << "Please enter a valid number of years" << endl;
	
	}while (numberOfYears < 1); 
	
	
	double rainArray[numberOfYears*4]; 
	
	for (int i = 0, j = 1; j <= numberOfYears; i++, j++){
		for (int k =1; k <= 4; k++ ){
			cout << "For year " << j << " quarter " << k << ": please enter the average rainfall: ";
		do{ 
			cin >> averageRainfall;
			if (averageRainfall < 0)
				cout << "Please enter a valid rainfall";
			
		}while(averageRainfall < 0);
		
			aggragateRainfall += averageRainfall;
			rainArray[(i*4 + (k - 1))]= averageRainfall;
		}
			
	}
	
	//calculates the average rainfall, a cast is used to prevent integer division
	totalQuarters = numberOfYears * 4;
	averageRainfall = static_cast<double>(aggragateRainfall) / totalQuarters; 
	
	cout << "********************"<< endl;
	cout << "You input the following data:"<<endl; 
	cout << fixed << setprecision(2);

	for (int x = 0; x < totalQuarters; x++ ){
		cout << "Year " << (1 + x/4) << " quarter " << (1 + x%4) << " had: " << rainArray[x] << "in" << endl;
	}
	
	cout << "********************" << endl;
	cout << "The average rainfall of these " << totalQuarters << " quarters is " << averageRainfall; 
	
		
	return 0; 
}




