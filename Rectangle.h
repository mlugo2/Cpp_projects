// File Rectangle.h -- Rectangle class specification file
#ifndef RECTANGLE_H
#define RECTANGLE_H

// Rectangle class declaration
class Rectangle
{
	private:
		double length;
		double width;
	public:
		Rectangle( double, double);
		double getLength();
		double getWidth();
		double getArea();
};
#endif