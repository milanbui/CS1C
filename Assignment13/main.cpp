/*******************************************************************************
 * AUTHOR		 : Milan Bui
 * STUDENT ID 	 : #
 * ASSIGNMENT #13: Miscellaneous Topics
 * CLASS		 : CS 1C
 * SECTION		 : MW: 5:00p - 7:20p
 * DUE DATE		 : 22 April 2019
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <math.h>
#include <errno.h>
#include <string.h> // strerror
#include "printHeader.h"
using namespace std;
/*******************************************************************************
 * TIME FUNCTIONS, BUILT-IN MATH FUNCTIONS, AND POINTERS TO FUNCTIONS
 * _____________________________________________________________________________
 *
 *  This program will use the time functions to: print out today's date, print
 *  out the date 108 days from today, and print out the number of days between
 *  July 25th and December 24th (July 26th and December 23 inclusive. Use the
 *  built-in math routines to: print the error message when calculating the
 *  square root of -2, print the error message when dividing by 0, print the
 *  error message when calculating the natural log of -2, and print the result
 *  of 1*10^19 + 4 - 1*10^19. Use pointers to functions that: calculate the
 *  cube of a double and calculate the cube root of a double.
 * _____________________________________________________________________________
 * INPUT:
 *	    days        - number of days from today
 *	    input       - number to use in calculation
 *
 * OUTPUT:
 *	    currentDate - the current date (today's date)
 *	    tptr        - the date
 *	    difference  - difference in days between two dates
 *	    num         - result of calculation
 *	    input       - number to use in calculation
 *
 *
 ******************************************************************************/

/*******************************************************************************
 * FUNCTION cube
 * This function returns the cube of a number
 *      returns the cube of the number
 ******************************************************************************/
double cube(const double NUM); // IN - the number to be cubed

/*******************************************************************************
 * FUNCTION cubeRoot
 * This function returns the cube root of a number
 *      returns the cube root of the number
 ******************************************************************************/
double cubeRoot(const double NUM); // IN - the number to be cube rooted

