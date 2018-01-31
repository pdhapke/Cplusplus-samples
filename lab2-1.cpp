// This program will write the name, address and telephone
// number of the programmer.
// Peter Hapke
#include <iostream>
//included iomanip because I want to use setwidth
#include <iomanip>
using namespace std;
int main()
{
// this section will add the asterisks
cout << "************\n";
// Fill in this space to write your first and last name, used setw in order to offset the programmer title from the asterisk line
cout << setw(16)<<"Programmer: " << "Peter Hapke \n";
//I used set width with the number of characters of the programmer section plus 4 to create a space of the required size, using a space for the output to be sized
// Fill in this space to write your address (on new line) because I did not add a width it will take the space it needs
cout << setw(16) << " " << "1464 Breckenridge ct. \n";
// Fill in this space to write you city, state and zip (on new line) used the same code, added a second line break
cout << setw(16) << " " << "Ames, IA 50010 \n\n";		
// Fill in this space to write your telephone number (on new line) same code except the space is replace with the word telephone
cout << setw(16) << "Telephone: " << "(515)290-4801";
// this section will add the asterisks
cout << "\n************";

return 0;
}

