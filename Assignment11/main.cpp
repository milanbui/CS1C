/*******************************************************************************
 * AUTHOR		 : Milan Bui
 * STUDENT ID 	 : #
 * ASSIGNMENT #11: Recursion
 * CLASS		 : CS 1C
 * SECTION		 : MW: 5:00p - 7:20p
 * DUE DATE		 : 8 April 2019
 ******************************************************************************/
#include <iostream>
#include "printHeader.h"
using namespace std;

void reverse(const string& alph, int index1, int index2)
{
	// Base case
	if(index2 == index1)
	{
		cout << alph[index1];
	}
	else
	{
		cout << alph[index2--];
		reverse(alph, index1, index2);
	}
}
/*******************************************************************************
 * REVERSING STRINGS USING RECURSION
 * _____________________________________________________________________________
 *
 *  This program will prompt for the input of two indices used to reverse a
 *  string. It will then perform a reversal of a substring from index 1 to
 *  index 2 and output the result.
 * _____________________________________________________________________________
 * INPUT:
 *	    alphabet   - string being reversed
 *	    _index1    - index 1 (smaller of the indices of where to reverse)
 *	    _index2    - index 2 (larger of the indices of where to reverse)
 *
 * OUTPUT:
 *	    alphabet   - string being reversed
 *
 ******************************************************************************/
int main()
{
	// Declaring & Initializing variables
	string alphabet = "abcdefghijklmnopqrstuvwxyz"; // IN/OUT - string being
	                                                //          reversed
	int length = alphabet.length();                 // CALC   - length of string
	int _index1;                                    // IN     - first index
	int _index2;                                    // IN     - second index

	// OUTPUT -- displays header and program description
	cout << printHeader("Recursion", 11);

	cout << "This program will:" << endl;
	cout << "1. Prompt for input for two indices used to reverse a string" << endl;
	cout << "2. Output the string with the substring from index 1 to index 2"
			"\n   reversed" << endl << endl << endl;

	// Loops three times to prompt for input and perform reversal 3 times
	for(int j = 0; j < 3; j++)
	{
		// INPUT -- prompts for input of 2 indices
		cout << "Please input the indices you would like to reverse (between 1 and "
			 << length << ")" << endl;

		cout << "Index 1: ";
		cin >> _index1;
		cin.ignore(1000, '\n');


		cout << "Index 2: ";
		cin >> _index2;
		cin.ignore(1000, '\n');

		cout << endl;

		// Decrement the indices to correspond to indices in an array
		_index1--;
		_index2--;

		// OUTPUT -- outputs the string.
		for(int i = 0; i < _index1; i++)
		{
				cout << alphabet[i];

		}

		reverse(alphabet, _index1, _index2);

		for(int i = (_index2+1); i < length; i++)
		{
				cout << alphabet[i];

		}

		cout << endl << endl;
	}

	return 0;
}

/*******************************************************************************
 * FUNCTION reverse
 * _____________________________________________________________________________
 *
 * This function reverses the substring from index1 to index2 of the string alph
 * _____________________________________________________________________________
 * PRE-CONDITIONS :
 * 	   alph  : string to be reversed must exist/be initialized
 * 	   index1: first index must be less than second index and be within length
 * 	           of the string
 * 	   index2: second index must be greater than first index and be within
 * 	           length of string
 *
 * POST-CONDITIONS:
 *      returns nothing
 *         -> outputs reversed string
 ******************************************************************************/
void reverse(const string& alph, int index1, int index2);
