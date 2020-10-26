/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #2: Employee Inheritance
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 30 January 2019
 ******************************************************************************/
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
Employee::Employee()
{
	name.clear();
	id = 0;
	phoneNum.clear();
	age = 0;
	gender = ' ';
	jobTitle.clear();
	salary = 0;
}

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
Employee::Employee(string empName,     // IN - employee's name
				   int empId,          // IN - employee's ID #
				   string empPhoneNum, // IN - employee's phone number
				   int empAge,         // IN - employee's age
				   char empGender,     // IN - employee's gender
				   string empJob,      // IN - employee's job title
				   int empSalary,      // IN - employee's salary
				   int day,            // IN - day of month employee hired
				   int month,          // IN - month employee hired
				   int year)           // IN - year employee hired
{
	name     = empName;
	id       = empId;
	phoneNum = empPhoneNum;
	age      = empAge;
	gender   = empGender;
	jobTitle = empJob;
	salary   = empSalary;
	hireDate.setDate(day, month, year);
}

/*******************************************************************************
 * ~Employee();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
Employee::~Employee()
{

}

/*******************************************************************************
 * changeName(string empName);
 * 	 Mutator; Changes the employee's name
 * 	 Parameters: empName (string) // IN - employee's name
 * 	 Return: none
 *******************************************************************************/
void Employee::changeName(string empName) // IN - employee's name
{
	name = empName;
}

/*******************************************************************************
 * changeId(int empId);
 * 	 Mutator; Changes the employee's ID #
 * 	 Parameters: empId (integer) // IN - employee's ID #
 * 	 Return: none
 *******************************************************************************/
void Employee::changeId(int empId) // IN - employee's ID #
{
	id = empId;
}

/*******************************************************************************
 * changeNum(string empPhoneNum);
 * 	 Mutator; Changes the employee's phone number
 * 	 Parameters: empPhoneNum (string) // IN - employee's phone number
 * 	 Return: none
 *******************************************************************************/
void Employee::changeNum(string empPhoneNum) // IN - employee's phone number
{
	phoneNum = empPhoneNum;
}

/*******************************************************************************
 * changeAge(int empAge);
 * 	 Mutator; Changes the employee's age
 * 	 Parameters: empAge (integer) // IN - employee's age
 * 	 Return: none
 *******************************************************************************/
void Employee::changeAge(int empAge) // IN - employee's age
{
	age = empAge;
}

/*******************************************************************************
 * changeJob(string empJob);
 * 	 Mutator; Changes the employee's job title
 * 	 Parameters: empJob (string) // IN - employee's job title
 * 	 Return: none
 *******************************************************************************/
void Employee::changeJob(string empJob) // IN - employee's job title
{
	jobTitle = empJob;
}

/*******************************************************************************
 * changeGen (char empGender);
 * 	 Mutator; Changes the employee's gender
 * 	 Parameters: empGender (character) // IN - employee's gender
 * 	 Return: none
 *******************************************************************************/
void Employee::changeGen (char empGender) // IN - employee's gender
{
	gender = empGender;
}

/*******************************************************************************
 * changeSal(int empSalary);
 * 	 Mutator; Changes the employee's salary
 * 	 Parameters: empSalary (integer) // IN - employee's salary
 * 	 Return: none
 *******************************************************************************/
void Employee::changeSal(int empSalary)
{
	salary = empSalary;
}

/*******************************************************************************
 * changeDate(int day, int month, int year);
 * 	 Mutator; Changes the employee's hire date
 * 	 Parameters: day   (integer) // IN - day of month hired
 * 	 			 month (integer) // IN - month hired
 * 	 			 year  (integer) // IN - year hired
 * 	 Return: none
 *******************************************************************************/
void Employee::changeDate(int day,   // IN - day of month hired
		                  int month, // IN - month hired
						  int year)  // IN - year hired
{
	hireDate.setDate(day, month, year);
}

/*******************************************************************************
 * printEmployee()const;
 * 	 Accessor; Displays the employee's information (name, id #, phone number,
 * 	 		   age, gender, job title, salary, hire date)
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the employee's information
 *******************************************************************************/
void Employee::printEmployee()const
{
	// Declare and initialize variable
	string temp = "";    // PROC/OUT - temporary variable to hold string

	cout << left << setw(14);

	// OUTPUT -- outputs name. Only outputs part of the name if it is too long
	if(name.length() > 12)
	{
		if(name[8] == ' ')
		{
			temp = name.substr(0,8) + "...";
		}
		else
		{
			temp = name.substr(0,9) + "...";
		}

		cout << temp;
	}
	else
	{
		cout << name;
	}

	// Clears the temporary variable
	temp.clear();

	// OUTPUT -- outputs id#, phone number, age, and gender
	cout << left << setw(10) << id;
	cout << left << setw(14) << phoneNum;
	cout << left << setw(4)  << age;
	cout << left << setw(7)  << gender;

	cout << left << setw(14);

	// OUTPUT -- outputs job title. Only outputs part of job title if too long
	if(jobTitle.length() > 12)
	{
		if(jobTitle[8] == ' ')
		{
			temp = jobTitle.substr(0,8) + "...";
		}
		else
		{
			temp = jobTitle.substr(0,9) + "...";
		}

		cout << temp;
	}
	else
	{
		cout << jobTitle;
	}

	// OUTPUT -- outputs salary and hire date
	cout << left << "$" << setw(8)  << salary;
	cout << left << setw(12) << hireDate.getDate();

}

/*******************************************************************************
 * displayHeader()const;
 * 	 Accessor; Displays the header for the table of the employee's information
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the header for the table of the employee's information
 *******************************************************************************/
void Employee::displayHeader()const
{
	// OUTPUT -- outputs the headers
	cout << left << setw(14) << "NAME";
	cout << left << setw(10) << "ID";
	cout << left << setw(14) << "PHONE";
	cout << left << setw(4)  << "AGE";
	cout << left << setw(7)  << "GENDER";
	cout << left << setw(14) << "JOB TITLE";
	cout << left << setw(9)  << "SALARY";
	cout << left << setw(12) << "HIRE DATE";
}
