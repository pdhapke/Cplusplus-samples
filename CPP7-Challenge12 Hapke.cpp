#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//this program will keep track of the 4 test scores for 
//each of 3 students as well as their names and letter grade

//this would be much easier if using a struct

char letterGrade(double);

int main(){
//setup helpers	
int NUMBER_OF_STUDENTS = 3;
int NUMBER_OF_TESTS = 4;  	
int extraCredit = 10; 

//setup the parallell arrays 
string name[NUMBER_OF_STUDENTS];
//an aray of arrays is like a seperate array for each student
double tests[NUMBER_OF_STUDENTS][NUMBER_OF_TESTS];	
char grade[NUMBER_OF_STUDENTS]; 

//these nested loops will go through each student and then for each 
//student go through each test to populate the arrays

for (int i = 0; i < NUMBER_OF_STUDENTS; i++){
	cout << "Please enter the name of student #" << i + 1 << ": "; 

	getline(cin, name[i]);
	
	for (int j = 0; j < NUMBER_OF_TESTS; j++){
		
		//data validation for test scores
		do{
		cout<< "Please enter the score " << name[i] << " received on test #" << j + 1 << ": ";
		cin >> tests[i][j]; 
		if(tests[i][j]< 0 || tests[i][j] > 100 ){
			cout << "That is not a valid score, please try again." << endl;
		}
		
		}while(tests[i][j]< 0 || tests[i][j] > 100 );
	}
	//this clears an error state and the buffer between calls for strings
	cin.ignore(); 
	cin.clear(); 
	cout << endl; 
}

//formatting 
cout << "****************************" << endl;

//nested loops to iterate through the tests and calculate average scores for the students
for (int i = 0; i < NUMBER_OF_STUDENTS; i++){
double combinedScore=0; 
double averageScore = 0; 
	for (int j = 0; j < NUMBER_OF_TESTS; j++){
	combinedScore += tests[i][j];
	}
	averageScore = (combinedScore + extraCredit)/static_cast<double>(NUMBER_OF_TESTS);
	grade[i] = letterGrade(averageScore); 
	cout << name[i] << " has an average score of " << averageScore << " and a letter grade of " << grade[i] << endl;
}
	return 0; 
}


//this function will take an average score and give a letter grade
char letterGrade(double score){
	char grade; 
	
	if(score >= 90){
		grade = 'A'; 
		
	} else if(score >= 80){
		grade = 'B'; 
	} else if(score >= 70){
		grade = 'C'; 
	} else if(score >= 60){
		grade = 'D'; 
	} else {
		grade = 'F';
	}
	
	return grade;
}

