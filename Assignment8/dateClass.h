/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #8: Exceptions
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 March 2019
 ******************************************************************************/
#ifndef DATECLASS_H_
#define DATECLASS_H_

#include <iostream>
#include <sstream>
using namespace std;

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
		friend istream& operator>>(istream& input, Date& date);

		/***************
		 ** ACCESSORS **
		 ***************/
		string getDate()const;
		int getDay()const;
		int getMonth()const;
		int getYear()const;


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
 * 	 Parameters: dateDay  (int) // IN - day of the month
 * 	 			 dateMonth(int) // IN - month
 * 	 			 dateYear (int) // IN - year
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * getDate()const;
 * 	 Accessor; Returns the day, month, and year (date) as a string
 * 	 Parameters: none
 * 	 Return: output.str() (string)
 *******************************************************************************/

/*******************************************************************************
 * getDay()const;
 * 	 Accessor; Returns the day
 * 	 Parameters: none
 * 	 Return: day
 *******************************************************************************/

/*******************************************************************************
 * getMonth()const;
 * 	 Accessor; Returns the month
 * 	 Parameters: none
 * 	 Return: month
 *******************************************************************************/

/*******************************************************************************
 * getYear()const;
 * 	 Accessor; Returns the year
 * 	 Parameters: none
 * 	 Return:  year
 *******************************************************************************/

/*******************************************************************************
 * getDate()const;
 * 	 Overloads the >> operator to read in a date object
 * 	 Parameters: input (istream) // IN/OUT - input stream
 * 	             date  (Date)    // IN - date object
 * 	 Return: none
 *******************************************************************************/


#endif /* DATECLASS_H_ */
