/*******************************************************************************
 * AUTHOR		  : Milan Bui
 * STUDENT ID 	  : #
 * ASSIGNMENT #14 : Linked List
 * CLASS		  : CS 1C
 * SECTION		  : MW: 5:00p - 7:20p
 * DUE DATE		  : 29 April 2019
 ******************************************************************************/
#include <iomanip>
#include "linkedList.h"
#include "printHeader.h"

/*******************************************************************************
 * LINKED LIST OPERATIONS WITH INTS AND DOUBLES USING TEMPLATES
 * _____________________________________________________________________________
 *
 *  This program will use a linked list template to create a linked list of
 *  integers and doubles. It will insert 5 values, reverse the list, display
 *  the original and the reversed list, deletes the third node of each list,
 *  adds to the middle of each list, try to delete a non-existent node, try to
 *  delete from an empty list
 * _____________________________________________________________________________
 * INPUT:
 *		int1    - first integer being added to the integer linked list
 *		int2    - second integer being added to the integer linked list
 *		int3    - third integer being added to the integer linked list
 *		int4    - fourth integer being added to the integer linked list
 *		int5    - fifth integer being added to the integer linked list
 *
 *		double1 - first double being added to the double linked list
 *		double2 - second double being added to the double linked list
 *		double3 - third double being added to the double linked list
 *		double4 - fourth double being added to the double linked list
 *		double5 - fifth double being added to the double linked list
 *
 *		intList            - integer linked list
 *		reveredIntList     - reversed integer linked list
 *
 *		doubleList         - double linked list
 *		reversedDoubleList - reversed linked list
 *
 * OUTPUT:
 *		int1    - first integer being added to the integer linked list
 *		int2    - second integer being added to the integer linked list
 *		int3    - third integer being added to the integer linked list
 *		int4    - fourth integer being added to the integer linked list
 *		int5    - fifth integer being added to the integer linked list
 *
 *		double1 - first double being added to the double linked list
 *		double2 - second double being added to the double linked list
 *		double3 - third double being added to the double linked list
 *		double4 - fourth double being added to the double linked list
 *		double5 - fifth double being added to the double linked list
 *
 *		intList            - integer linked list
 *		reveredIntList     - reversed integer linked list
 *
 *		doubleList         - double linked list
 *		reversedDoubleList - reversed linked list
 *
 ******************************************************************************/
