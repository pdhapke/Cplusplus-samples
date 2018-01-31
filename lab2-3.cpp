#include <iostream>
using namespace std;

//this initializes the constants, because both formulas avoid division and utilize integers this will be faster
const int LENGTH = 8;	
const int WIDTH = 3;

int main()
{
int area = LENGTH*WIDTH; 				// definition of area of rectangle, no need for more than int
int perimeter = 2*LENGTH + 2*WIDTH; 	// definition of perimeter

//reports both values with the indicated text accompanyment 
cout << "The area of the rectangle is " << area << "\n";
cout << "The perimeter of the rectangle is " << perimeter;

return 0;
}

