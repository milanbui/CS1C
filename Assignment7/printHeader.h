/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #7: Friend Functions and Operator
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 11 March 2019
 ******************************************************************************/
#ifndef PRINTHEADER_H_
#define PRINTHEADER_H_


// PREPROCESSOR DIRECTIVES
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

//GLOABAL CONSTANTS

//TYPE DEFINITIONS AND ENUMERATED TYPES

// PROTOTYPES
/*******************************************************************************
 * printHeader
 *  This function returns a header including the lab name, lab number,
 *  the programmer's name, the class name, and the section time
 *  as a string
 *      returns header as string
 ******************************************************************************/
string printHeader(string labName,          //OUT - name of lab
		           int labNumber);          //OUT - the lab number



#endif /* PRINTHEADER_H_ */
