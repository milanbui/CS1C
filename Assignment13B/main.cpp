/*******************************************************************************
 * AUTHOR		  : Milan Bui
 * STUDENT ID 	  : #
 * ASSIGNMENT #13B: Miscellaneous Topics
 * CLASS		  : CS 1C
 * SECTION		  : MW: 5:00p - 7:20p
 * DUE DATE		  : 29 April 2019
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include "printHeader.h"
using namespace std;

/*******************************************************************************
 * FUNCTION bitCount(int x)
 * This function returns the number of bits turned on for the given letter
 *      returns the number of bits turned on
 ******************************************************************************/
int bitCount(int x);

/*******************************************************************************
 * COUNTS TURNED ON BITS FOR CAPITAL AND LOWERCASE LETTERS
 * _____________________________________________________________________________
 *
 *  This program calculates the number of bits turned on for all the capital and
 *  lower case letters and displays the letters and the number bits turned on.
 * _____________________________________________________________________________
 * INPUT:
 *		none
 * OUTPUT:
 *	    totalBits - the total bits on
 *
 ******************************************************************************/
int main()
{
	// Declare and Initialize variable
	int totalBits = 0;                 // PROC/OUT - total bits turned on


	// OUTPUT -- displys the class header and program description
	cout << printHeader("Miscellaneous Topics", 13);


	cout << "This program will:" << endl;
	cout << "1. calculate the number of bits turned on for all capital and lower"
			"\n   case letters." << endl;
	cout << "2. Displays the ASCII representation of the numbers."
		 << endl << endl;



	// PROCESSING/OUTPUT -- calculates and displays the number of bits turned on
	//                      for each capital letter
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "BIT COUNT FOR CAPITAL LETTERS" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl;
	for(int i = 65; i < 91; i++)
	{
		totalBits += bitCount(i);
		cout << "Number of bits turned on for " << char(i) << " = "
			 << bitCount(i) << endl;
	}

	cout << endl << endl;


	// PROCESSING/OUTPUT -- calculates and displays the number of bits turned on
	//                      for each lower case letter
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "BIT COUNT FOR LOWERCASE LETTERS" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl;
	for(int i = 97; i < 123; i++)
	{
		totalBits += bitCount(i);
		cout << "Number of bits turned on for " << char(i) << " = "
			 << bitCount(i) << endl;
	}

	cout << endl << endl;

	cout << "Total bits on: " << totalBits << endl;


	return 0;
}

/*******************************************************************************
 * FUNCTION bitCount(int x)
 * _____________________________________________________________________________
 *
 * This function returns the number of bits turned on for the given letter
 * _____________________________________________________________________________
 * PRE-CONDITIONS:
 *    	x - ASCII value for the letter
 * POST-CONDITIONS:
 *      returns the number of bits turned on
 ******************************************************************************/
int bitCount(int x)
{
	int count = 0;
	while(x)
	{
		x = x & (x-1);
		count++;
	}

	return count;
}

