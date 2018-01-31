// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

// Peter Hapke

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.
class Square {
	public: 
	void setSide(float length);
	float findArea();
	float findPerimeter(); 
	Square();
	Square(float sideLength);
	~Square(); 
	
	private: 
	float side;
	
};

int main()
{
	Square box;	// box is defined as an object of the Square class
	float size;	// size contains the length of a side of the square

	// FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
	// SIDE OF THE SQUARE. (This is stored in size)
	cout << "Please enter the side length of the square:"; 
	cin >> size;
	

	// FILL IN THE CODE THAT CALLS SetSide.
	box.setSide(size);
	
	// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN.
	cout << "The area of the square is: " << box.findArea() << " units squared."<< endl;


	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
	cout << "The perimeter of the square is: " << box.findPerimeter() << " units."<< endl;



	//this section is for excercise 2 
	Square box1(9);

	cout << "The area of box1 is: " << box1.findArea() << " units squared."<< endl;
	cout << "The perimeter of box1 is: " << box1.findPerimeter() << " units."<< endl;





	return 0;
}

// _______________________________________________________
//
// Implementation section	Member function implementation

//**************************************************
//  setSide
//
//  task:	 This procedure takes the length of a side and
//	         places it in the appropriate member data
//  data in: length of a side
//***************************************************

void Square::setSide(float length)
{
	side = length;
}

//**************************************************
//	findArea
//
//  task:	       This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float Square::findArea()
{
	return side * side;
}

//**************************************************
//	findPerimeter
//
//  task:	       This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float Square::findPerimeter()
{
	return 4 * side;
}

//default constructor
Square :: Square(){
	side = 1; 
}

//special constructor
Square:: Square(float sideLength){
	side = sideLength;
}

//destructor
Square :: ~Square(){
}

