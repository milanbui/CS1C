/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #7: Friend Functions and Operator
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 11 March 2019
 ******************************************************************************/
#include<iostream>
#include "testerClass.h"
#include "printHeader.h"
using namespace std;
/*******************************************************************************
 * MANIPULATING EMPLOYEES USING FRIEND FUNCTIONS AND OVERLOADED OPERATORS
 * _____________________________________________________________________________
 *
 *  This program will create a SoftwareTester object and two Employee object.
 *  Compare the ages of the SoftwareTester and one of the Employees using a
 *  friend function and using an overloaded equality operator. (Tests equal and
 *  not equal scenarios). Add an integer to an employees age using a member
 *  function and an overloaded addition operator. Reads in and prints and
 *  employee objects using overloaded << and >> operators. Displays the employees
 *  after changes
 * _____________________________________________________________________________
 * INPUT:
 *	    tester    - SoftwareTester object to compare age with employee
 *	    employee1 - Employee object to compare age to tester and to add integer
 *	                to age
 *	    employee2 - Employee object to test overloaded << and >> operators
 *
 * OUTPUT:
 *	    years     - number of years being added to the employee's age
 *	    tester    - SoftwareTester object to compare age with employee
 *	    employee1 - Employee object to compare age to tester and to add integer
 *	                to age
 *	    employee2 - Employee object to test overloaded << and >> operators
 *
 ******************************************************************************/
