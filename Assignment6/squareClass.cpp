/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #6: Abstract Class and Command Line Parameter
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 4 March 2019
 ******************************************************************************/
#include "shapeClass.h"

/*******************************************************************************
 * Square Class
 * 	 This class represents an Square object and is inherited from Shape class.
 * 	 It manages no attributes.
 *******************************************************************************/
class Square:public Shape<double>
{
public:
	double calcPerimeter(double nums);
	double calcArea(double nums);
};


/*******************************************************************************
 * calcPerimeter(double side);
 * 	 Accessor; Calculates perimeter of square
 * 	 Parameters: side (double) // IN - square side length
 * 	 Return: none
 *******************************************************************************/
double Square::calcPerimeter(double nums) // IN - square side length
{
	// Declare variable
	double perim;  // PROC/OUT - perimeter of square

	// Calculate perimeter
	perim = 4 * nums;

	return perim;
}

/*******************************************************************************
 * calcArea(double side);
 * 	 Accessor; Calculates area of square
 * 	 Parameters: side (double) // IN - square side length
 * 	 Return: none
 *******************************************************************************/
double Square::calcArea(double nums) // IN - square side length
{
	// Declare variable
	double area;  // PROC/OUT - area of square

	// Calculate area
	area = nums * nums;

	return area;
}
