/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #8: Exceptions
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 March 2019
 ******************************************************************************/
#include <iostream>
#include <cassert>
#include "employeeClass.h"
#include "printHeader.h"
using namespace std;
/*******************************************************************************
 * MANIPULATING EMPLOYEES USING FRIEND FUNCTIONS AND OVERLOADED OPERATORS
 * _____________________________________________________________________________
 *
 *  This program will Create an employee object. It will test the assert macro
 *  (both pass and fail). It will also throw exceptions if the age is less than
 *  16 and if the salary is less than 0. It allows one to fix the error from a
 *  throw and displays the employee after changes.
 * _____________________________________________________________________________
 * INPUT:
 *	    employee  - Employee object
 *	    employee2 - Employee object to test throws
 *
 * OUTPUT:
 *	    employee - Employee object
 *	    employee2 - Employee object to test throws
 *
 ******************************************************************************/
int main()
{
	// DECLARING VARIABLES
	Employee   employee;  // IN/OUT - Employee object to test throws

	// IN/OUT - Employee object to test assert macro
	Employee   employee2("Joe Calculus", 64879, "949-555-1234", 10, 'M',
			             "Math Wiz", 110000, 31, 8, 2017);


	// OUTPUT -- outputs class header
	cout << printHeader("Exceptions", 8);

	// OUTPUT -- outputs description of program
	cout << "This program will:" << endl;
	cout << "1. Create an employee object" << endl;
	cout << "2. Test the assert macro (both pass and fail)" << endl;
	cout << "3. Throw exceptions if the age is less than 16 and if the salary"
			"\n   is less than 0" << endl;
	cout << "4. Allows one to fix the error from a throw" << endl;
	cout << "5. Displays the employee after changes" << endl << endl << endl;


	// INITIALIZING VARIABLES
	employee.changeName("Oprah Winfrey");
	employee.changeId(98765);
	employee.changeNum("703-703-1234");
	employee.changeAge(37);
	employee.changeGen('F');
	employee.changeJob("Talk Show Host");
	employee.changeSal(900000);
	employee.changeDate(25, 12, 2014);

	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "PART 1 - ASSERT MACRO (FAIL)" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl << endl;

	// OUTPUT -- outputs employees
	employee2.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	employee2.printEmployee();
	cout << endl;

	cout << endl << endl;


	// ASSERT
	assert(employee2.getAge() > 16);

	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "PART 2 - THROWING EXCEPTION" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl << endl;

	// OUTPUT -- outputs employees
	employee.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	employee.printEmployee();
	cout << endl;

	cout << endl << endl;

	// TRY/CATCH BLOCK FOR AGE IN CHANGE AGE METHOD
	employee.changeAge(10);

	// OUTPUT -- outputs employees
	employee.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	employee.printEmployee();
	cout << endl;

	cout << endl << endl;

	// TRY/CATCH BLOCK FOR SALARY IN CHANGE SALARY METHOD
	employee.changeSal(-900000);


	// OUTPUT -- outputs employees
	employee.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	employee.printEmployee();
	cout << endl;

	cout << endl << endl;

	return 0;
}