int main()
{
	// DECLARING VARIABLES
	// IN/OUT - SoftwareTester object to compare age with employee
	SoftwareTester tester("Joe Calculus", 64879, "949-555-1234", 42, 'M',
			              "Math Wiz", 110000, 31, 8, 2017, "1234 Main Avenue",
						  "Laguna Niguel", "CA", 92677);

	// IN/OUT - Employee object to compare age to tester and to add integer to age
	Employee   employee1("Oprah Winfrey", 98765, "703-703-1234", 37, 'F',
						 "Talk Show Host", 900000, 25, 12, 2014);

	Employee   employee2; // IN/OUT - Employee object to test overloaded << and
	                      //          >> operators
	int years;            // OUT - number of years being added to employee's age


	// OUTPUT -- outputs class header
	cout << printHeader("Friend Functions and Operator Overloading", 7);

	// OUTPUT -- outputs description of program
	cout << "This program will:" << endl;
	cout << "1. Create a SoftwareTester object and two Employee object" << endl;
	cout << "2. Compare the ages of the SoftwareTester and one of the Employees"
			"\n   using a friend function and using an overloaded equality"
			"\n   operator. (Tests equal and not equal scenarios)" << endl;
	cout << "3. Add an integer to an employees age using a member function and"
			"\n   an overloaded addition operator." << endl;
	cout << "4. Reads in and prints and employee objects using overloaded << and"
			"\n   >> operators" << endl;
	cout << "5. Displays the employees after changes" << endl << endl << endl;

	// OUTPUT -- outputs software testers and employees
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << "DISPLAYING ALL EMPLOYEES" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << endl << endl;

	tester.printTester();
	cout << endl << endl;

	employee2.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	employee1.printEmployee();
	cout << endl;

	employee2.printEmployee();
	cout << endl << endl;
	cout << endl << endl;


	/***************************************************************************
	 *
	 * PART 1 - COMPARING AGE USING FRIEND FUNCTION
	 *
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');
	cout << "PART 1 - COMPARING AGE USING FRIEND FUNCTION" << endl << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');


	// PROCESSING -- checks if ages of the tester and employee are the same
	if(isEqual(tester, employee1))
	{
		cout << "The ages of the tester " << tester.getName()
			 << " and the employee " << employee1.getName() << " are equal";
		cout << endl << endl;

	}
	else
	{
		cout << "The ages of the tester " << tester.getName()
			 << " and the employee " << employee1.getName() << " are not equal";
		cout << endl << endl;
	}

	// PROCESSING -- changes the age of the employee to the age of the tester
	cout << "Changing age of " << employee1.getName() << " to "
		 << tester.getAge() << "..." << endl << endl;
	employee1.changeAge(tester.getAge());


	// OUTPUT -- outputs the testers and the employees
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << "DISPLAYING ALL EMPLOYEES" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << endl << endl;

	tester.printTester();
	cout << endl << endl;

	employee2.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	employee1.printEmployee();
	cout << endl;

	employee2.printEmployee();
	cout << endl << endl;
	cout << endl << endl;


	// PROCESSING -- checks if ages of the tester and employee are the same
	if(isEqual(tester, employee1))
	{
		cout << "The ages of the tester " << tester.Employee::getName()
			 << " and the employee " << employee1.getName() << " are equal";
		cout << endl << endl;
	}
	else
	{
		cout << "The ages of the tester " << tester.Employee::getName()
			 << " and the employee " << employee1.getName() << " are not equal";
		cout << endl << endl;
	}


	cout << endl << endl;
	cout << endl << endl;


	/***************************************************************************
	 *
	 * PART 2 - COMPARING AGE USING OVERLOADED EQUALITY OPERATOR
	 *
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');
	cout << "PART 2 - COMPARING AGE USING OVERLOADED EQUALITY OPERATOR" << endl << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');


	// PROCESSING -- checks if ages of the tester and employee are the same
	if(tester == employee1)
	{
		cout << "The ages of the tester " << tester.Employee::getName()
			 << " and the employee " << employee1.getName() << " are equal"
			 << endl << endl;
	}
	else
	{
		cout << "The ages of the tester " << tester.Employee::getName()
			 << " and the employee " << employee1.getName() << " are not equal"
			 << endl << endl;
	}

	// PROCESSING -- changes age of employee
	cout << "Changing age of " << employee1.getName() << " to 21..." << endl << endl;
	employee1.changeAge(21);


	// OUTPUT -- displays tester and employees
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << "DISPLAYING ALL EMPLOYEES" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << endl << endl;

	tester.printTester();
	cout << endl << endl;

	employee2.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	employee1.printEmployee();
	cout << endl;

	employee2.printEmployee();
	cout << endl << endl;
	cout << endl << endl;

	// PROCESSING -- checks if ages of the tester and employee are the same
	if(tester == employee1)
	{
		cout << "The ages of the tester " << tester.Employee::getName()
			 << " and the employee " << employee1.getName() << " are equal"
			 << endl << endl;
	}
	else
	{
		cout << "The ages of the tester " << tester.Employee::getName()
			 << " and the employee " << employee1.getName() << " are not equal"
			 << endl << endl;
	}
	cout << endl << endl;
	cout << endl << endl;



	/***************************************************************************
	 *
	 * PART 3 - ADD TO AGE USING MEMBER FUNCTION
	 *
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');
	cout << "PART 3 - ADD TO AGE USING MEMBER FUNCTION" << endl << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');

	// PROCESSING -- adds 5 years to the employee's age
	years = 5;
	employee1.addAge(years);
	cout << "Adding " << years << " years to employee " << employee1.getName()
		 << "'s age..." << endl;

	// OUTPUT -- displays employees
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << "DISPLAYING ALL EMPLOYEES" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << endl << endl;

	tester.printTester();
	cout << endl << endl;

	employee2.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	employee1.printEmployee();
	cout << endl;

	employee2.printEmployee();
	cout << endl << endl;
	cout << endl << endl;
	cout << endl << endl;



	/***************************************************************************
	 *
	 * PART 4 - ADD TO AGE USING OVERLOADED + OPERATOR
	 *
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');
	cout << "PART 4 - ADD TO AGE USING OVERLOADED + OPERATOR" << endl << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');

	// PROCESSING -- adds 5 years to the employee's age
	years = 5;
	employee1 = (employee1 + years);
	cout << "Adding " << years << " years to employee " << employee1.getName()
		 << "'s age..." << endl;

	// OUTPUT -- displays employees
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << "DISPLAYING ALL EMPLOYEES" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << endl << endl;

	tester.printTester();
	cout << endl << endl;

	employee2.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	employee1.printEmployee();
	cout << endl;

	employee2.printEmployee();
	cout << endl << endl;
	cout << endl << endl;
	cout << endl << endl;


	/***************************************************************************
	 *
	 * PART 5 - OVERLOADING << AND >> OPERATORS FOR EMPLOYEE OBJECTS
	 *
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');
	cout << "PART 5 - OVERLOADING << AND >> OPERATORS FOR EMPLOYEE OBJECTS"  << endl << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl << endl;
	cout << setfill(' ');


	// INPUT -- reads in employee objects using overloaded >> operator
	cin >> employee2;
	cout << endl << endl;
	cout << endl << endl;

	// OUTPUT -- outputs employees using overloaded << operator
	tester.printTester();
	cout << endl << endl;
	cout << endl << endl;

	employee2.displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

    cout << employee1;
	cout << endl;
	cout << employee2;
	cout << endl << endl;


	return 0;
}
