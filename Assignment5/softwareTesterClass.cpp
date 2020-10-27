/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #5: Enhanced Employee
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 25 February 2019
 ******************************************************************************/
#include <iostream>
#include <string.h>
#include "employeeClass.h"
using namespace std;


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
SoftwareTester::SoftwareTester():Employee()
{
	cout << "DEFAULT CONSTRUCTOR CALLED" << endl;
	address = NULL;
	city = NULL;
	state = NULL;
	zipCode = 0;
}

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
SoftwareTester::SoftwareTester(string empName,        // IN - tester's name
		                       int empId,             // IN - tester's ID #
							   string empPhoneNum,    // IN - tester's phone #
							   int empAge,            // IN - tester's age
							   char empGender,        // IN - tester's gender
							   string empJob,         // IN - tester's job title
							   int empSalary,         // IN - tester's salary
							   int day,               // IN - day of month
							                          //      tester hired
							   int month,             // IN - month tester hired
							   int year,              // IN - year tester hired
							   const char* newAddress,// IN - tester's street
							                          //      address
							   const char* newCity,   // IN - tester's city
							   const char* newState,  // IN - tester's state
							   int newZipCode)        // IN - tester's zip code
                               :Employee(empName, empId, empPhoneNum, empAge,
                            		     empGender, empJob, empSalary, day,
										 month, year)
{
	// Dynamically allocates arrays of chars to store address, city, and state
	address = new char [strlen(newAddress)+1];
	strcpy(address, newAddress);

	city = new char [strlen(newCity)+1];
	strcpy(city, newCity);

	state = new char [strlen(newState)+1];
	strcpy(state, newState);

	zipCode = newZipCode;

	cout << "NON-DEFAULT CONSTRUCTOR CALLED" << endl << endl;
}

/*******************************************************************************
 * ~SoftwareTester();
 * 	 Destructor; Deallocates memory
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
SoftwareTester::~SoftwareTester()
{
	delete [] address;
	delete [] city;
	delete [] state;

	cout << "DESTRUCTOR CALLED" << endl << endl;
}

/*******************************************************************************
 * SoftwareTester(const SoftwareTester& otherTester);
 * 	 Constructor; Copy constructor
 * 	 Parameters: otherTester (SoftwareTester) // IN - softwareTester object being
 * 	                                          //      copied
 * 	 Return: none
 *******************************************************************************/
SoftwareTester::SoftwareTester(const SoftwareTester& otherTester) // IN - object
                                                                  //      being
                                                                  //      copied
{
	// Dynamically allocates arrays of chars to store address, city, and state
	address = new char [strlen(otherTester.address)+1];
	strcpy(address, otherTester.address);

	city = new char [strlen(otherTester.city)+1];
	strcpy(city, otherTester.city);

	state = new char [strlen(otherTester.state)+1];
	strcpy(state, otherTester.state);

	zipCode = otherTester.zipCode;

	Employee::name = otherTester.Employee::name;
	Employee::id = otherTester.Employee::id;
	Employee::phoneNum = otherTester.Employee::phoneNum;
	Employee::age = otherTester.Employee::age;
	Employee::gender = otherTester.Employee::gender;
	Employee::jobTitle = otherTester.Employee::jobTitle;
	Employee::salary = otherTester.Employee::salary;
	Employee::hireDate = otherTester.Employee::hireDate;


	cout << "COPY CONSTRUCTOR CALLED" << endl << endl;
}

/*******************************************************************************
 * copyFrom(SoftwareTester otherTester);
 * 	 Mutator; Deep copies a SoftwareTester object
 * 	 Parameters: otherTester (SoftwareTester) // IN/PROC - object to be copied
 * 	 Return: none
 *******************************************************************************/
