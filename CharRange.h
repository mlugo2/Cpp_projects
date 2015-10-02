// CharRange.h -- CharRange class specification file
#ifndef CHARRANGE_H
#define CHARRANGE_H

// Define Class
class CharRange
{
	private:
		char input;		// User input
		char lower;		// Lowest valid character
		char upper;		// Highest valid character
	public:
		CharRange(char, char);
		char getChar();
};
#endif