/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #6: Abstract Class and Command Line Parameter
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 4 March 2019
 ******************************************************************************/
#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_


#include <iostream>
#include <iomanip>
#include "squareClass.h"
#include "triangleClass.h"
using namespace std;

/*******************************************************************************
 * FUNCTION printPerimeter
 *  This function calls methods to calculate the perimeter of a square and
 *  triangle and prints the results.
 *       -> Displays results
 ******************************************************************************/
void printPerimeter(double squareSides,         // IN - Square side length
		            TriangleNums triangleSides);// IN - triangle side lengths

/*******************************************************************************
 * FUNCTION printArea
 *  This function calls methods to calculate the area of a square and
 *  triangle and prints the results.
 *       -> prints results
 ******************************************************************************/
void printArea(double squareSides,         // IN - Square side length
               TriangleNums triangleSides);// IN - triangle side lengths


#endif /* FUNCTIONS_H_ */
