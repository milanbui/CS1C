/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #5: Enhanced Employee
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 February 2019
 ******************************************************************************/
#ifndef EMPLOYEECLASS_H_
#define EMPLOYEECLASS_H_

// PREPROCESSOR DIRECTIVE
#include <iomanip>
#include <string>
#include "dateClass.h"

// GLOBAL CONSTANTS

// TYPE DEFINITIONS AND ENUMERATED TYPES
/*******************************************************************************
 * Employee Class
 * 	 This class represents an Employee object. It manages eight attributes:
 * 	 name, id, phoneNum, age, gender, jobTitle, salary, hireDate.
 *******************************************************************************/
class Employee
{
	public:
		/******************************
		 ** CONSTRUCTOR & DESTRUCTOR **
		 ******************************/
		Employee();
		Employee(string empName, int empId, string empPhoneNum, int empAge,
				char empGender, string empJob, int empSalary, int day, int month, int year);
		~Employee();

		/***************
		 ** MUTATORS **
		 ***************/
		void changeName(string empName);
		void changeId  (int empId);
		void changeNum (string empPhoneNum);
		void changeAge (int empAge);
		void changeGen (char empGender);
		void changeJob (string empJob);
		void changeSal (int empSalary);
		void changeDate(int day, int month, int year);

		/***************
		 ** ACCESSORS **
		 ***************/
		void printEmployee()const;
		void displayHeader()const;


	protected:
		string name;     // Employee's name
		int id;          // Employee's ID #
		string phoneNum; // Employee's phone number
		int age;         // Employee's age
		char gender;     // Employee's gender
		string jobTitle; // Employee's job title
		int salary;      // Employee's salary
		Date hireDate;   // Employee's hire date
};
/*******************************************************************************
 * Employee();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * Employee();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: empName     (string)   // IN - employee's name
 * 	 			 empId       (integer)  // IN - employee's ID #
 * 	 			 empPhoneNum (string)   // IN - employee's phone number
 * 	 			 empAge      (integer)  // IN - employee's age
 * 	 			 empGender   (character)// IN - employee's gender
 * 	 			 empJob      (string)   // IN - employee's job title
 * 	 			 empSalary   (integer)  // IN - employee's salary
 * 	 			 day         (integer)  // IN - day of month employee hired
 * 	 			 month       (integer)  // IN - month employee hired
 * 	 			 year        (integer)  // IN - year employee hired
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * ~Employee();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeName(string empName);
 * 	 Mutator; Changes the employee's name
 * 	 Parameters: empName (string) // IN - employee's name
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeId(int empId);
 * 	 Mutator; Changes the employee's ID #
 * 	 Parameters: empId (integer) // IN - employee's ID #
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeNum(string empPhoneNum);
 * 	 Mutator; Changes the employee's phone number
 * 	 Parameters: empPhoneNum (string) // IN - employee's phone number
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeAge(int empAge);
 * 	 Mutator; Changes the employee's age
 * 	 Parameters: empAge (integer) // IN - employee's age
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeJob(string empJob);
 * 	 Mutator; Changes the employee's job title
 * 	 Parameters: empJob (string) // IN - employee's job title
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeGen (char empGender);
 * 	 Mutator; Changes the employee's gender
 * 	 Parameters: empGender (character) // IN - employee's gender
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeSal(int empSalary);
 * 	 Mutator; Changes the employee's salary
 * 	 Parameters: empSalary (integer) // IN - employee's salary
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeDate(int day, int month, int year);
 * 	 Mutator; Changes the employee's hire date
 * 	 Parameters: day   (integer) // IN - day of month hired
 * 	 			 month (integer) // IN - month hired
 * 	 			 year  (integer) // IN - year hired
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * printEmployee()const;
 * 	 Accessor; Displays the employee's information (name, id #, phone number,
 * 	 		   age, gender, job title, salary, hire date)
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the employee's information
 *******************************************************************************/


/*******************************************************************************
 * displayHeader()const;
 * 	 Accessor; Displays the header for the table of the employee's information
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the header for the table of the employee's information
 *******************************************************************************/

// PROTOTYPES

#endif /* EMPLOYEECLASS_H_ */
