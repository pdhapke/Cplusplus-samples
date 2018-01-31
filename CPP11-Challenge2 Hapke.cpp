// Chapter 11, Programming Challenge 1: Movie Data
// this code was taken from the book answer provided for problem 1
//so that it could be modified for problem 2

//Peter Hapke
//pdhapke@dmacc.edu
// 7/7/17

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

struct MovieData
{
   string title;    // Movie title
   string director; // Director
   int year;        // Year released
   int length;      // Running time in minutes
   double productionCost; //new member for problem 2
   double firstYearGross; //new member for problem 2
};

// Function prototype
void displayMovie(MovieData);

int main()
{
   // Create two MovieData variables.
   MovieData movie1, movie2;
   
   // Assign values to movie1's members.
   movie1.title = "War of the Worlds";
   movie1.director = "Byron Haskin";
   movie1.year = 1953;
   movie1.length = 88;
   movie1.productionCost = 2000000; 
   movie1.firstYearGross = 2000000; 

   // Assign values to movie2's members.
   movie2.title = "War of the Worlds";
   movie2.director = "Stephen Spielberg";
   movie2.year = 2005;
   movie2.length = 118;
   movie2.productionCost = 132000000.00; 
   movie2.firstYearGross = 606836535.00; 
   // Display movie1's data.
   displayMovie(movie1);
   cout << endl;
   
   // Display movie2's data.
   displayMovie(movie2);
   
   return 0;
}

//*****************************************************
// The displayMovie function displays the data in the *
// member variables of the MovieData structure passed *
// as an argument.                                    *
// ****************************************************

void displayMovie(MovieData m)
{
	double profit = m.firstYearGross - m.productionCost;
	
    cout << "\nTitle       : " << m.title;
    cout << "\nDirector    : " << m.director;
    cout << "\nReleased    : " << m.year;
    cout << "\nRunning Time: " << m.length  << " minutes" ;
    
    cout << fixed << showpoint << setprecision(2); 
	cout << "\n" << ((profit >= 0) ? "Profit      : $":"Loss        : $") << fabs(profit);
	cout << endl;
}
