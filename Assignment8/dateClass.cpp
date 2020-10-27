/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #8: Exceptions
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 March 2019
 ******************************************************************************/
#include <iostream>
#include <sstream>
#include <iomanip>
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

/*******************************************************************************
 * getDay()const;
 * 	 Accessor; Returns the day
 * 	 Parameters: none
 * 	 Return: day
 *******************************************************************************/
int Date::getDay()const
{
	return day;
}

/*******************************************************************************
 * getMonth()const;
 * 	 Accessor; Returns the month
 * 	 Parameters: none
 * 	 Return: month
 *******************************************************************************/
int Date::getMonth()const
{
	return month;
}

/*******************************************************************************
 * getYear()const;
 * 	 Accessor; Returns the year
 * 	 Parameters: none
 * 	 Return:  year
 *******************************************************************************/
int Date::getYear()const
{
	return year;
}

/*******************************************************************************
 * getDate()const;
 * 	 Overloads the >> operator to read in a date object
 * 	 Parameters: input (istream) // IN/OUT - input stream
 * 	             date  (Date)    // IN - date object
 * 	 Return: none
 *******************************************************************************/
istream& operator>>(istream& input, // IN/OUT - input stream
		            Date& date)     // IN - date object
{
	// INPUT -- prompts for input for date
	cout << left << setw(20) << "Enter Hire Day:";
	input >> date.day;
	input.ignore(1000, '\n');

	cout << left << setw(20) << "Enter Hire Month:";
	input >> date.month;
	input.ignore(1000, '\n');

	cout << left << setw(20) << "Enter Hire Year:";
	input >> date.year;
	input.ignore(1000, '\n');

	return input;
}