int main()
{
	// Declare and Initialize variables
	int int1 = 88;         // IN/OUT - first integer being added
	int int2 = 78;         // IN/OUT - second integer being added
	int int3 = 62;         // IN/OUT - third integer being added
	int int4 = 123;        // IN/OUT - fourth integer being added
	int int5 = 60;         // IN/OUT - fifth integer being added

	double double1 = 88.8;  // IN/OUT - first double being added
	double double2 = 78.9;  // IN/OUT - second double being added
	double double3 = 62.6;  // IN/OUT - third double being added
	double double4 = 123.4; // IN/OUT - fourth double being added
	double double5 = 60.6;  // IN/OUT - fifth double being added

	LinkedList<int> intList;         // IN/OUT - integer linked list
	LinkedList<int> reversedIntList; // IN/OUT - reversed integer linked list

	LinkedList<double> doubleList;         // IN/OUT - double linked list
	LinkedList<double> reversedDoubleList; // IN/OUT - reversed double linked list

	// OUTPUT -- prints class header and program description
	cout << printHeader("Linked List", 14);

	cout << "This program will:" << endl;
	cout << "1. Use a linked list template to create an integer linked list and"
			"\n   a linked list of doubles." << endl;
	cout << "2. It will insert 5 values, reverse the list, display the original"
			"\n   and the reversed list, deletes the third node of each list, "
			"\n   adds to the middle of each list, try to delete a non-existent "
			"\n   node, try to delete from an empty list" << endl;
	cout << "3. Does this for the integer linked list and the double linked list."
		 << endl << endl;



	/***************************************************************************
	 *
	 * INTEGER LINKED LIST OPERATIONS
	 *
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "INTEGER LINKED LIST" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl;

	// INPUT -- inserts the values into the linked list
	intList.addBack(int1);
	intList.addBack(int2);
	intList.addBack(int3);
	intList.addBack(int4);
	intList.addBack(int5);

	cout << "CURRENT LINKED LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// OUTPUT -- displays the linked list after the inserts
	intList.printList();
	cout << endl << endl;


	/***************************************************************************
	 * REVERSING LINKED LIST
	 **************************************************************************/

	cout << "REVERSING LINKED LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// PROCESSING -- copies the initial linked list
	reversedIntList = intList;

	// PROCESSING -- reverses the copy linked list
	reversedIntList.reverseList();

	// OUTPUT -- displays the two linked lists
	cout << "INTEGER LINKED LIST:" << endl;
	intList.printList();

	cout << "REVERSED INTEGER LINKED LIST:" << endl;
	reversedIntList.printList();

	cout << endl << endl;


	/***************************************************************************
	 * DELETE THIRD NODE OF EACH LIST
	 **************************************************************************/

	cout << "DELETE THIRD NODE OF EACH LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// PROCESSING -- deletes the third node of each list
	intList.deleteItem(int3);
	reversedIntList.deleteItem(int3);

	// OUTPUT -- displays the two linked lists
	cout << "INTEGER LINKED LIST:" << endl;
	intList.printList();

	cout << "REVERSED INTEGER LINKED LIST:" << endl;
	reversedIntList.printList();

	cout << endl << endl;


	/***************************************************************************
	 * ADD TO MIDDLE OF EACH LIST
	 **************************************************************************/

	cout << "ADD TO MIDDLE OF EACH LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// PROCESSING -- adds a number to the middle of each list
	intList.addMiddle(70);
	reversedIntList.addMiddle(70);

	// OUTPUT -- displays the two linked lists
	cout << "INTEGER LINKED LIST:" << endl;
	intList.printList();

	cout << "REVERSED INTEGER LINKED LIST:" << endl;
	reversedIntList.printList();

	cout << endl << endl;


	/***************************************************************************
	 * DELETE NON-EXISTENT NODE IN EACH LIST
	 **************************************************************************/

	cout << "DELETE NON-EXISTENT NODE IN EACH LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// PROCESSING -- attempts to delete an item not in the linked list
	intList.deleteItem(100);
	reversedIntList.deleteItem(100);


	// OUTPUT -- displays the two linked lists
	cout << "INTEGER LINKED LIST:" << endl;
	intList.printList();

	cout << "REVERSED INTEGER LINKED LIST:" << endl;
	reversedIntList.printList();

	cout << endl << endl;


	/***************************************************************************
	 * DELETE FROM EMPTY LIST
	 **************************************************************************/

	cout << "DELETE FROM EMPTY LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// PROCESSING -- clears both lists
	intList.clearList();
	reversedIntList.clearList();

	// PROCESSING -- attempts to delete from an empty list
	intList.deleteItem(int1);
	reversedIntList.deleteItem(int1);

	// OUTPUT -- displays the two linked lists
	cout << "INTEGER LINKED LIST:" << endl;
	intList.printList();

	cout << "REVERSED INTEGER LINKED LIST:" << endl;
	reversedIntList.printList();

	cout << endl << endl;




	/***************************************************************************
	 *
	 * DOUBLE LINKED LIST OPERATIONS
	 *
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "DOUBLE LINKED LIST" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl;

	// INPUT -- inserts into linked list
	doubleList.addBack(double1);
	doubleList.addBack(double2);
	doubleList.addBack(double3);
	doubleList.addBack(double4);
	doubleList.addBack(double5);

	// OUTPUT -- displays list after new inserts
	cout << "CURRENT LINKED LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	doubleList.printList();
	cout << endl << endl;


	/***************************************************************************
	 * REVERSING LINKED LIST
	 **************************************************************************/

	cout << "REVERSING LINKED LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// PROC -- copies list and reverses nodes in the copy
	reversedDoubleList = doubleList;
	reversedDoubleList.reverseList();

	// OUTPUT -- displays the two linked lists
	cout << "DOUBLE LINKED LIST:" << endl;
	doubleList.printList();

	cout << "REVERSED DOUBLE LINKED LIST:" << endl;
	reversedDoubleList.printList();

	cout << endl << endl;


	/***************************************************************************
	 * DELETE THIRD NODE OF EACH LIST
	 **************************************************************************/

	cout << "DELETE THIRD NODE OF EACH LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// PROC -- deletes the third node in each list
	doubleList.deleteItem(double3);
	reversedDoubleList.deleteItem(double3);

	// OUTPUT -- displays the two linked lists
	cout << "INTEGER LINKED LIST:" << endl;
	doubleList.printList();

	cout << "REVERSED INTEGER LINKED LIST:" << endl;
	reversedDoubleList.printList();

	cout << endl << endl;


	/***************************************************************************
	 * ADD TO MIDDLE OF EACH LIST
	 **************************************************************************/

	cout << "ADD TO MIDDLE OF EACH LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// INPUT -- inserts a number in the middle of each list
	doubleList.addMiddle(70.7);
	reversedDoubleList.addMiddle(70.7);

	// OUTPUT -- displays the two linked lists
	cout << "INTEGER LINKED LIST:" << endl;
	doubleList.printList();

	cout << "REVERSED INTEGER LINKED LIST:" << endl;
	reversedDoubleList.printList();

	cout << endl << endl;


	/***************************************************************************
	 * DELETE NON-EXISTENT NODE IN EACH LIST
	 **************************************************************************/

	cout << "DELETE NON-EXISTENT NODE IN EACH LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// PROC -- attempts to delete a node from each list that is non-existent
	doubleList.deleteItem(100.1);
	reversedDoubleList.deleteItem(100.1);

	// OUTPUT -- displays the two linked lists
	cout << "INTEGER LINKED LIST:" << endl;
	doubleList.printList();

	cout << "REVERSED INTEGER LINKED LIST:" << endl;
	reversedDoubleList.printList();

	cout << endl << endl;


	/***************************************************************************
	 * DELETE FROM EMPTY LIST
	 **************************************************************************/

	cout << "DELETE FROM EMPTY LIST" << endl;
	cout << left << setw(85) << setfill('-') << "-" << endl;
	cout << setfill(' ');

	// PROC -- clears the lists
	doubleList.clearList();
	reversedDoubleList.clearList();

	// PROC -- attempts to delete from an empty list
	doubleList.deleteItem(double1);
	reversedDoubleList.deleteItem(double1);

	// OUTPUT -- displays the two linked lists
	cout << "INTEGER LINKED LIST:" << endl;
	doubleList.printList();

	cout << "REVERSED INTEGER LINKED LIST:" << endl;
	reversedDoubleList.printList();

	cout << endl << endl;


	return 0;
}
