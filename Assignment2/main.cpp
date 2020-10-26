/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #2: Employee Inheritance
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 30 January 2019
 ******************************************************************************/
#include "programmerClass.h"
#include "softwareArchClass.h"
#include "printHeader.h"
/*******************************************************************************
 * MANIPULATING EMPLOYEES USING CLASSES AND INHERITANCE
 * _____________________________________________________________________________
 *
 * This program will create objects of type Employee, Programmer, and
 * SoftwareArch. It will use the default constructor for half and the non-default
 * constructor for the other half. It will then change the values of the objects
 * created using the default constructor. It will output the information before
 * changing those values and after.
 * _____________________________________________________________________________
 * INPUT:
 *	    employee1[2] - array of two employees created using default constructor
 *	    programmer1  - programmer object created using default constructor
 *	    architect1   - architect object created using default constructor
 *	    employee2    - employee created using non-default constructor
 *	    employee3    - another employee created using non-default constructor
 *	    programmer2  - programmer created using non-default constructor
 *	    architect2   - architect created using non-default constructor
 *
 * OUTPUT:
 *	    employee1[2] - array of two employees created using default constructor
 *	    programmer1  - programmer object created using default constructor
 *	    architect1   - architect object created using default constructor
 *	    employee2    - employee created using non-default constructor
 *	    employee3    - another employee created using non-default constructor
 *	    programmer2  - programmer created using non-default constructor
 *	    architect2   - architect created using non-default constructor
 *
 ******************************************************************************/
int main()
{
	// Declaring variables
	Employee   employee1[2];  // IN/OUT - array of two employees created using
	                          //          default constructor
	Programmer programmer1;   // IN/OUT - programmer object created using
	                          //          default constructor
	SoftwareArch architect1;  // IN/OUT - architect object created using
	                          //          default constructor

	// IN/OUT - employee created using non-default constructor
	Employee   employee2("Oprah Winfrey", 98765, "703-703-1234", 37, 'M',
						 "Talk Show Host", 900000, 12, 25, 2014);

	// IN/OUT - another employee created using non-default constructor
	Employee   employee3("Jay Leno", 77777, "203-555-6789", 58, 'F', "Comedian",
						 500500, 3, 1, 2005);

	// IN/OUT - programmer created using non-default constructor
	Programmer programmer2("Mary Coder", 65432, "310-555-5555", 28, 'F', "Programmer",
						   770123, 2, 8, 2010, 6543222, "Mary Leader", 7, true, true);

	// IN/OUT - architect created using non-default constructor
	SoftwareArch architect2("Sally Designer", 87878, "310-555-8888", 38, 'F',
							"Architect", 870123, 2, 8, 2003, 6543422, "Big Boss", 8, 11);



	// OUTPUT -- outputs class header
	cout << printHeader("Employee Inheritance", 2);

	// OUTPUT -- outputs description of program
	cout << "This program will:" << endl;
	cout << "1. Create an array of an object of type Employee using the default constructor"
			"\n   and change the values to contain the information of 2 employees" << endl;
	cout << "2. Create a programmer object using the default constructor and change the "
			"\n   values to contain the information of a programmer" << endl;
	cout << "3. Create a architect object using the default constructor and change the "
			"\n   values to contain the information of an architect" << endl;
	cout << "4. Create 2 employee using a non-default constructor to contain the information "
			"\n   of 2 employees" << endl;
	cout << "5. Create a programmer object using a non-default constructor to contain the "
			"\n   information of a programmer" << endl;
	cout << "6. Create a architect object using a non-default constructor to contain the "
			"\n   information of an architect" << endl;
	cout << "7. Output the employees, programmers, and architects before and after the changes." << endl << endl << endl;


	cout << "BEFORE" << endl;

	// OUTPUT -- outputs header for employees
	employee1[0].displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// OUTPUT -- outputs employees' information
	employee1[0].printEmployee();
	cout << endl;

	employee1[1].printEmployee();
	cout << endl;

	employee2.printEmployee();
	cout << endl;

	employee3.printEmployee();
	cout << endl << endl << endl;


	// OUTPUT -- outputs header for programmers
	programmer1.displayHeader();
	cout << endl;
	cout << setw(125) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// OUTPUT -- outputs programmers' information
	programmer1.printProgrammer();
	cout << endl;

	programmer2.printProgrammer();
	cout << endl << endl << endl;


	// OUTPUT -- outputs header for architects
	architect1.displayHeader();
	cout << endl;
	cout << setw(124) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// OUTPUT -- outputs architects' information
	architect1.printArchitect();
	cout << endl;

	architect2.printArchitect();
	cout << endl << endl << endl << endl;

	// PROCESSING -- changing the values of one employee
	employee1[0].changeName("Tom Brady");
	employee1[0].changeId(12345);
	employee1[0].changeNum("949-555-1234");
	employee1[0].changeAge(40);
	employee1[0].changeGen('M');
	employee1[0].changeJob("Quarterback");
	employee1[0].changeSal(100000);
	employee1[0].changeDate(8, 31, 2014);

	// PROCESSING -- changing the values of another employee
	employee1[1].changeName("Blake Griffin");
	employee1[1].changeId(12346);
	employee1[1].changeNum("310-555-5555");
	employee1[1].changeAge(51);
	employee1[1].changeGen('M');
	employee1[1].changeJob("Basketball Player");
	employee1[1].changeSal(70123);
	employee1[1].changeDate(5, 8, 2015);

	// PROCESSING -- changing the values of a programmer
	programmer1.changeName("Sam Software");
	programmer1.changeId(54321);
	programmer1.changeNum("819-123-4567");
	programmer1.changeAge(21);
	programmer1.changeGen('M');
	programmer1.changeJob("Programmer");
	programmer1.changeSal(223000);
	programmer1.changeDate(12, 24, 2011);
	programmer1.changeProDepartNum(5432122);
	programmer1.changeProSuperName("Joe Boss");
	programmer1.changeProSalInc(4);
	programmer1.changeCPlusPlus(true);
	programmer1.changeJava(false);

	// PROCESSING -- changing the values of a programmer
	architect1.changeName("Alex Arch");
	architect1.changeId(88888);
	architect1.changeNum("819-123-4444");
	architect1.changeAge(31);
	architect1.changeGen('M');
	architect1.changeJob("Architect");
	architect1.changeSal(323000);
	architect1.changeDate(12, 24, 2009);
	architect1.changeArchDepartNum(5434222);
	architect1.changeArchSuperName("Big Boss");
	architect1.changeArchSalInc(5);
	architect1.changeYearsOfExp(4);

	cout << "AFTER" << endl;

	// OUTPUT -- outputs header for employees
	employee1[0].displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// OUTPUT -- outputs employees' information
	employee1[0].printEmployee();
	cout << endl;

	employee1[1].printEmployee();
	cout << endl;

	employee2.printEmployee();
	cout << endl;

	employee3.printEmployee();
	cout << endl << endl << endl;


	// OUTPUT -- outputs header of programmers
	programmer1.displayHeader();
	cout << endl;
	cout << setw(125) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// OUTPUT -- outputs programmers' information
	programmer1.printProgrammer();
	cout << endl;

	programmer2.printProgrammer();
	cout << endl << endl << endl;


	// OUTPUT -- outputs header of architects
	architect1.displayHeader();
	cout << endl;
	cout << setw(124) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// OUTPUT -- outputs architects' information
	architect1.printArchitect();
	cout << endl;

	architect2.printArchitect();
	cout << endl << endl << endl;

	return 0;
}
