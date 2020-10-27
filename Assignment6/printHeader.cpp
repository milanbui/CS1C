/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #6: Abstract Class and Command Line Parameter
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 4 March 2019
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
/********************************************************************
 * FUNCTION printHeader
 * __________________________________________________________________
 *
 * This function returns a header including the lab name, lab number,
 * the programmer's name, the class name, and the section time
 * as a string
 * __________________________________________________________________
 * PRE-CONDITIONS:
 *     labName - Name of the lab. The labName should be previously
 *               defined
 *     labNumber - Number of the lab. The labNumber should be
 *                 previously defined
 *
 * POST-CONDITIONS:
 *      returns header as string
 *******************************************************************/
string printHeader(string labName,         //OUT - name of lab
		           int labNumber)          //OUT - the lab number
{
	// Declare variables
	ostringstream output; // OUT - output stream

	//  OUTPUT - Class Heading
	output << left;
	output << setw(75) << setfill('*') << "*";
	output << setfill(' ');
	output << "\n*	PROGRAMMED BY : " << "Milan Bui";
	output << "\n*	" << setw(14) << "CLASS" << ": " << "CS1C";
	output << "\n*	" << setw(14) << "SECTION" << ": "
		   << "MW: 5:00p - 7:20p";
	output << "\n*	ASSIGNMENT #" << setw(2) << labNumber << ": "
		   << labName;
	output << "\n";
	output << setw(75) << setfill('*') << "*";
	output << setfill(' ');
	output << "\n\n";
	output << right;
	//  OUTPUT - return class heading as string
	return output.str();

}
