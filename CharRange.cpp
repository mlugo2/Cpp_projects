// CharRange.cpp -- CharRange class function implementation file
#include <iostream>
#include <cctype>
#include "CharRange.h"
using namespace std;

/************************************************
*		CharRange default constructor			*
************************************************/
CharRange::CharRange(char l, char u)
{
	lower = toupper(l);		// Set the valid lower
	upper = toupper(u);		// and upper bounds
}

/********************************************************
*				CharRange::getChar						*
* This function inputs a character, validates it is in 	*
* the correct range, then returns the valid character.	*
********************************************************/
char CharRange::getChar()
{
	cin.get(input);				// Get a character
	cin.ignore();				// Ignore the '\n' in the input buffer
	input = toupper(input);		// Convert the character to uppercase
	
	// Ensure character is in the correct range.
	// If not, require the user to re-enter it.
	while (input < lower || input > upper)
	{
		cout << "That is not a valid character.\n";
		cout << "Enter a value from " << lower;
		cout << " to " << upper << ".\n";
		cin.get(input);
		cin.ignore();
		input = toupper(input);
	}
	return input;
}