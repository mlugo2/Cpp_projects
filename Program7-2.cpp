// This program demonstrates a simple class with member functions
// defined outside the class declaration.
#include <iostream>
#include <cmath>
using namespace std;

// Circle class declaration
class Circle
{
	private:
		double radius;		// This is a member variable
		
	public:
		void setRadius(double);		// These are just prototypes
		double getArea();			// for the member functions.
};

// The member functions implementation section follows. It contains the 
// actual function definitions for the Circle class member functions.

/********************************************************************
*						Circle::setRadius							*
*	This function copies the argument passed into the parameter to	*
*	the private member variable radius.								*
********************************************************************/

void Circle::setRadius(double r)
{	radius = r;
}

/********************************************************************
*						Circle::setRadius							*
*	This function calculates and returns the Circle object's area.	*
*	It does not need ant parameters because it already has access	*
*	to the member variable radius.									*
********************************************************************/

double Circle::getArea()
{ return 3.14 * pow(radius, 2);
}

/********************************************************************
*							main									*
********************************************************************/

int main()
{
	Circle circle1,
		   circle2;
		   
	circle1.setRadius(1);
	circle2.setRadius(2.5);
	
	cout << "The area of circle1 is " << circle1.getArea() << endl;
	cout << "The area of circle2 is " << circle2.getArea() << endl;
	
	return 0;
 }