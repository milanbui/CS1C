/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #6: Abstract Class and Command Line Parameter
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 4 March 2019
 ******************************************************************************/
#include "shapeClass.h"
#include <math.h>

struct TriangleNums
{
	double side1;   // Length of side 1 of triangle
	double side2;   // Length of side 2 of triangle
	double side3;   // Length of side 3 of triangle
};

/*******************************************************************************
 * Triangle Class
 * 	 This class represents an Triangle object and is inherited from Shape class.
 * 	 It manages no attributes.
 *******************************************************************************/
class Triangle:public Shape<TriangleNums>
{
public:
	double calcPerimeter(TriangleNums nums);
	double calcArea(TriangleNums nums);
};


/*******************************************************************************
 * calcPerimeter(TriangleNums sides);
 * 	 Accessor; Calculates perimeter of triangle
 * 	 Parameters: sides (TriangleNums) // IN - triangle side length
 * 	 Return: none
 *******************************************************************************/
double Triangle::calcPerimeter(TriangleNums nums) // IN - triangle side length
{
	// Declare variables
	double perim; // PROC/OUT - perimeter of triangle

	// Calculates perimeter
	perim = nums.side1 + nums.side2 + nums.side3;

	return perim;
}

/*******************************************************************************
 * calcArea(TriangleNums sides);
 * 	 Accessor; Calculates area of triangle
 * 	 Parameters: sides (TriangleNums) // IN - triangle side length
 * 	 Return: none
 *******************************************************************************/
double Triangle::calcArea(TriangleNums nums) // IN - triangle side length
{
	// Declare variables
	double area;  // PROC/OUT - area of triangle
	double s;     // PROC     - subperimeter

	// Calculate sub perimeter
	s = (calcPerimeter(nums))/2;

	// Calculate area
	area = sqrt(s*(s - nums.side1)*(s - nums.side2)*(s - nums.side3));

	return area;
}
