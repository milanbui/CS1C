/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #6: Abstract Class and Command Line Parameter
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 4 March 2019
 ******************************************************************************/
#ifndef SQUARECLASS_H_
#define SQUARECLASS_H_

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

/*******************************************************************************
 * calcArea(double side);
 * 	 Accessor; Calculates area of square
 * 	 Parameters: side (double) // IN - square side length
 * 	 Return: none
 *******************************************************************************/

#endif /* SQUARECLASS_H_ */
