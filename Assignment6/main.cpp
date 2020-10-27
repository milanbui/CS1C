/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #6: Abstract Class and Command Line Parameter
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 4 March 2019
 ******************************************************************************/
#include "printHeader.h"
#include "functions.h"
/*******************************************************************************
 * SHAPES WITH ABSTRACT CLASS AND USING COMMAND LINE PARAMETERS
 * _____________________________________________________________________________
 *
 * This program will create an abstract class for a shape and create subclasses
 * for square and triangles. Calculate and print the area and perimeter of a
 * square and a triangle. Use command line parameter to pass and print my first
 * and last name and print the second character of my first and last name.
 * _____________________________________________________________________________
 * INPUT:
 *	    square   - square's side length
 *	    triangle - struct containing triangle's 3 side lengths
 *
 * OUTPUT:
 *
 *
 ******************************************************************************/
int main(int argc, char **argv)
{
	// DECLARING VARIABLES
	double square;         // IN   - square's side length
	TriangleNums triangle; // IN   - struct containing triangle's 3 side lengths
	int index;             // PROC - loop control variable

	// INITIALIZING VARIABLES
	square = 8.88;

	triangle.side1 = 5;
	triangle.side2 = 12;
	triangle.side3 = 13;

	// PRINTING CLASS HEADER AND PROGRAM DESCRIPTION
	cout << printHeader("Abstract Class and Command Line Parameter", 6);
	cout << "THIS PROGRAM WILL:" << endl;
	cout << "1. Create an abstract class for a shape and create subclasses"
			"\n   for square and triangles." << endl;
	cout << "2. Calculate and print the area and perimeter of a square and a"
			"\n   triangle" << endl;
	cout << "3. Use command line parameter to pass and print my first and last"
			"\n   name and print the second character of my first and last name"
		 << endl << endl << endl;

	cout << "PART 1" << endl << endl;

	// PRINTING PERIMETER
	printPerimeter(square, triangle);

	cout << endl;

	// PRINTING AREA
	printArea(square, triangle);

	cout << endl << endl << endl;



	cout << "PART 2" << endl << endl;


	// DISPLAYING FIRST AND LAST NAME

	for(index = 0; index < argc; index++)
	{
		if(index == 1)
		{
			cout << left << setw(10);
			cout << "First name" << ": ";
		}
		else if(index == 2)
		{
			cout << left << setw(10);
			cout << "Last name" << ": ";
		}
		cout << argv[index] << endl;
	}

	cout << endl;

	// DISPLAYING SECOND CHARACTER OF FIRST AND LAST NAME
	cout << left << setw(30);
	cout << "Second character of first name" << ": ";
	cout << argv[1][1] << endl;

	cout << left << setw(30);
	cout << "Second character of last name" << ": ";
	cout << argv[2][1] << endl;

	return 0;
}

