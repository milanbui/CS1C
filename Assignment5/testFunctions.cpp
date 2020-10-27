/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #5: Enhanced Employee
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 February 2019
 ******************************************************************************/
#include <iostream>
#include "softwareTesterClass.h"
using namespace std;

/*******************************************************************************
 * FUNCTION passByCopy
 * _____________________________________________________________________________
 *
 * This function passes a softwareTester object by copy and outputs a message
 * indicating so
 * _____________________________________________________________________________
 * PRE-CONDITIONS:
 *     tester (softwareTester object) must exist
 *
 * POST-CONDITIONS:
 *     none
 *
 ******************************************************************************/
void passByCopy(SoftwareTester tester)
{
	cout << "object passed by copy" << endl << endl;
}

/*******************************************************************************
 * FUNCTION passByReference
 * _____________________________________________________________________________
 *
 * This function passes a softwareTester object by reference and outputs a message
 * indicating so
 * _____________________________________________________________________________
 * PRE-CONDITIONS:
 *     tester (softwareTester object) must exist
 *
 * POST-CONDITIONS:
 *     none
 *
 ******************************************************************************/
void passByReference(SoftwareTester &tester)
{

	cout << "object passed by reference" << endl << endl;
}

/*******************************************************************************
 * FUNCTION returnByCopy
 * _____________________________________________________________________________
 *
 * This function returns a softwareTester object by copy
 * _____________________________________________________________________________
 * PRE-CONDITIONS:
 *     tester (softwareTester object) must exist
 *
 * POST-CONDITIONS:
 *     returns tester
 *
 ******************************************************************************/
SoftwareTester returnByCopy(SoftwareTester &tester)
{

	cout << "object returned by copy" << endl << endl;

	return tester;
}

/*******************************************************************************
 * FUNCTION returnByReference
 * _____________________________________________________________________________
 *
 * This function returns a softwareTester object by reference
 * _____________________________________________________________________________
 * PRE-CONDITIONS:
 *     tester (softwareTester object) must exist
 *
 * POST-CONDITIONS:
 *     returns tester
 *
 ******************************************************************************/
SoftwareTester& returnByReference(SoftwareTester &tester)
{

	cout << "object returned by reference" << endl << endl;

	return tester;
}


