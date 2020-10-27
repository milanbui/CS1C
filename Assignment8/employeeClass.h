/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #8: Exceptions
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 March 2019
 ******************************************************************************/
#ifndef EMPLOYEECLASS_H_
#define EMPLOYEECLASS_H_

#include <iomanip>
#include <string>
#include "dateClass.h"

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
				 char empGender, string empJob, int empSalary, int day,
				 int month, int year);
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
		int getAge()const;
		string getName()const;
		int getSal()const;
		void printEmployee()const;
		void displayHeader()const;

		bool operator==(Employee emp)const;
		Employee operator+(int years);
		friend istream& operator>>(istream& input, Employee& emp);
		friend ostream& operator<<(ostream& output, const Employee& emp);

		void addAge(int years);
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
 * operator==(Employee emp)const;
 * 	 Overloads equality operator to compare Employee object ages
 * 	 Parameters: emp (Employee)  // IN - Employee object
 * 	 Return: true or false
 *******************************************************************************/

/*******************************************************************************
 * operator+(int years);
 * 	 Overloads addition operator to add years to age.
 * 	 Parameters: years (int) // IN - years being added to age
 * 	 Return: temp
 *******************************************************************************/

/*******************************************************************************
 * operator<<(ostream& output, const Employee& emp);
 * 	 Overloads << operator to output Employee object
 * 	 Parameters: output (ostream)  // OUT - output file stream
 * 	             emp    (Employee) // IN  - Employee object
 * 	 Return: output
 *******************************************************************************/

/*******************************************************************************
 * operator>>(istream& input, Employee& emp);
 * 	 Overloads >> operator to read in Employee object
 * 	 Parameters: input (istream)  // IN - input file stream
 * 	             emp   (Employee) // IN - employee object
 * 	 Return: input
 *******************************************************************************/

/*******************************************************************************
 * addAge(int years);
 * 	 Mutator; Adds integer years to the age
 * 	 Parameters: years (int) // IN - years being added to age
 * 	 Return: none
 *******************************************************************************/


#endif /* EMPLOYEECLASS_H_ */
