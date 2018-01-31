// Chapter 13, Programming Challenge 4: Movie Data


//Peter Hapke
//pdhapke@dmacc.edu
// 7/7/17

#include <iostream>
#include <string>

#include <cmath>
#include <iomanip>

using namespace std;

//create the class
class PInfo {
	
	public: 
	//name the setters
	void setName(float nameOfPerson);
	void setAge(int ageOfPerson);
	void setAddress(string addressOfPerson); 
	void setPhone(string phoneNumber);
	//create the inline getters
	string getName(){return name;};
	int getAge(){return age;};
	string getAddress(){return address;}; 
	string getPhone(){return phone;};
	//declare the print method
	void print();
	
	//establish the constructors and deconstructors
	PInfo();
	PInfo(string nameOfPerson);
	PInfo(string nameOfPerson, int ageOfPerson);
	PInfo(string nameOfPerson, int ageOfPerson, string addressOfPerson);
	PInfo(string nameOfPerson, int ageOfPerson, string addressOfPerson, string phoneNumber);
	~PInfo(); 
	
	private: 
	//declare the members
	string name;
	int age; 
	string address; 
	string phone; 
	
};

int main(){
	
	//demonstrates the constructor and its default values
	PInfo me("Peter Hapke", 30, "1464 Breckinridge ct", "515-290-4801");
	PInfo aBaby("Jon Doe");
	PInfo aRelative("Sam Hapke", 27);
	
	//reports all three objects
	
	me.print();
	aBaby.print();
	aRelative.print();
		
	
	return 0; 
}





//setter functions
	void PInfo :: setName(float nameOfPerson){
		name = nameOfPerson; 
	}
	
	void PInfo ::setAge(int ageOfPerson){
		age = ageOfPerson;
	}
	
	void PInfo ::setAddress(string addressOfPerson){
		address = addressOfPerson; 
	}
	
	void PInfo ::setPhone(string phoneNumber){
		phone = phoneNumber; 
	}

//print function	
	void PInfo :: print(){
		cout << "********Personal Information********" << endl; 
		cout << name << ", "<< age << endl;
		cout << address << endl; 
		cout << phone << endl; 
		cout << "************************************" << endl; 
		
	}

//the various constructors	
PInfo :: PInfo(string nameOfPerson, int ageOfPerson = 0, string addressOfPerson = "UNKNOWN", string phoneNumber = "555-555-5555" ){
		name = nameOfPerson; 
		age = ageOfPerson;
		address = addressOfPerson; 
		phone = phoneNumber; 
	};
PInfo :: PInfo(string nameOfPerson, int ageOfPerson = 0, string addressOfPerson = "UNKNOWN" ){
		name = nameOfPerson; 
		age = ageOfPerson;
		address = addressOfPerson; 
		phone = "555-555-5555"; 
	};	
PInfo :: PInfo(string nameOfPerson, int ageOfPerson = 0){
		name = nameOfPerson; 
		age = ageOfPerson;
		address =  "UNKNOWN"; 
		phone = "555-555-5555"; 
	}
PInfo :: PInfo(string nameOfPerson){
		name = nameOfPerson; 
		age = 0;
		address =  "UNKNOWN"; 
		phone = "555-555-5555"; 
	};		
	
	
//deconstructor	
PInfo :: ~PInfo(){
	//cout << "He's dead Jim" ; //for fun
}; 

