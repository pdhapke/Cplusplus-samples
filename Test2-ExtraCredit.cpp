//Peter Hapke
//7/14/17
//pdhapke@dmacc.edu
//this program produces 

#include <iostream>
#include <iomanip>
#include <string>

//this program creates a custom struct to hold event attendance information. it then shows example values and usage. 


using namespace std; 




struct Attendee{
	string name;
	string title; 
	string email; 	
	int rating; 
};

Attendee attendeeMaker(string, string, string, int); 


int main(){


//create the example struct array, if it did not have the default constructor it would look much different
float averageScore = 0; 
int NUM_OF_ATTENDEES = 5;
Attendee conferenceDMACC[NUM_OF_ATTENDEES]; 	
int counter = 0; 

conferenceDMACC[counter] = attendeeMaker("Spiderman", "Mr.", "example@school.com", 5); 
counter++; 	

conferenceDMACC[counter] = attendeeMaker("SuperGirl", "Ms.", "secretidentiy@hiding.net", 8); 
counter++; 	
	
conferenceDMACC[counter] = attendeeMaker("Wonderwoman", "Mrs.", "Amazonsdonthaveemail@tribe.com", 1); 
counter++; 		
	
conferenceDMACC[counter] = attendeeMaker("Flash", "Dr.", "flash@needhelp.org", 9); 
counter++; 		

conferenceDMACC[counter] = attendeeMaker("Two-Face", "Esq.", "killthebat01@gotham.us", 7); 

//display example case
Attendee example = conferenceDMACC[1];

cout << "**********************"<< endl;
cout << "*******Example********"<< endl;
cout << "Name: " << example.title << " " <<example.name<< endl; 
cout << "Email: "<<example.email<< endl; 
cout << "Rating: "<<example.rating<< endl <<endl; 



//calculate the average rating of the attendees
for( int i = 0; i < NUM_OF_ATTENDEES; i++) {
	averageScore += conferenceDMACC[i].rating;
}
averageScore /= static_cast<float>(NUM_OF_ATTENDEES);

cout << "*****************************"<< endl;
cout << "*******Average Rating********"<< endl;
cout << "The average rating is "<< averageScore << " out of 10." << endl;
	
return 0; 
}

Attendee attendeeMaker(string n, string t, string e, int r){
	Attendee temp; 
	
	temp.name = n; 
	temp.title = t; 
	temp.email = e; 
	temp.rating = r; 
	
	return temp;
}

















