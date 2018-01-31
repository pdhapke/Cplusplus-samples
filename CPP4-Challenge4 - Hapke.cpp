// This program will ask for the sides of a rectangle and then compare their areas.
// Peter Hapke
// pdhapke@DMACC.edu
// 6/3/17



#include <iostream>
using namespace std;

int main()
{
	
//establishes the variables
	double area1;
	double area2;
	
	double length1, width1; 
	double length2, width2; 
	
	//explains what is needed
	cout << "This program will compare the areas of two rectangles, but first we need the measures of both" << endl;
	
	//gets the information
	cout << "Please enter the length of the first rectangle: ";
	cin >> length1;
			
	cout << "Please enter the width of the first rectangle: ";
	cin >> width1;
	
	cout << "Please enter the length of the second rectangle: ";
	cin >> length2;
			
	cout << "Please enter the width of the second rectangle: ";
	cin >> width2;
	
	//calculate the areas
	area1 = width1 * length1; 
	area2 = width2 * length2; 
	
	//report both areas
		cout << "The area of Rectangle 1 is: " << area1 << endl;
		cout << "The area of Rectangle 2 is: " << area2 << endl;
	
	//use if statements to compare the two areas
		if ( area1 > area2){
		cout << "Rectangle 1 has the greater area with an area of " << area1;
	} else if (area1 < area2){
		cout << "Rectangle 2 has the greater area with an area of " << area2;
	} else {
		cout << "Both rectangles have the same area of " << area1;
	}
	
	
	
	
	
	
	
	
	
	
	
}
