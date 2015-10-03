#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	
	double boxLength, boxWidth;
	
	cout << "What is the rectangle's length? ";
	cin >> boxLength;
	
	cout << "What is the rectangle's width? ";
	cin >> boxWidth;
	
	// Create Rectangle object and pass 
	// the measurements to the member variables
	Rectangle box(boxLength, boxWidth);
	
	// Output the length, width and area
	cout << "Length: " << box.getLength() << endl;
	cout << "Width: " << box.getWidth() << endl;
	cout << "Area: " << box.getArea() << endl;
	
	return 0;
}