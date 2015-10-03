// This program uses a constant reference parameter.
// It also illustrates how to return an object from a function.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class InventoryItem
{
	private:
		int partNum;				// Part number
		string description;			// Item description
		int onHand;					// Units on hand
		double price;				// Unit price
		
	public:
		
		void storeInfo( int p, string d, int oH, double cost);	// Prototype
		
		int getPartNum() const		// The get function have all been made
		{ return partNum; }			// const functions. This ensures they
									// cannot alter any class member data.
		string getDescription() const
		{ return description; }
		
		int getOnHand() const
		{ return onHand; }
		
		double getPrice() const
		{ return price; }
};

// Implementation code for InventoryItem class fucntion storeInfo
void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
	partNum = p;
	description = d;
	onHand = oH;
	price = cost;
}

// Function prototypes for client program
InventoryItem createItem();					// Returns an InventoryItem object
void showValues (const InventoryItem&);		// Recieves a reference to an
											// InventoryItem object

//****************main**********************
int main()
{
	InventoryItem part = createItem();
	showValues(part);
	return 0;
}

/***********************************************************
*						createItem						   *
* This function stores user input data in the members of a *
* locally defined InventoryItem object, then returns it.   *
***********************************************************/
InventoryItem createItem()
{
	InventoryItem tempItem;		// Local InventoryItem object
	int partNum;				// Local variable to hold user input
	string description;
	int qty;
	double price;
	
	// Get the data from the user
	cout << "Enter data for the new part number \n";
	cout << "Part Number: ";
	cin >> partNum;
	cout << "Description: ";
	cin.get();					// Move past the '\n' left in the
								// input buffer by the last input
	getline(cin, description);
	cout << "Quantity on hand: ";
	cin >> qty;
	cout << "Unit price: ";
	cin >> price;
	
	// Store the data in the InventoryItem object and return it
	tempItem.storeInfo(partNum, description, qty, price);
	return tempItem;
}

/**************************************************************
*						createItem						      *
* This function displays the member data in the InventoryItem *
* object passed to it. Beacuse it was passed as a constant    *
* reference, showValues accesses the original object, not a   *
* copy, but it can only call member functions declared to be  *
* const. This prevents it from calling any mutator functions. *
**************************************************************/
void showValues( const InventoryItem &item)
{
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Part Number	: " << item.getPartNum() << endl;
	cout << "Description	: " << item.getDescription() << endl;
	cout << "Units On Hand	: " << item.getOnHand() << endl;
	cout << "Price	: $" << item.getPrice() << endl;
	
}