void SoftwareTester::copyFrom(SoftwareTester otherTester) // IN/PROC - object to
                                                          //           be copied
{
	// De-allocates memory of address pointer
	delete [] address;

	// Dynamically allocates an array of chars to store information of another
	// object
	address = new char [strlen(otherTester.address)+1];
	strcpy(address, otherTester.address);

	// De-allocates memory of city pointer
	delete [] city;

	// Dynamically allocates an array of chars to store information of another
	// object
	city = new char [strlen(otherTester.city)+1];
	strcpy(city, otherTester.city);

	// De-allocates memory of state pointer
	delete [] state;

	// Dynamically allocates an array of chars to store information of another
	// object
	state = new char [strlen(otherTester.state)+1];
	strcpy(state, otherTester.state);

	// Sets zip code to new zip code
	zipCode = otherTester.zipCode;

	// Sets values to new values
	Employee::name = otherTester.Employee::name;
	Employee::id = otherTester.Employee::id;
	Employee::phoneNum = otherTester.Employee::phoneNum;
	Employee::age = otherTester.Employee::age;
	Employee::gender = otherTester.Employee::gender;
	Employee::jobTitle = otherTester.Employee::jobTitle;
	Employee::salary = otherTester.Employee::salary;
	Employee::hireDate = otherTester.Employee::hireDate;
}

/*******************************************************************************
 * changeAddress(const char* newAddress);
 * 	 Mutator; Changes the tester's address
 * 	 Parameters: newAddress (char*) // IN - tester's new street address
 * 	 Return: none
 *******************************************************************************/
void SoftwareTester::changeAddress(const char* newAddress) // IN - tester's new
                                                           //      street address
{
	// De allocates address pointer
	delete [] address;
	// Dynamically allocates an array of chars to store newAddress
	address = new char [strlen(newAddress)+1];
	strcpy(address, newAddress);
}

/*******************************************************************************
 * changeCity(const char* newCity);
 * 	 Mutator; Changes the tester's city
 * 	 Parameters: newCity (char*) // IN - tester's new city
 * 	 Return: none
 *******************************************************************************/
void SoftwareTester::changeCity(const char* newCity) // IN - tester's new city
{
	// De allocates city pointer
	delete [] city;
	// Dynamically allocates an array of chars to store newCity
	city = new char [strlen(newCity)+1];
	strcpy(city, newCity);
}

/*******************************************************************************
 * changeState(const char* newState);
 * 	 Mutator; Changes the tester's state
 * 	 Parameters: newState (char*) // IN - tester's new state
 * 	 Return: none
 *******************************************************************************/
void SoftwareTester::changeState(const char* newState) // IN - tester's new state
{
	// De allocates state pointer
	delete [] state;
	// Dynamically allocates an array of chars to store newState
	state = new char [strlen(newState)+1];
	strcpy(state, newState);
}

/*******************************************************************************
 * changeZipCode(int newZipCode);
 * 	 Mutator; Changes the tester's zip code
 * 	 Parameters: newZipCode (integer) // IN - tester's new zip code
 * 	 Return: none
 *******************************************************************************/
void SoftwareTester::changeZipCode(int newZipCode) // IN - tester's new zip code
{
	zipCode = newZipCode;
}

/*******************************************************************************
 * printTester()const;
 * 	 Accessor; Displays all of the tester's information
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
void SoftwareTester::printTester()const
{
	string temp;
	Employee::displayHeader();
	cout << endl;
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	Employee::printEmployee();
	cout << endl << endl;

	displayNewHeader();
	cout << setw(84) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	cout << left << setw(14);

	// OUTPUT -- outputs name. Only outputs part of the name if it is too long
	if(Employee::name.length() > 12)
	{
		if(Employee::name[8] == ' ')
		{
			temp = Employee::name.substr(0,8) + "...";
		}
		else
		{
			temp = Employee::name.substr(0,9) + "...";
		}

		cout << temp;
	}
	else
	{
		cout << Employee::name;
	}
	cout << left << setw(25) << address;
	cout << left << setw(20) << city;
	cout << left << setw(6) << state;
	cout << left << zipCode;
	cout << endl;

}

/*******************************************************************************
 * displayNewHeader()const;
 * 	 Accessor; Displays the header of the tester's information
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
void SoftwareTester::displayNewHeader()const
{

	cout << left << setw(14) << "NAME";
	cout << left << setw(25) << "ADDRESS";
	cout << left << setw(20) << "CITY";
	cout << left << setw(6) << "STATE";
	cout << left << "ZIP CODE";
	cout << endl;
}
