/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #5: Enhanced Employee
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 February 2019
 ******************************************************************************/
#ifndef SOFTWARETESTERCLASS_H_
#define SOFTWARETESTERCLASS_H_

// PREPROCESSOR DIRECTIVES
#include <iostream>
#include <string.h>
#include "employeeClass.h"
using namespace std;

// GLOBAL CONSTANTS


// TYPE DEFINITIONS AND ENUMERATED TYPES
/*******************************************************************************
 * SoftwareTester Class
 * 	 This class is derived from an Employee class and represents a
 * 	 SoftwareTester object. It manages four attributes: address, city, state,
 * 	 and zipCode.
 *******************************************************************************/
class SoftwareTester : public Employee
{
public:
	/******************************
	 ** CONSTRUCTOR & DESTRUCTOR **
	 ******************************/
	SoftwareTester();
	SoftwareTester(string empName, int empId, string empPhoneNum, int empAge,
				   char empGender, string empJob, int empSalary, int day,
				   int month, int year, const char* newAddress,
				   const char* newCity, const char* newState, int newZipCode);
	SoftwareTester(const SoftwareTester& otherTester); // copy constructor

	~SoftwareTester();

	/***************
	 ** MUTATORS **
	 ***************/
	void changeAddress(const char* newAddress);
	void changeCity(const char* newCity);
	void changeState(const char* newState);
	void changeZipCode(int newZipCode);
	void copyFrom(SoftwareTester otherTester);         // deep copy method

	/***************
	 ** ACCESSORS **
	 ***************/
	void printTester()const;
	void displayNewHeader()const;

private:
	char* address; // software tester's street address
	char* city;    // software tester's city
	char* state;   // software tester's state
	int zipCode;   // software tester's zip code
};

/*******************************************************************************
 * SoftwareTester();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * SoftwareTester();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: string empName         // IN - tester's name
 *               int empId              // IN - tester's ID #
 *               string empPhoneNum     // IN - tester's phone #
 *               int empAge             // IN - tester's age
 *               char empGender         // IN - tester's gender
 *               string empJob          // IN - tester's job title
 *               int empSalary          // IN - tester's salary
 *               int day                // IN - day of month tester hired
 *               int month              // IN - month tester hired
 *               int year               // IN - year tester hired
 *               const char* newAddress // IN - tester's street address
 *               const char* newCity    // IN - tester's city
 *               const char* newState   // IN - tester's state
 *               int newZipCode         // IN - tester's zip code
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * ~SoftwareTester();
 * 	 Destructor; Deallocates memory
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * SoftwareTester(const SoftwareTester& otherTester);
 * 	 Constructor; Copy constructor
 * 	 Parameters: otherTester (SoftwareTester) // IN - softwareTester object being
 * 	                                          //      copied
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * copyFrom(SoftwareTester otherTester);
 * 	 Mutator; Deep copies a SoftwareTester object
 * 	 Parameters: otherTester (SoftwareTester) // IN/PROC - object to be copied
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * changeAddress(const char* newAddress);
 * 	 Mutator; Changes the tester's address
 * 	 Parameters: newAddress (char*) // IN - tester's new street address
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * changeCity(const char* newCity);
 * 	 Mutator; Changes the tester's city
 * 	 Parameters: newCity (char*) // IN - tester's new city
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * changeState(const char* newState);
 * 	 Mutator; Changes the tester's state
 * 	 Parameters: newState (char*) // IN - tester's new state
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * changeZipCode(int newZipCode);
 * 	 Mutator; Changes the tester's zip code
 * 	 Parameters: newZipCode (integer) // IN - tester's new zip code
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * printTester()const;
 * 	 Accessor; Displays all of the tester's information
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * displayNewHeader()const;
 * 	 Accessor; Displays the header of the tester's information
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/

// PROTOTYPES

#endif /* SOFTWARETESTERCLASS_H_ */
