/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #6: Abstract Class and Command Line Parameter
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 4 March 2019
 ******************************************************************************/
#ifndef SHAPECLASS_H_
#define SHAPECLASS_H_

/*******************************************************************************
 * Square Class
 * 	 This class represents an Square object and is inherited from Shape class.
 * 	 It manages no attributes.
 *******************************************************************************/
template <typename T>
class Shape
{
public:
	// Destructor
	virtual ~Shape() {}

	// Calculates perimeter of a shape
	virtual double calcPerimeter(T nums) = 0;

	// Calculates area of a shape
	virtual double calcArea(T nums) = 0;
};

#endif /* SHAPECLASS_H_ */
