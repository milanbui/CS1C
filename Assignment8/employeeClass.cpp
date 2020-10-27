/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #8: Exceptions
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 March 2019
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
	cout << "CHANGING NAME..." << endl << endl;
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
	cout << "CHANGING ID..." << endl << endl;
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
	cout << "CHANGING PHONE NUMBER..." << endl << endl;
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
	cout << "CHANGING AGE..." << endl << endl;
	age = empAge;

	try
	{
		if(empAge < 16)
		{
			throw empAge;
		}
	}
	catch(int age)
	{
		cout << "AGE " << empAge << " of employee is too young." << endl;
		cout << "Age must at least be 16." << endl << endl;
		cout << "Please insert x number of years to add to the previous\n"
				"input to make the age greater than 16:" << endl;
		cin >> empAge;
		cin.ignore(1000, '\n');


		cout << endl << endl;

		changeAge(age + empAge);
	}
}

/*******************************************************************************
 * changeJob(string empJob);
 * 	 Mutator; Changes the employee's job title
 * 	 Parameters: empJob (string) // IN - employee's job title
 * 	 Return: none
 *******************************************************************************/
void Employee::changeJob(string empJob) // IN - employee's job title
{
	cout << "CHANGING JOB TITLE..." << endl << endl;
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
	cout << "CHANGING GENDER..." << endl << endl;
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
	cout << "CHANGING SALARY..." << endl << endl;
	salary = empSalary;

	try
	{
		if(empSalary < 0)
		{
			throw empSalary;
		}
	}
	catch(int sal)
	{
		cout << "SALARY " << empSalary << " of employee is negative." << endl;
		cout << "Salary must at least be 0." << endl << endl;
		cout << "Please insert a new salary:" << endl;
		cin >> empSalary;
		cin.ignore(1000, '\n');

		cout << endl << endl;

		changeSal(empSalary);
	}
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
	cout << "CHANGING HIRE DATE..." << endl << endl;
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

/*******************************************************************************
 * getAge()const;
 * 	 Accessor; Returns age
 * 	 Parameters: none
 * 	 Return: age
 *******************************************************************************/
int Employee::getAge()const
{
	return age;
}

/*******************************************************************************
 * getName()const;
 * 	 Accessor; Returns name
 * 	 Parameters: none
 * 	 Return: name
 *******************************************************************************/
string Employee::getName()const
{
	return name;
}

/*******************************************************************************
 * getSal()const;
 * 	 Accessor; Returns salary
 * 	 Parameters: none
 * 	 Return: salary
 *******************************************************************************/
int Employee::getSal()const
{
	return salary;
}

/*******************************************************************************
 * operator==(Employee emp)const;
 * 	 Overloads equality operator to compare Employee object ages
 * 	 Parameters: emp (Employee)  // IN - Employee object
 * 	 Return: true or false
 *******************************************************************************/
bool Employee::operator==(Employee emp)const  // IN - Employee object
{
	if(age == emp.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*******************************************************************************
 * operator+(int years);
 * 	 Overloads addition operator to add years to age.
 * 	 Parameters: years (int) // IN - years being added to age
 * 	 Return: temp
 *******************************************************************************/
Employee Employee::operator+(int years) // IN - years being added to age
{
	// Declare variables
	Employee temp;    // PROC/OUT - temporary Employee object

	// INPUT -- sets temp values to employees value
	temp.name = name;
	temp.age = age;
	temp.id = id;
	temp.gender = gender;
	temp.hireDate.setDate(hireDate.getDay(),hireDate.getMonth(),hireDate.getYear());
	temp.jobTitle = jobTitle;
	temp.salary = salary;
	temp.phoneNum = phoneNum;

	// Adds years to age
	temp.age = temp.age + years;

	return temp;
}

/*******************************************************************************
 * operator<<(ostream& output, const Employee& emp);
 * 	 Overloads << operator to output Employee object
 * 	 Parameters: output (ostream)  // OUT - output file stream
 * 	             emp    (Employee) // IN  - Employee object
 * 	 Return: output
 *******************************************************************************/
ostream& operator<<(ostream& output,     // OUT - output file stream
		            const Employee& emp) // IN  - Employee object
{
	// Declare and initialize variable
	string temp = "";    // PROC/OUT - temporary variable to hold string

	output << left << setw(14);

	// OUTPUT -- outputs name. Only outputs part of the name if it is too long
	if(emp.name.length() > 12)
	{
		if(emp.name[8] == ' ')
		{
			temp = emp.name.substr(0,8) + "...";
		}
		else
		{
			temp = emp.name.substr(0,9) + "...";
		}

		output << temp;
	}
	else
	{
		output << emp.name;
	}

	// Clears the temporary variable
	temp.clear();

	// OUTPUT -- outputs id#, phone number, age, and gender
	output << left << setw(10) << emp.id;
	output << left << setw(14) << emp.phoneNum;
	output << left << setw(4)  << emp.age;
	output << left << setw(7)  << emp.gender;

	output << left << setw(14);

	// OUTPUT -- outputs job title. Only outputs part of job title if too long
	if(emp.jobTitle.length() > 12)
	{
		if(emp.jobTitle[8] == ' ')
		{
			temp = emp.jobTitle.substr(0,8) + "...";
		}
		else
		{
			temp = emp.jobTitle.substr(0,9) + "...";
		}

		output << temp;
	}
	else
	{
		output << emp.jobTitle;
	}

	// OUTPUT -- outputs salary and hire date
	output << left << "$" << setw(8)  << emp.salary;
	output << left << setw(12) << emp.hireDate.getDate();

	return output;
}

/*******************************************************************************
 * operator>>(istream& input, Employee& emp);
 * 	 Overloads >> operator to read in Employee object
 * 	 Parameters: input (istream)  // IN - input file stream
 * 	             emp   (Employee) // IN - employee object
 * 	 Return: input
 *******************************************************************************/
istream& operator>>(istream& input, // IN - input file stream
		            Employee& emp)  // IN - employee object
{
	// INPUT -- prompts for input (all employee info)
	cout << left << setw(20) << "Enter Name:";
	getline(input, emp.name);

	cout << left << setw(20) << "Enter ID #:";
	input >> emp.id;
	input.ignore(1000, '\n');

	cout << left << setw(20) << "Enter Phone Number:";
	getline(input, emp.phoneNum);

	cout << left << setw(20) << "Enter Age:";
	input >> emp.age;
	input.ignore(1000, '\n');

	cout << left << setw(20) << "Enter Gender:";
	input.get(emp.gender);
	input.ignore(1000, '\n');

	cout << left << setw(20) << "Enter Job Title:";
	getline(input, emp.jobTitle);

	cout << left << setw(20) << "Enter Salary:";
	input >> emp.salary;
	input.ignore(1000, '\n');

	input >> emp.hireDate;

	return input;
}

/*******************************************************************************
 * addAge(int years);
 * 	 Mutator; Adds integer years to the age
 * 	 Parameters: years (int) // IN - years being added to age
 * 	 Return: none
 *******************************************************************************/
void Employee::addAge(int years) // IN - years being added to age
{
	age = age + years;
}



