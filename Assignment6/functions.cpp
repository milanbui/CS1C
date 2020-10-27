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
#include "squareClass.h"
#include "triangleClass.h"
using namespace std;


/*******************************************************************************
 * FUNCTION printPerimeter
 * _____________________________________________________________________________
 *
 * This function calls methods to calculate the perimeter of a square and
 * triangle and prints the results.
 * _____________________________________________________________________________
 * PRE-CONDITIONS:
 *     squareSides must exist and be defined
 *     triangleSides must exist and be defined
 *
 * POST-CONDITIONS:
 *     none
 *       -> Displays results
 ******************************************************************************/
void printPerimeter(double squareSides,         // IN - Square side length
                    TriangleNums triangleSides) // IN - triangle side lengths
{
	// DECLARES VARIABLES
	Square square;      // PROC/OUT - square object
	Triangle triangle;  // PROC/OUT - triangle objects

	// CALCULATES AND DISPLAYS SQUARE PERIMETER
	cout << left << setw(35) << fixed << setprecision(2);
	cout << "The perimeter of the square is" << ": "
		 << square.calcPerimeter(squareSides) << " inches" << endl;

	// CALCULATES AND DISPLAYS TRIANGLE PERIMETER
	cout << left << setw(35) << fixed << setprecision(2);
	cout << "The perimeter of the triangle is" << ": "
		 << triangle.calcPerimeter(triangleSides) << " feet" << endl;
}

/*******************************************************************************
 * FUNCTION printArea
 * _____________________________________________________________________________
 *
 * This function calls methods to calculate the area of a square and
 * triangle and prints the results.
 * _____________________________________________________________________________
 * PRE-CONDITIONS:
 *     squareSides must exist and be defined
 *     triangleSides must exist and be defined
 *
 * POST-CONDITIONS:
 *     none
 *       -> prints results
 ******************************************************************************/
void printArea(double squareSides,         // IN - Square side length
               TriangleNums triangleSides) // IN - triangle side lengths
{
	// DECLARES VARIABLES
	Square square;      // PROC/OUT - square object
	Triangle triangle;  // PROC/OUT - triangle objects

	// CALCULATES AND DISPLAYS SQUARE AREA
	cout << left << setw(35) << fixed << setprecision(2);
	cout << "The area of the square is" << ": "
		 << square.calcArea(squareSides) << " inches" << endl;

	// CALCULATES AND DISPLAYS TRIANGLE AREA
	cout << left << setw(35) << fixed << setprecision(2);
	cout << "The area of the triangle is" << ": "
		 << triangle.calcArea(triangleSides) << " feet" << endl;
}
