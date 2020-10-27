/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #7: Friend Functions and Operator
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 11 March 2019
 ******************************************************************************/
#ifndef TESTERCLASS_H_
#define TESTERCLASS_H_

#include <iostream>
#include <string.h>
#include "employeeClass.h"


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

	~SoftwareTester();

	/***************
	 ** MUTATORS **
	 ***************/
	void changeAddress(const char* newAddress);
	void changeCity(const char* newCity);
	void changeState(const char* newState);
	void changeZipCode(int newZipCode);

	/***************
	 ** ACCESSORS **
	 ***************/
	int getAge()const;
	string getName()const;
	void printTester()const;
	void displayNewHeader()const;

	friend bool isEqual(const SoftwareTester& tester, const Employee& emp);
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

/*******************************************************************************
 * getAge()const;
 * 	 Accessor; Returns age
 * 	 Parameters: none
 * 	 Return: age
 *******************************************************************************/

/*******************************************************************************
 * getName()const;
 * 	 Accessor; Returns name
 * 	 Parameters: none
 * 	 Return: name
 *******************************************************************************/

/*******************************************************************************
 * isEqual(const SoftwareTester& tester, const Employee& emp);
 * 	 Accessor; Checks if tester and emp are equal in age
 * 	 Parameters: none
 * 	 Return: true or false
 *******************************************************************************/


#endif /* TESTERCLASS_H_ */
