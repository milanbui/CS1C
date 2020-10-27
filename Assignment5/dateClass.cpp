/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #5: Enhanced Employee
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 February 2019
 ******************************************************************************/
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
Date::Date()
{
	day   = 0;
	month = 0;
	year  = 0;
}

/*******************************************************************************
 * ~Date();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
Date::~Date()
{

}

/*******************************************************************************
 * setDate(int dateDay, int dateMonth, int dateYear);
 * 	 Mutator; Initializes the day, month, and year (sets date)
 * 	 Parameters: dateDay  (int) // IN - day of the month
 * 	 			 dateMonth(int) // IN - month
 * 	 			 dateYear (int) // IN - year
 * 	 Return: none
 *******************************************************************************/
void Date::setDate(int dateDay,   // IN - day of the month
				   int dateMonth, // IN - month
				   int dateYear)  // IN - year
{
	day   = dateDay;
	month = dateMonth;
	year  = dateYear;
}

/*******************************************************************************
 * getDate()const;
 * 	 Accessor; Returns the day, month, and year (date) as a string
 * 	 Parameters: none
 * 	 Return: output.str() (string)
 *******************************************************************************/
string Date::getDate()const
{
	// Declare variables
	ostringstream output; // OUT - output stream

	// OUTPUT -- outputs day
	// Adds a zero before the day if the day is a single digit
	if(day < 10)
	{
		output << "0" << day;
	}
	else
	{
		output << day;
	}
	output << ".";

	// OUTPUT -- outputs month
	// Adds a zero before the day if the day is a single digit
	if(month < 10)
	{
		output << "0" << month;
	}
	else
	{
		output << month;
	}

	// OUTPUT -- outputs year
	output << "." << year;


	// OUTPUT -- returns the output as a string
	return output.str();
}
