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
Programmer::Programmer():Employee()
{
	departmentNum = 0;
	supervisorName.clear();
	percentSalaryInc = 0;
	cPlusPlus = false;
	java = false;
}

/*******************************************************************************
 * Programmer(string name, int id, string phoneNum, int age, char gender,
 * 			  string jobTitle, int salary, int day, int month, int year,
 * 			  int departNum, string superName, int salaryInc, bool knowsCPlusPlus,
 * 			  bool knowsJava);
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
Programmer::Programmer(string name,        // IN - programmer's name
					   int id,             // IN - programmer's ID #
					   string phoneNum,    // IN - programmer's phone number
					   int age,            // IN - programmer's age
					   char gender,        // IN - programmer's gender
					   string jobTitle,    // IN - programmer's job title
					   int salary,         // IN - programmer's salary
					   int day,            // IN - day of month programmer hired
					   int month,          // IN - month programmer hired
					   int year,           // IN - year programmer hired
					   int departNum,      // IN - programmer's department number
					   string superName,   // IN - programmer's supervisor's name
					   int salaryInc,      // IN - programmer's percent salary increase
					   bool knowsCPlusPlus,// IN - programmer's knowledge of C++
					   bool knowsJava)     // IN - programmer's knowledge of java
					   :Employee(name, id, phoneNum, age, gender, jobTitle, salary,
							     day, month, year)
{

	departmentNum = departNum;
	supervisorName = superName;
	percentSalaryInc = salaryInc;
	cPlusPlus = knowsCPlusPlus;
	java = knowsJava;
}


/*******************************************************************************
 * ~Programmer();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
Programmer::~Programmer()
{

}

/*******************************************************************************
 * changeProDepartNum(int num);
 * 	 Mutator; Changes the programmer's department number
 * 	 Parameters: num (integer) // IN - programmer's department number
 * 	 Return: none
 *******************************************************************************/
void Programmer::changeProDepartNum(int num)// IN - programmer's department number
{
	departmentNum = num;
}

/*******************************************************************************
 * changeProSuperName(string superName);
 * 	 Mutator; Changes the programmer's supervisor's name
 * 	 Parameters: superName (string) // IN - programmer's supervisor's name
 * 	 Return: none
 *******************************************************************************/
void Programmer::changeProSuperName(string superName)// IN - programmer's supervisor's name
{
	supervisorName = superName;
}

/*******************************************************************************
 * changeProSalInc(int percent);
 * 	 Mutator; Changes the programmer's percent salary increase
 * 	 Parameters: percent (integer) // IN - programmer's percent salary increase
 * 	 Return: none
 *******************************************************************************/
void Programmer::changeProSalInc(int percent)
{
	percentSalaryInc = percent;
}

/*******************************************************************************
 * changeCPlusPlus(bool knowCPlusPlus);
 * 	 Mutator; Changes whether or not the programmer knows
 * 	 Parameters: knowCPlusPlus (bool) // IN - programmer's knowledge of C++
 * 	 Return: none
 *******************************************************************************/
void Programmer::changeCPlusPlus(bool knowCPlusPlus)// IN - programmer's knowledge of C++
{
	cPlusPlus = knowCPlusPlus;
}

/*******************************************************************************
 * changeJava(bool knowJava);
 * 	 Mutator; Changes whether or not the programmer knows Java
 * 	 Parameters: knowJava (bool) // IN - programmer's knowledge of Java
 * 	 Return: none
 *******************************************************************************/
void Programmer::changeJava(bool knowJava)// IN - programmer's knowledge of Java
{
	java = knowJava;
}

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
void Programmer::printProgrammer()const
{
	// OUTPUT -- outputs the programmer's information using an Employee method
	//           (name, id #, phone number, age, gender, job title, salary, hire date)
	Employee::printEmployee();

	// Declare and initialize variable
	string temp = "";   // PROC/OUT - temporary string variable

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

	// OUTPUT -- outputs the programmer's salary increase, C++ knowledge, and Java knowledge
	cout << left << setw(8)  << percentSalaryInc;

	cout << left << setw(5)  << (cPlusPlus?"Yes":"No");
	cout << left << setw(5)  << (java?"Yes":"No");

}

/*******************************************************************************
 * displayHeader()const;
 * 	 Accessor; Displays the header for the table of the programmer's information
 * 	 Parameters: none
 * 	 Return: none
 * 	 		-> outputs the header for the table of the programmer's information
 *******************************************************************************/
void Programmer::displayHeader()const
{
	// OUTPUT -- outputs some of the header for the programmer using Employee method
	Employee::displayHeader();

	// OUTPUT -- outputs header for the rest of the information of the programmer
	cout << left << setw(11) << "DEPARTMENT";

	cout << left << setw(12) << "SUPERVISOR";
	cout << left << setw(8)  << "RAISE %";

	cout << left << setw(5)  << "C++";
	cout << left << setw(5)  << "JAVA";
}
