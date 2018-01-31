//Peter Hapke
//6/11-17
//pdhapke@dmacc.edu

//This program will calculate the avearge rainfall of an area
//based on the quarterly rainfall entered by the user over a 
//requestred number of years

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int numberOfYears;
	double averageRainfall; 
	int aggragateRainfall;
	int totalQuarters; 
	
	
	do{
	
	
	cout << "How many years of data would you like to enter?"; 
	cin >> numberOfYears; 
	if (numberOfYears < 1)
		cout << "Please enter a valid number of years" << endl;
	
	}while (numberOfYears < 1); 
	
	
	
	for (int i = 1; i <= numberOfYears; i++){
		for (int j =1; j <= 4; j++ ){
			cout << "For year " << i << " quarter " << j << ": please enter the average rainfall: ";
		do{ 
			cin >> averageRainfall;
			if (averageRainfall < 0)
				cout << "Please enter a valid rainfall";
			
		}while(averageRainfall < 0);
			aggragateRainfall += averageRainfall; 
		}
			
	}
	
	//calculates the average rainfall, a cast is used to prevent integer division
	totalQuarters = numberOfYears * 4;
	averageRainfall = static_cast<double>(aggragateRainfall) / totalQuarters; 
	
	cout << "********************"<< endl << endl;
	cout << fixed << setprecision(2);
	cout << "The average rainfall of these " << totalQuarters << " quarters is " << averageRainfall; 
	
		
	return 0; 
}




