//Peter Hapke
//6/30/17
//pdhapke@dmacc.edu

#include <string>
#include <iostream>
#include <iomanip>

using namespace std; 

//setup the struct
struct Product {
	string name; 
	int number; 
	double costToProduce; 
	double salePrice; 
	double profit; 
	//I added the units sold so that I could reference it later
	int unitsSold;
	
};


Product createProduct(string, int, double, double); 

int main(){

//set the number of products as a variable so that it can be changed easily
int numberOfProducts = 4; 
Product inventory[numberOfProducts]; 

//first for loop to gather the product info
for (int i = 0; i < numberOfProducts; i++ ){
string name;
int number; 
double cost;
double sale; 


cout << "Please enter the name of product #" << (i + 1) << ": ";
getline(cin, name); 

cout << "Please enter the product's part number: "; 
cin >> number; 


cout << "Please enter the product's cost of production: "; 
cin >> cost; 


cout << "Please enter the product's selling price: "; 
cin >> sale; 


	inventory[i] = createProduct(name, number, cost, sale);

//ignore the reamining data and clear errors
cin.ignore(); 
cin.clear(); 	
}

//second for loop to ask for sales figures
for (int i = 0; i < numberOfProducts; i++ ){
int numberSold; 

do{
cout << "How many " << inventory[i].name << " have been sold?: ";
cin >> numberSold; 

if (numberSold < 0){
	cout << "Negative sales are impossible please enter a new number"<< endl;
}

}while(numberSold < 0);
inventory[i].unitsSold = numberSold; 
inventory[i].profit = (inventory[i].salePrice - inventory[i].costToProduce) * numberSold; 
}


cout << "*********************************" << endl; 

//setup for the next loop 
double totalProfit = 0; 	
cout<< showpoint << fixed << setprecision(2); 

//for loop to report the profits and total profits
for (int i = 0; i < numberOfProducts; i++ ){
cout << inventory[i].name << " sold "	<< inventory[i].unitsSold << " units and a made a profit of $" << inventory[i].profit << endl;
totalProfit += inventory[1].profit;	
	
}

cout << "Total profit: $" << totalProfit;

return 0; 	
}

Product createProduct(string name, int number, double cost, double sale){
	
	Product newItem = {name, number, cost, sale, 0, 0};
			
	return newItem; 
}
