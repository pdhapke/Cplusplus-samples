//Peter Hapke
//7/14/17
//pdhapke@dmacc.edu
//this program produces an Inventory class and then tests all the pieces


#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std; 





class Inventory {
	private: 
	int itemNumber;
	int quantity; 
	double cost; 
	double totalcost; 
	
	public: 

	//constructors
	Inventory();
	~Inventory(); 
	
	Inventory(int num, int q, double c); 

	//getters and setters
	void setItemNumber(int number);
	
	void setQuantity(int q);
	
	void setCost(double c);
	
	void setTotalCost(){totalcost = quantity * cost;};
	
	int getItemNumber(){return itemNumber;};
	
	int getQuantity(){return quantity;};
	
	double getCost(){return cost;};
	
	double getTotalCost(){return totalcost;};
	
	
};

int main(){
	
	//test the blank item constructor, then set the pieces

	Inventory object1;
	cout << "Item Number: " <<object1.getItemNumber() << endl;
	cout << "Qunatity: " <<object1.getQuantity() << endl;
	cout << "Cost: " <<object1.getCost() << endl;
	cout << "Total Cost: " <<object1.getTotalCost() << endl;
	
	object1.setItemNumber(5);
	object1.setQuantity(3);
	object1.setCost(10.00);
	object1.setTotalCost();
	
	cout << "------" << endl;
	
	cout << showpoint << fixed << setprecision(2);  
	cout << "Item number: " <<object1.getItemNumber() << endl;
	cout << "Qunatity: " <<object1.getQuantity() << endl;
	cout << "Cost: $" <<object1.getCost() << endl;
	cout << "Total Cost: $" <<object1.getTotalCost() << endl;
	
	cout << "**********************************************" << endl;








	//test the non-basic item constructor
	Inventory object2(5, 3, 10.00);
	cout << "Item number: " <<object2.getItemNumber() << endl;
	cout << "Qunatity: " <<object2.getQuantity() << endl;
	cout << "Cost: $" <<object2.getCost() << endl;
	cout << "Total Cost: $" <<object2.getTotalCost() << endl;
	
	cout << "**********************************************" << endl;
	
	
	
	
	
	
	
	
	
	//test improper values 
	Inventory object3(-5, 3, 10.00);
	Inventory object4(5, -3, 10.00);
	Inventory object5(5, 3, -10.00);
	
	cout << "**********************************************" << endl;
		
	//test the setters with improper values
	object1.setItemNumber(-5);
	object1.setQuantity(-3);
	object1.setCost(-10.00);

	

	
	return 0; 
}



Inventory :: Inventory(){
	itemNumber = 0; 
	quantity = 0; 
	cost =0; 
	totalcost  = 0; 
}

Inventory :: ~Inventory(){
//deconstructor
}

Inventory :: Inventory(int num, int q, double c) {
	
	if ((num >= 0) & (q >= 0) & (c >= 0)){
	
		itemNumber = num; 
		quantity = q; 
		cost = c;
		setTotalCost();
	}else {
		cout << "There was an error with your input, item number, quantity, and cost must be greater than 0" << endl; 
	}	
}

void Inventory :: setItemNumber(int number){
		if (number < 0){
			cout << "There was an error with your input, item number, quantity, and cost must be greater than 0" << endl; 
		}else {
			itemNumber = number;
		}
	
	};
void Inventory :: setQuantity(int q){
			if (q < 0){
			cout << "There was an error with your input, item number, quantity, and cost must be greater than 0" << endl; 
		}else {
			quantity = q;
		}
		
	};

void Inventory :: setCost(double c){
			if (c < 0){
			cout << "There was an error with your input, item number, quantity, and cost must be greater than 0" << endl; 
		}else {
			cost = c;
		}
		
	};
