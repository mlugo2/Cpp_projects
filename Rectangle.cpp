// File Rectangle.cpp -- Rectangle class function implementation file
#include "Rectangle.h"


Rectangle::Rectangle(double len, double w)
{
	length = len;
	width = w;
}

/******************************************************************
*					Rectangle::getLength						  *
* This function returns the value in member varible length.		  *
******************************************************************/
double Rectangle::getLength()
{
	return length;
}

/******************************************************************
*					Rectangle::getWidth							  *
* This function returns the value in member varible width.		  *
******************************************************************/
double Rectangle::getWidth()
{
	return width;
}

/******************************************************************
*					Rectangle::getArea							  *
* This function calculates and return the area of the rectangle.  *
******************************************************************/
double Rectangle::getArea()
{
	return length * width;
}