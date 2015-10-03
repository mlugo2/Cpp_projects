// This program implements a Rectagle class.
#include <iostream>
using namespace std;

// Rectagle class declaration
class Rectagle
{
	private:
		double length;
		double width;
	public:
		void setLength(double);
		void setWidth(double);
		double getLength();
		double getWidth();
		double getArea();
};

// Member function implementation section

/*********************************************************************
*						Rectagle::setLength							 *
*	This function sets the value of the member variable length.		 *
*	If the argument passed to the function is zero or greater, it is *
*	copied into length. If it is negative, 1.0 is assigned to length.*
*********************************************************************/
void Rectagle::setLength(double len)
{
	if (len >= 0)
		length = len;
	else
	{
		length = 1.0;
		cout << "Invalid length. Using a default value of 1.\n";
	}
}

/*********************************************************************
*						Rectagle::setWidth							 *
*	This function sets the value of the member variable width.		 *
*	If the argument passed to the function is zero or greater, it is *
*	copied into length. If it is negative, 1.0 is assigned to length.*
*********************************************************************/
void Rectagle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		width = 1.0;
		cout << "Invalid width. Using a default value of 1.\n";
	}
}

/*********************************************************************
*						Rectagle::getLength							 *
*	This function returns the value in member variable length.		 *
*********************************************************************/
double Rectagle::getLength()
{
	return length;
}

/*********************************************************************
*						Rectagle::getWidth							 *
*	This function returns the value in member variable Width.		 *
*********************************************************************/
double Rectagle::getWidth()
{
	return width;
}
/*********************************************************************
*						Rectagle::getArea							 *
*	This function calculates and returns the area of the rectangle.	 *
*********************************************************************/
double Rectagle::getArea()
{
	return length * width;
}

/*********************************************************************
*								main								 *
*********************************************************************/
int main()
{
	Rectagle box;				// Declare a Rectagle object
	double boxLength, boxWidth;
	
	// Get box length and width
	cout << "This program will calculate the area of a rectagle.\n";
	cout << "What is the length? ";
	cin >> boxLength;
	cout << "What is the width? ";
	cin >> boxWidth;
	
	// Call member functions to set box dimensions
	box.setLength(boxLength);
	box.setWidth(boxWidth);
	
	// Call member functions to get box information to display
	cout << "\nHere is the rectagle's data:\n";
	cout << "Length	: " << box.getLength() << endl;
	cout << "Width	: " << box.getWidth() << endl;
	cout << "Area	: " << box.getArea() << endl;
	return 0;
}