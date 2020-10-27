/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #5: Enhanced Employee
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 February 2019
 ******************************************************************************/
#ifndef TESTFUNCTIONS_H_
#define TESTFUNCTIONS_H_

// PREPROCESSOR DIRECTIVES
#include <iostream>
#include "softwareTesterClass.h"
using namespace std;

// GLOBAL CONSTANTS

// TYPE DEFINITIONS AND ENUMERATED TYPES

// PROTOTYPES
/*******************************************************************************
 * FUNCTION passByCopy
 *  This function passes a softwareTester object by copy and outputs a message
 *  indicating so
 ******************************************************************************/
void passByCopy(SoftwareTester tester);

/*******************************************************************************
 * FUNCTION passByReference
 *  This function passes a softwareTester object by reference and outputs a
 *  message indicating so
 ******************************************************************************/
void passByReference(SoftwareTester &tester);

/*******************************************************************************
 * FUNCTION returnByCopy
 *  This function returns a softwareTester object by copy
 *    -> returns tester
 *
 ******************************************************************************/
SoftwareTester returnByCopy(SoftwareTester &tester);

/*******************************************************************************
 * FUNCTION returnByReference
 *  This function returns a softwareTester object by reference
 *    -> returns tester
 *
 ******************************************************************************/
SoftwareTester& returnByReference(SoftwareTester &tester);




#endif /* TESTFUNCTIONS_H_ */
