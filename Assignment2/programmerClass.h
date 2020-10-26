/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #2: Employee Inheritance
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 30 January 2019
 ******************************************************************************/
#ifndef PROGRAMMERCLASS_H_
#define PROGRAMMERCLASS_H_



#include "employeeClass.h"

/*******************************************************************************
 * Programmer Class
 * 	 This class represents a Programmer object and is derived from the Employee
 * 	 class. It manages five attributes: departmentNum, supervisorName,
 * 	 percentSalaryInc, cPlusPlus, java
 *******************************************************************************/
class Programmer : public Employee
{
	public:
		/******************************
		 ** CONSTRUCTOR & DESTRUCTOR **
		 ******************************/
		Programmer();
		Programmer(string name, int id, string phoneNum, int age,
				   char gender, string jobTitle, int salary, int day,
				   int month, int year, int departNum, string superName,
				   int salaryInc, bool knowsCPlusPlus, bool knowsJava);
		~Programmer();

		/***************
		 ** MUTATORS **
		 ***************/
		void changeProDepartNum(int num);
		void changeProSuperName(string superName);
		void changeProSalInc(int percent);
		void changeCPlusPlus(bool knowCPlusPlus);
		void changeJava(bool knowJava);

		/***************
		 ** ACCESSORS **
		 ***************/
		void printProgrammer()const;
		void displayHeader()const;

	private:
		int departmentNum;     // Programmer's department number
		string supervisorName; // Programmer's supervisor's name
		int percentSalaryInc;  // Programmer's percent salary increase
		bool cPlusPlus;        // Whether or not programmer knows C++
		bool java;             // Whether or not programmer knows java
};

/*******************************************************************************
 * Programmer();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * Programmer();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: name          (string)   // IN - programmer's name
 * 	 			 id            (integer)  // IN - programmer's ID #
 * 	 			 phoneNum      (string)   // IN - programmer's phone number
 * 	 			 age           (integer)  // IN - programmer's age
 * 	 			 gender        (character)// IN - programmer's gender
 * 	 			 jobTitle      (string)   // IN - programmer's job title
 * 	 			 salary        (integer)  // IN - programmer's salary
 * 	 			 day           (integer)  // IN - day of month programmer hired
 * 	 			 month         (integer)  // IN - month programmer hired
 * 	 			 year          (integer)  // IN - year programmer hired
 * 	 			 departNum     (integer)  // IN - programmer's department number
 * 	 			 superName     (string)   // IN - programmer's supervisor's name
 * 	 			 salaryInc     (integer)  // IN - programmer's percent salary increase
 * 	 			 knowsCPlusPlus(bool)     // IN - programmer's knowledge of C++
 * 	 			 knowsJava     (bool)     // IN - programmer's knowledge of java
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * ~Programmer();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeProDepartNum(int num);
 * 	 Mutator; Changes the programmer's department number
 * 	 Parameters: num (integer) // IN - programmer's department number
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeProSuperName(string superName);
 * 	 Mutator; Changes the programmer's supervisor's name
 * 	 Parameters: superName (string) // IN - programmer's supervisor's name
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeProSalInc(int percent);
 * 	 Mutator; Changes the programmer's percent salary increase
 * 	 Parameters: percent (integer) // IN - programmer's percent salary increase
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeCPlusPlus(bool knowCPlusPlus);
 * 	 Mutator; Changes whether or not the programmer knows
 * 	 Parameters: knowCPlusPlus (bool) // IN - programmer's knowledge of C++
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * changeJava(bool knowJava);
 * 	 Mutator; Changes whether or not the programmer knows Java
 * 	 Parameters: knowJava (bool) // IN - programmer's knowledge of Java
 * 	 Return: none
 *******************************************************************************/


/*******************************************************************************
 * printProgrammer()const;
 * 	 Accessor; Displays the programmer's information (name, id #, phone number,
 * 	 		   age, gender, job title, salary, hire date, department number,
 * 	 		   supervisor's name, percent salary increase, C++ knowledge,
 * 	 		   Java knowledge)
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the programmer's information
 *******************************************************************************/


/*******************************************************************************
 * displayHeader()const;
 * 	 Accessor; Displays the header for the table of the programmer's information
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the header for the table of the programmer's information
 *******************************************************************************/

#endif /* PROGRAMMERCLASS_H_ */