int main()
{
	// Declaring variables
	time_t time1;        // PROC/OUT - current time
	time_t time2;        // PROC/OUT - current time plus num number of days
	struct tm *tptr;     // PROC/OUT - pointer pointing to struct with date
	char* currentDate;   // PROC/OUT - current date
	double difference;   // PROC/OUT - difference in days between two dates
	double num;          // PROC/OUT - result of calculation
	double input;        // IN/OUT   - number to use in calculation
	double(*pf)(double); // IN       - pointer to a function that returns a
	                     //            double with a double as an argument
	struct tm start = {0,0,0,25,6,119};  // IN       - start date
	struct tm end   = {0,0,0,24,11,119}; // IN       - end date
	time_t from     = mktime(&start);    // PROC/OUT - start date
	time_t to       = mktime(&end);      // PROC/OUT - end date
	int days        = 108;               // IN       - number of days from today

	// OUTPUT -- displays class header and program description
	cout << printHeader("Miscellaneous Topics", 13);
	cout << "This program will:" << endl;
	cout << "1. Use the time functions to: print out today's date, print out the"
			"\n   date 108 days from today, and print out the number of days"
			"\n   between July 25th and December 24th (July 26th and December 23"
			"\n   inclusive." << endl;
	cout << "2. Use the built-in math routines to: print the error message when"
			"\n   calculating the square root of -2, print the error message when"
			"\n   dividing by 0, print the error message when calculating the"
			"\n   natural log of -2, and print the result of 1*10^19 + 4 - 1*10^19."
			<< endl;
	cout << "3. Use pointers to functions that: calculate the cube of a double"
			"\n   and calculate the cube root of a double." << endl << endl;

	// OUTPUT -- displays section header
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "PART 1 - USING TIME FUNCTIONS" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');

	if((time1 = time((time_t*)0)) != ((time_t) - 1))
	{
		// PROC/OUT -- finds and displays current date
		currentDate = ctime(&time1);
		cout << "Today's Date: " << currentDate << endl;

		// PROC -- adds 108 days (in seconds) to current date
		time2 = time1+(days*24*60*60);

		// PROC -- points the pointer to the date 108 days from today
		tptr = localtime(&time2);

		// OUTPUT -- displays the date 108 days from today
		cout << "The date 108 days from today is: " << "MONTH "
			 << (tptr->tm_mon+1) << " DAY " << (tptr->tm_mday) << " YEAR "
			 << (tptr->tm_year+1900) << endl << endl;

		// PROCESSING -- finds the number of days between from and to
		difference = difftime(to, from)/(60*60*24);

		// OUTPUT -- displays the dates and the number of days between them
		cout << "The number of days between:\n";
		cout << ctime(&from);
		cout << ctime(&to);
		cout << "-> " << difference << " DAYS" << endl << endl;

	}

	// OUTPUT -- displays the header for section 2
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "PART 2 - USING BUILT-IN MATH FUNCTIONS" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');

	// PROC/OUT -- calculates and displays the results and error message of
	//             the square root of -2
	errno = 0;
	input = -2;
	num = sqrt(input);
	cout << "sqrt error number is " << strerror(errno) << endl;
	cout << "sqrt of " << input << " is " << num << endl << endl;

	// PROC/OUT -- calculates and displays the results and error message of
	//             the division by 0
	errno = 0;
	input = 0;
	num   = 1/input;
	cout << "Divide by 0 error number is " << strerror(errno) << endl;
	cout << "Division of " << 1 << " with " << input << " is " << num << endl << endl;

	// PROC/OUT -- calculates and displays the results and error message of
	//             the natural log of -2
	errno = 0;
	input = -2;
	num = log(input);
	cout << "log error number is " << strerror(errno) << endl;
	cout << "log of " << input << " is " << num << endl << endl;

	// PROC/OUT -- calculates and displays the results and error message of
	//             the calculation and if the answer is incorrect, it corrects
	//             the statement to result in the correct answer
	errno = 0;
	num = 1*10^19 + 4 - 1*10^19;
	cout << "Calc error number is " << strerror(errno) << endl;
	cout << "1*10^19 + 4 - 1*10^19 = " << num << endl << endl;

	if(num != 4)
	{
		errno = 0;
		num = (1*10^19) + 4 - (1*10^19);
		cout << "*CORRECTION*" << endl;
		cout << "Calc error number is " << strerror(errno) << endl;
		cout << "(1*10^19) + 4 - (1*10^19) = " << num << endl << endl;
	}

	// OUTPUT -- displays the header for section 3
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "PART 3 - POINTERS TO FUNCTIONS" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');

	// PROC/OUT -- points pf to the cube function and displays the results of the
	//             cube of 3
	pf = cube;
	cout << "Cube of 3 is " << (*pf)(3) << endl << endl;

	// PROC/OUT -- points pf to the cubeRoot function and displays the results
	//             of the cube root of 27
	pf = cubeRoot;
	cout << "Cube root of 27 is " << (*pf)(27) << endl << endl;

	return 0;
}

/*******************************************************************************
 * FUNCTION cube
 * _____________________________________________________________________________
 *
 * This function returns the cube of a number
 * _____________________________________________________________________________
 * PRE-CONDITIONS:
 *     NUM - the number to be cubed
 * POST-CONDITIONS:
 *      returns the cube of the number
 ******************************************************************************/
double cube(const double NUM) // IN - the number to be cubed
{
	return(pow(NUM, 3));
}

/*******************************************************************************
 * FUNCTION cubeRoot
 * _____________________________________________________________________________
 *
 * This function returns the cube root of a number
 * _____________________________________________________________________________
 * PRE-CONDITIONS:
 *     NUM - the number to be cube rooted
 * POST-CONDITIONS:
 *      returns the cube root of the number
 ******************************************************************************/
double cubeRoot(const double NUM) // IN - the number to be cube rooted
{
	return (cbrt(NUM));
}

