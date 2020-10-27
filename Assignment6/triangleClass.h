/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #6: Abstract Class and Command Line Parameter
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 4 March 2019
 ******************************************************************************/
#ifndef TRIANGLECLASS_H_
#define TRIANGLECLASS_H_


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

/*******************************************************************************
 * calcArea(TriangleNums sides);
 * 	 Accessor; Calculates area of triangle
 * 	 Parameters: sides (TriangleNums) // IN - triangle side length
 * 	 Return: none
 *******************************************************************************/



#endif /* TRIANGLECLASS_H_ */
