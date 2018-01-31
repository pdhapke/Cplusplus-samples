//Peter Hapke
//7/14/17
//pdhapke@dmacc.edu
//this program produces 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Item {
	private: 
	string name;  
	int quantity; 
	float cost; 
	float profit; 
	
	
	public:
	Item(string n, int p);
	bool order(int x);
	float getProfit(){return profit;}
	float getCost(){return cost;}	
	int getQuantity(){return quantity;}
	string getName(){return name;}
};

Item :: Item(string n, int p){
name = n;
cost = p; 
quantity = 100; 
profit=0;
}

bool Item :: order(int x){
	bool temp; 
	if (x > quantity){
		temp = false; 
	} else {
	
		quantity-=x; 

		profit +=(x*cost); 
		temp = true; 
		}
	return temp; 
}

bool updateInventory(Item i[], int b, int f, int d, int s);


int main(){
	

Item inventory[4] = {Item("Burger",10), 
					 Item("Fries", 5),
					 Item("Drink",3),
					 Item("Shake", 5)};

	
int sentinal= 999; 	
int burgers; 
int fries; 
int shakes; 
int drinks; 
bool error = true;

while(drinks != sentinal && fries != sentinal && burgers != sentinal && shakes != sentinal){
	cout << "-------------------"<< endl; 
	cout << "*  Stock Remaing: *" << endl; 
for (int i = 0; i < 4; i++){
	cout << inventory[i].getName() << ": " << inventory[i].getQuantity() << endl; 

}
	cout << "-------------------"<< endl; 
	
	
			cout << "How many burgers were ordered (enter 999 to exit): " ;
			cin>> burgers; 
		if (burgers != sentinal){
			cout << "How many fries were ordered (enter 999 to exit): " ;
			cin>> fries; 
		}
		if (fries != sentinal && burgers != sentinal){
			cout << "How many drinks were ordered (enter 999 to exit): " ;
			cin>> drinks; 
		}
		if(drinks != sentinal && fries != sentinal && burgers != sentinal){
			cout << "How many shakes were ordered (enter 999 to exit): " ;
			cin>> shakes; 
		}
		if(drinks != sentinal && fries != sentinal && burgers != sentinal && shakes != sentinal){	
		error = updateInventory(inventory, burgers, fries, drinks, shakes);
		if(error){
			cout << "you do not have enough stock, try again or type 999 to exit"<<endl;
		} else {
			cout << "ready for the next order"<< endl;
		}
			 } 
	}
		
	
	
cout << endl << endl; 	
cout<< "**************************" << endl;
cout << "Total profit for the night is $"; 
float totalProfit = 0; 

for (int i = 0; i < 4; i++){
	totalProfit += inventory[i].getProfit(); 
}

cout <<  totalProfit << endl; 
cout<< "**************************" << endl;
cout << "Stock Remaing: " << endl; 
for (int i = 0; i < 4; i++){
	cout << inventory[i].getName() << ": " << inventory[i].getQuantity() << endl; 
	
}

	
	
	
	
return 0; 
}

bool updateInventory(Item i[], int b, int f, int d, int s)
{
 	bool havestock = (i[0].order(b) && i[1].order(f)&& i[2].order(d)&& i[3].order(s)); 
if (havestock){
	cout << "you ordered:" << endl;
	
	cout << b << " Burgers" << endl;
	cout << f << " fries" << endl;
	cout << d << " drinks" << endl;
	cout << s << " shakes" << endl;
	cout<< "************" << endl;
	cout<< showpoint << fixed << setprecision(2);
	cout << "order total: $" << b * i[0].getCost() + f * i[1].getCost() + d * i[2].getCost() + s * i[3].getCost() << endl;
}else{
	cout << "you do not have enough stock, try again or type 999 to exit" << endl; 
}
	
	return havestock; 
	
}	

