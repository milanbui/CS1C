/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #2: Employee Inheritance
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 30 January 2019
 ******************************************************************************/
#include "employeeClass.h"

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
SoftwareArch::SoftwareArch():Employee()
{
	departmentNum = 0;
	supervisorName.clear();
	percentSalaryInc = 0;
	yearsExperience = 0;
}

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
SoftwareArch::SoftwareArch(string name,     // IN - Architect's name
						   int id,          // IN - Architect's ID #
						   string phoneNum, // IN - Architect's phone number
						   int age,         // IN - Architect's age
						   char gender,     // IN - Architect's gender
						   string jobTitle, // IN - Architect's job title
						   int salary,      // IN - Architect's salary
						   int day,         // IN - day of month architect hired
						   int month,       // IN - month architect hired
						   int year,        // IN - year architect hired
						   int departNum,   // IN - Architect's department number
						   string superName,// IN - Architect's supervisor's name
						   int salaryInc,   // IN - Architect's percent salary increase
						   int yearsExp)    // IN - Architect's years of experience
					   :Employee(name, id, phoneNum, age, gender, jobTitle, salary,
							     day, month, year)
{

	departmentNum = departNum;
	supervisorName = superName;
	percentSalaryInc = salaryInc;
	yearsExperience = yearsExp;
}


/*******************************************************************************
 * ~SoftwareArch();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
SoftwareArch::~SoftwareArch()
{

}

/*******************************************************************************
 * changeArchDepartNum(int num);
 * 	 Mutator; Changes the architect's department number
 * 	 Parameters: num (integer) // IN - architect's department number
 * 	 Return: none
 *******************************************************************************/
void SoftwareArch::changeArchDepartNum(int num)// IN - architect's department number
{
	departmentNum = num;
}

/*******************************************************************************
 * changeArchSuperName(string superName);
 * 	 Mutator; Changes the architect's supervisor's name
 * 	 Parameters: superName (string) // IN - architect's supervisor's name
 * 	 Return: none
 *******************************************************************************/
void SoftwareArch::changeArchSuperName(string superName)// IN - architect's supervisor's name
{
	supervisorName = superName;
}

/*******************************************************************************
 * changeArchSalInc(int percent);
 * 	 Mutator; Changes the architect's percent salary increase
 * 	 Parameters: percent (integer) // IN - architect's percent salary increase
 * 	 Return: none
 *******************************************************************************/
void SoftwareArch::changeArchSalInc(int percent)// IN - architect's percent salary increase
{
	percentSalaryInc = percent;
}

/*******************************************************************************
 * changeYearsOfExp(int yearsExp);
 * 	 Mutator; Changes the architect's years of experience
 * 	 Parameters: yearsExp (integer) // IN - architect's years of experience
 * 	 Return: none
 *******************************************************************************/
void SoftwareArch::changeYearsOfExp(int yearsExp)// IN - architect's years of experience
{
	yearsExperience = yearsExp;
}

/*******************************************************************************
 * printArchitect()const;
 * 	 Accessor; Displays the architect's information (name, id #, phone number,
 * 	 		   age, gender, job title, salary, hire date, department number,
 * 	 		   supervisor's name, percent salary increase, years of experience)
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the architect's information
 *******************************************************************************/
void SoftwareArch::printArchitect()const
{
	// OUTPUT -- outputs the architect's information using an Employee method
	//           (name, id #, phone number, age, gender, job title, salary, hire date)
	Employee::printEmployee();

	// Declare and initialize variable
	string temp = "";  // PROC/OUT - temporary string variable

	// OUTPUT -- outputs department number
	cout << left << setw(11) << departmentNum;

	cout << left << setw(12);

	// OUTPUT -- outputs supervisor's name. Only outputs part of name if too long
	if(supervisorName.length() > 10)
	{
		if(supervisorName[6] == ' ')
		{
			temp = supervisorName.substr(0,6) + "...";
		}
		else
		{
			temp = supervisorName.substr(0,7) + "...";
		}

		cout << temp;
	}
	else
	{
		cout << supervisorName;
	}


	// OUTOUT -- outputs percent salary increase and years of experience
	cout << left << setw(8)  << percentSalaryInc;
	cout << left << setw(9)  << yearsExperience;

}

/*******************************************************************************
 * displayHeader()const;
 * 	 Accessor; Displays the header for the table of the architect's information
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the header for the table of the architect's information
 *******************************************************************************/
void SoftwareArch::displayHeader()const
{
	// OUTPUT -- outputs some of the header for the architect using Employee method
	Employee::displayHeader();

	// OUTPUT -- outputs header for the rest of the information of the architect
	cout << left << setw(11) << "DEPARTMENT";

	cout << left << setw(12) << "SUPERVISOR";
	cout << left << setw(8)  << "RAISE %";

	cout << left << setw(9)  << "YEARS EXP";
}
