/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #2: Employee Inheritance
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 30 January 2019
 ******************************************************************************/
#ifndef SOFTWAREARCHCLASS_H_
#define SOFTWAREARCHCLASS_H_

// PREPROCESSOR DIRECTIVES
#include "employeeClass.h"

// GLOBAL CONSTANTS

// TYPE DEFINITIONS AND ENUMERATED TYPES
/*******************************************************************************
 * SoftwareArch Class
 * 	 This class represents a SoftwareArch object and is derived from the Employee
 * 	 class. It manages four attributes: departmentNum, supervisorName,
 * 	 percentSalaryInc, yearsExperience
 *******************************************************************************/
class SoftwareArch : public Employee
{
	public:
		/******************************
		 ** CONSTRUCTOR & DESTRUCTOR **
		 ******************************/
		SoftwareArch();
		SoftwareArch(string name, int id, string phoneNum, int age,
				   char gender, string jobTitle, int salary, int day,
				   int month, int year, int departNum, string superName,
				   int salaryInc, int yearsExp);
		~SoftwareArch();

		/***************
		 ** MUTATORS **
		 ***************/
		void changeArchDepartNum(int num);
		void changeArchSuperName(string superName);
		void changeArchSalInc(int percent);
		void changeYearsOfExp(int yearsExp);

		/***************
		 ** ACCESSORS **
		 ***************/
		void printArchitect()const;
		void displayHeader()const;

	private:
		int departmentNum;    // Architect's department number
		string supervisorName;// Architect's supervisor's name
		int percentSalaryInc; // Architect's percent salary increase
		int yearsExperience;  // Architect's number of years of experience
};

/*******************************************************************************
 * SoftwareArch();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * SoftwareArch(string name, int id, string phoneNum, int age, char gender,
 * 			    string jobTitle, int salary, int day, int month, int year,
 * 			    int departNum, string superName, int salaryInc, int yearsExp);
 * 	 Constructor; Initializes attributes
 * 	 Parameters: name          (string)   // IN - Architect's name
 * 	 			 id            (integer)  // IN - Architect's ID #
 * 	 			 phoneNum      (string)   // IN - Architect's phone number
 * 	 			 age           (integer)  // IN - Architect's age
 * 	 			 gender        (character)// IN - Architect's gender
 * 	 			 jobTitle      (string)   // IN - Architect's job title
 * 	 			 salary        (integer)  // IN - Architect's salary
 * 	 			 day           (integer)  // IN - day of month architect hired
 * 	 			 month         (integer)  // IN - month architect hired
 * 	 			 year          (integer)  // IN - year architect hired
 * 	 			 departNum     (integer)  // IN - Architect's department number
 * 	 			 superName     (string)   // IN - Architect's supervisor's name
 * 	 			 salaryInc     (integer)  // IN - Architect's percent salary increase
 * 	 			 yearsExp      (integer)  // IN - Architect's years of experience
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * ~SoftwareArch();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeArchDepartNum(int num);
 * 	 Mutator; Changes the architect's department number
 * 	 Parameters: num (integer) // IN - architect's department number
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeArchSuperName(string superName);
 * 	 Mutator; Changes the architect's supervisor's name
 * 	 Parameters: superName (string) // IN - architect's supervisor's name
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeArchSalInc(int percent);
 * 	 Mutator; Changes the architect's percent salary increase
 * 	 Parameters: percent (integer) // IN - architect's percent salary increase
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeYearsOfExp(int yearsExp);
 * 	 Mutator; Changes the architect's years of experience
 * 	 Parameters: yearsExp (integer) // IN - architect's years of experience
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * printArchitect()const;
 * 	 Accessor; Displays the architect's information (name, id #, phone number,
 * 	 		   age, gender, job title, salary, hire date, department number,
 * 	 		   supervisor's name, percent salary increase, years of experience)
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the architect's information
 *******************************************************************************/


/*******************************************************************************
 * displayHeader()const;
 * 	 Accessor; Displays the header for the table of the architect's information
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the header for the table of the architect's information
 *******************************************************************************/

// PROTOTYPES

#endif /* SOFTWAREARCHCLASS_H_ */
