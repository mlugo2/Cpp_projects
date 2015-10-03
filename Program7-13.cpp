// This program uses the CharRange class and demonstrates its
// capabilities. This file should be combined into a project
// along with CharRange.h and CharRange.cpp files.
#include <iostream>
#include "CharRange.h"
using namespace std;

int main()
{
	char ch;						// Holds user input_iterator
	
	CharRange input('J', 'N');		// Create a CharRange object named
									// input that ensures entered
									// characters are in the range J - N
									
	// Promt the user to enter a letter
	cout << "Enter any of the characters J, K, L, M, or N. \n";
	cout << "Entering N will stop this program.\n";
	
	// Call an input member function to accept the user input and
	// validate it before returning it to be assigned to variable ch
	ch = input.getChar();
	
	// Continue allowing letters to be entered until an 'N' is input
	while (ch != 'N')
	{
		cout << "You entered " << ch << endl;
		ch = input.getChar();
	}
	return 0;
}