//Peter Hapke
//6/22/17
//pdhapke@dmacc.edu


//This program has a simple driver that will test the function below. 
//the funnction will accept an array, a length, and a test variable and 
//then report all elements of the array that are larger than the test numnber

# include <iostream>
using namespace std;

void greaterThanN(const int [], int, int );

int main(){
	
//setup
int testArray[5] = {1, 2, 3, 4, 5};
	
//some drivers to test
greaterThanN(testArray, 5, 3);	
greaterThanN(testArray, 5, 0);	
greaterThanN(testArray, 5, 2);		
	
return 0;	
}

void greaterThanN(const int array[], int size, int variable){
	bool comma = false; 
	
	
	cout << "The array contains the following numbers bigger than " << variable << ": ";
	
	for(int i = 0; i < size ; i++){
		if (array[i] > variable){
		//this reports the numbers with commas where appor
		cout << ((comma) ? ", " : "") << array[i]; 
		comma = true; 
		}
	}
	
	cout << endl; 
	
}
