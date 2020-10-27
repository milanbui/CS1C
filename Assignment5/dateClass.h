/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #5: Enhanced Employee
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 February 2019
 ******************************************************************************/
#ifndef DATECLASS_H_
#define DATECLASS_H_

// PREPROCESSOR DIRECTIVES
#include <iostream>
#include <sstream>
using namespace std;

// GLOBAL CONSTANTS


// TYPE DEFINITIONS AND ENUMERATED TYPES
/*******************************************************************************
 * Date Class
 * 	 This class represents a Date object. It manages three attributes:
 * 	 day, month, and year.
 *******************************************************************************/
class Date
{
	public:
		/******************************
		 ** CONSTRUCTOR & DESTRUCTOR **
		 ******************************/
		Date();
		~Date();

		/***************
		 ** MUTATORS **
		 ***************/
		void setDate(int dateDay, int dateMonth, int dateYear);

		/***************
		 ** ACCESSORS **
		 ***************/
		string getDate()const;

	private:
		int day;   // Day of the month
		int month; // Month
		int year;  // Year
};

/*******************************************************************************
 * Date();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * ~Date();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * setDate(int dateDay, int dateMonth, int dateYear);
 * 	 Mutator; Initializes the day, month, and year (sets date)
 * 	 Parameters: dateDay  (int)- day of the month
 * 	 			 dateMonth(int)- month
 * 	 			 dateYear (int)- year
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * getDate()const;
 * 	 Accessor; Returns the day, month, and year (date) as a string
 * 	 Parameters: none
 * 	 Return: output.str() (string) - the date
 *******************************************************************************/

// PROTOTYPES

#endif /* DATECLASS_H_ */
