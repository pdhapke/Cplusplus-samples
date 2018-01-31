//  This program has the user input a number n and then finds the
//  mean of the first n positive integers

//Peter Hapke

#include <iostream>
using namespace std;


int main()
{
	int value1;       // value is some positive number n
	int value2; 
 	int total = 0;   // total holds the sum of the first n positive numbers
   	int number;      // the amount of numbers
  	float mean;      // the average of the first n positive numbers
  	
  	
	cout << "This program will calculate the average of the sum of all integers" << endl;
	cout << "between the two integers input"; 
  	cout << "Please enter a positive integer to start at: " << endl;
   	cin >> value1;

	cout << "Please enter a positive integer to end at: " << endl;
   	cin >> value2;


  	if (value1 > 0 && value2 > 0)
  	{
      	for (number = value1; number <= value2; number++)
        {
 	  	    total = total + number;
		}  // curly braces are optional since there is only one statement 
		
        mean = float(total) / (value2 - value1 + 1) ;         // note the use of the typecast 
		                                     // operator here
		cout << "The mean of the integers between " << value1 << " and " << value2
             << " is " << mean << endl;
    }
    else 
        cout << "Invalid input - integers must be positive" << endl;

   return 0;	
}
