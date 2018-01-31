// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Peter Hapke

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 100){
		cout << "That data is invalid" << endl;
	} else if (average >= 90) {
		cout << "You have an A!" << endl;
	} else if (average >= 80) {
		cout << "You have an B." << endl;
	}else if (average >= 60) {
		cout << "You pass." << endl;
	} else {
		cout << "You fail." << endl;
	}
	//if you have a negative average it will be a failure
	
	return 0;
}
