/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #5: Enhanced Employee
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 February 2019
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include "softwareTesterClass.h"
#include "testFunctions.h"
#include "printHeader.h"
using namespace std;

/*******************************************************************************
 * MANIPULATING EMPLOYEES USING CLASSES, INHERITANCE, AND COPY CONSTRUCTORS
 * _____________________________________________________________________________
 *
 * This program will create two SoftwareTester objects using a non-default
 * destructor and create two SoftwareTester objects using the initialization
 * constructor.It will also change the information of tester2 to test the change
 * methods and change the information of tester3 to test the deep copy method.
 * It then calls four functions that pass by copy, pass by reference, return by
 * copy, return by reference to test the copy contructor. The program will also
 * display the current information of each of the testers after the changes.
 * _____________________________________________________________________________
 * INPUT:
 *	    tempTester - softwareTester object used for the deep copy method test
 *	                 created using the non-default constructor
 *	    tester1    - softwareTester object object used for the initialization
 *	                 constructor test created using the non-default constructor
 *	    tester2    - softwareTest object used for the change methods test
 *	                 created using the initialization constructor
 *	    tester3    - softwareTest object used for the deep copy method test
 *	                 created using the initialization constructor
 *
 * OUTPUT:
 *	    tempTester - softwareTester object used for the deep copy method test
 *	                 created using the non-default constructor
 *	    tester1    - softwareTester object object used for the initialization
 *	                 constructor test created using the non-default constructor
 *	    tester2    - softwareTest object used for the change methods test
 *	                 created using the initialization constructor
 *	    tester3    - softwareTest object used for the deep copy method test
 *	                 created using the initialization constructor
 *
 ******************************************************************************/
int main()
{
	// OUTPUT -- displays the class header and the program description
	cout << printHeader("Enhanced Employee", 5);

	cout << "This program will:" << endl;
	cout << "1. Create two SoftwareTester objects using a non-default destructor"
		 << endl;
	cout << "2. Create two SoftwareTester objects using the initialization "
			"\n   constructor " << endl;
	cout << "3. Displays the current information of each of the testers" << endl;
	cout << "4. Change the information of tester2 to test the change methods"
		 << endl;
	cout << "5. Change the information of tester3 to test the deep copy method"
		 << endl;
	cout << "6. Call four functions that pass by copy, pass by reference, return"
			"\n   by copy, return by reference to test the copy contructor"
		 << endl << endl << endl;


	// DECLARING & INITIALIZING TWO SOFTWARETESTER OBJECTS USING THE NON-DEFAULT
	// CONSTRUCTOR
	cout << "CREATING TWO SOFTWARE TESTER OBJECTS USING NON-DEFAULT CONSTRUCTORS"
		 << endl;
	cout << left << setw(67) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	SoftwareTester tempTester("Jo Trig", 10192, "714-703-1234", 29, 'F',
			                  "Math Contact", 200000, 12, 25, 2016,
							  "9876 Elm Street", "San Clemente", "CA", 92672);

	SoftwareTester tester1("Joe Calculus", 64879, "949-555-1234", 42, 'M',
			               "Math Wiz", 110000, 8, 31, 2017, "1234 Main Avenue",
						   "Laguna Niguel", "CA", 92677);


	// DECLARING TWO SOFTWARETESTER OVJECTS USING THE INITIALIZATION CONSTRUCTOR
	cout << "CREATING TWO SOFTWARE TESTER OBJECTS USING THE INITIALZATION "
			"CONSTRUCTOR" << endl ;
	cout << left << setw(72) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	SoftwareTester tester2 = tester1;

	SoftwareTester tester3 = tester2;


	// OUTPUT -- displays the software testers and their information
	cout << endl;
	cout << "CURRENT SOFTWARE TESTERS:" << endl << endl;

	tester1.printTester();
	cout << endl << endl;
	tester2.printTester();
	cout << endl << endl;
	tester3.printTester();
	cout << endl << endl;


	// PROCESSING -- testing all the change methods, changing the information of
	//               tester2
	cout << "TESTING CHANGE FUNCTIONS ON TESTER2" << endl;
	cout << setw(35) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	tester2.changeName("Mary Algebra");
	tester2.changeId(76309);
	tester2.changeNum("213-555-5555");
	tester2.changeAge(22);
	tester2.changeGen('F');
	tester2.changeJob("Math Helper");
	tester2.changeSal(170123);
	tester2.changeDate(5, 8, 2017);
	tester2.changeAddress("3333 Marguerite Pkwy");
	tester2.changeCity("Mission Viejo");
	tester2.changeState("CA");
	tester2.changeZipCode(92646);


	// PROCESSING -- testing the deep copy method, changing the values of tester3
	cout << "TESTING DEEP COPY METHOD ON TESTER3" << endl;
	cout << setw(35) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	tester3.copyFrom(tempTester);


	// OUTPUT -- displays the software testers and their information
	cout << endl;
	cout << "CURRENT SOFTWARE TESTERS:" << endl << endl;

	tester1.printTester();
	cout << endl << endl;
	tester2.printTester();
	cout << endl << endl;
	tester3.printTester();
	cout << endl << endl;


	// PROCESSING -- testing the copy constructor by calling a function that
	//               passes by value
	cout << "PASS BY COPY TEST FUNCTION" << endl;
	cout << setw(26) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	passByCopy(tester1);

	// PROCESSING -- testing the copy constructor by calling a function that
	//               passes by reference
	cout << "PASS BY REFERENCE TEST FUNCTION" << endl;
	cout << setw(31) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	passByReference(tester1);

	// PROCESSING -- testing the copy constructor by calling a function that
	//               returns by value
	cout << "RETURN BY COPY TEST FUNCTION" << endl;
	cout << setw(28) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	returnByCopy(tester1);

	// PROCESSING -- testing the copy constructor by calling a function that
	//               returns by reference
	cout << "RETURN BY REFERENCE TEST FUNCTION" << endl;
	cout << setw(33) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	returnByReference(tester1);


	return 0;
}
