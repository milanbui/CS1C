/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #9: Templates
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 1 April 2019
 ******************************************************************************/
#include <iostream>
#include "printHeader.h"
#include "queueClass.h"
using namespace std;
/*******************************************************************************
 * MANIPULATING EMPLOYEES USING FRIEND FUNCTIONS AND OVERLOADED OPERATORS
 * _____________________________________________________________________________
 *
 *  This program will create four queue objects (2 integer, 1 character,
 *  1 double) using classes and templates. Inserts and deletes items in the
 *  queue. Tests the copy constructor, isFull, and isEmpty. Displays the queue.
 * _____________________________________________________________________________
 * INPUT:
 *	    charQueue   - character queue
 *	    intQueue    - integer queue
 *	    doubleQueue - double queue
 *	    testQueue   - queue to test copy constructor, isFull, and isEmpty
 *
 * OUTPUT:
 *	    charQueue   - character queue
 *	    intQueue    - integer queue
 *	    doubleQueue - double queue
 *	    testQueue   - queue to test copy constructor, isFull, and isEmpty
 *
 ******************************************************************************/
int main()
{
	// Declaring variables
	Queue<char>   charQueue;   // IN/OUT - character queue
	Queue<int>    intQueue;    // IN/OUT - integer queue
	Queue<double> doubleQueue; // IN/OUT - double queue

	cout << printHeader("Templates", 9);

	// OUTPUT -- outputs description of program
	cout << "This program will:" << endl;
	cout << "1. Create four queue objects (2 integer, 1 character, 1 double)"
			"\n   using classes and templates" << endl;
	cout << "2. Insert and delete items in the queue" << endl;
	cout << "3. Test the copy constructor, isFull, and isEmpty" << endl;
	cout << "4. Displays the queue after changes" << endl << endl << endl;

	/***************************************************************************
	 * CHARACTER QUEUE
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "CHARACTER QUEUE" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl;


	// INSERT -- inserting items into queue
	charQueue.enQueue('a');
	charQueue.enQueue('b');
	charQueue.enQueue('c');
	charQueue.enQueue('d');
	charQueue.enQueue('e');
	charQueue.enQueue('f');

	// OUTPUT -- displays queue
	charQueue.displayQueue();
	cout << endl << endl;

	// PROCESSING -- deleting items from queue
	for(int i = 0; i < 3; i++)
	{
		if(charQueue.isEmpty())
		{
			cout << "CANNOT DELETE FROM AN EMPTY QUEUE" << endl << endl;
			break;
		}
		cout << "Deleting \"" << charQueue.deQueue() << "\"..." << endl << endl;
	}

	// OUTPUT -- display queue
	charQueue.displayQueue();
	cout << endl << endl;

	// INSERT -- inserting items into queue
	charQueue.enQueue('g');
	charQueue.enQueue('h');
	charQueue.enQueue('i');
	charQueue.enQueue('j');

	// OUTPUT -- display queue
	charQueue.displayQueue();
	cout << endl << endl;

	// PROCESSING -- deleting items from queue
	for(int i = 0; i < 8; i++)
	{
		if(charQueue.isEmpty())
		{
			cout << "CANNOT DELETE FROM AN EMPTY QUEUE" << endl << endl;
			break;
		}
		cout << "Deleting \"" << charQueue.deQueue() << "\"..." << endl << endl;
	}

	// OUTPUT -- display queue
	charQueue.displayQueue();
	cout << endl << endl;

	/***************************************************************************
	 * INTEGER QUEUE
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "INTEGER QUEUE" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl;

	// INSERT -- inserting items into queue
	intQueue.enQueue(1);
	intQueue.enQueue(2);
	intQueue.enQueue(3);
	intQueue.enQueue(4);
	intQueue.enQueue(5);
	intQueue.enQueue(6);

	// OUTPUT -- display queue
	intQueue.displayQueue();
	cout << endl << endl;

	// PROCESSING -- deleting items from queue
	for(int i = 0; i < 2; i++)
	{
		if(intQueue.isEmpty())
		{
			cout << "CANNOT DELETE FROM AN EMPTY QUEUE" << endl << endl;
			break;
		}
		cout << "Deleting \"" << intQueue.deQueue() << "\"..." << endl << endl;
	}

	// OUTPUT -- display queue
	intQueue.displayQueue();
	cout << endl << endl;

	// INSERT -- inserting items into queue
	intQueue.enQueue(7);
	intQueue.enQueue(8);
	intQueue.enQueue(9);

	// OUTPUT -- display queue
	intQueue.displayQueue();
	cout << endl << endl;

	// PROCESSING -- deleting items from queue
	for(int i = 0; i < 4; i++)
	{
		if(intQueue.isEmpty())
		{
			cout << "CANNOT DELETE FROM AN EMPTY QUEUE" << endl << endl;
			break;
		}
		cout << "Deleting \"" << intQueue.deQueue() << "\"..." << endl << endl;
	}

	// OUTPUT -- display queue
	intQueue.displayQueue();
	cout << endl << endl;


	/***************************************************************************
	 * DOUBLE QUEUE
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "DOUBLE QUEUE" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl;

	// INSERT -- inserting items into queue
	doubleQueue.enQueue(1.1);
	doubleQueue.enQueue(2.1);
	doubleQueue.enQueue(3.3);
	doubleQueue.enQueue(4.4);
	doubleQueue.enQueue(5.5);
	doubleQueue.enQueue(6.6);

	// OUTPUT -- display queue
	doubleQueue.displayQueue();
	cout << endl << endl;

	// PROCESSING -- deleting items from queue
	if(doubleQueue.isEmpty())
	{
		cout << "CANNOT DELETE FROM AN EMPTY QUEUE" << endl << endl;
	}
	else
	{
		cout << "Deleting \"" << doubleQueue.deQueue() << "\"..." << endl << endl;
	}

	// OUTPUT -- display queue
	doubleQueue.displayQueue();
	cout << endl << endl;

	// INSERT -- inserting items into queue
	doubleQueue.enQueue(7.7);
	doubleQueue.enQueue(8.8);

	// OUTPUT -- display queue
	doubleQueue.displayQueue();
	cout << endl << endl;

	// PROCESSING -- deleting items from queue
	for(int i = 0; i < 5; i++)
	{
		if(doubleQueue.isEmpty())
		{
			cout << "CANNOT DELETE FROM AN EMPTY QUEUE" << endl << endl;
			break;
		}
		cout << "Deleting \"" << doubleQueue.deQueue() << "\"..." << endl << endl;
	}

	// OUTPUT -- display queue
	doubleQueue.displayQueue();
	cout << endl << endl;


	/***************************************************************************
	 * INTEGER QUEUE - TESTING COPY CONSTRUCTOR, ISEMPTY, ISFULL
	 **************************************************************************/

	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << "INTEGER QUEUE - TESTING COPY CONSTRUCTOR, ISEMPTY, ISFULL" << endl;
	cout << left << setw(85) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	cout << endl;

	// OUTPUT -- display queue
	cout << "INTEGER ";
	intQueue.displayQueue();
	cout << endl << endl;

	Queue<int> testQueue(intQueue);

	// OUTPUT -- display queue
	cout << "TEST ";
	testQueue.displayQueue();
	cout << endl << endl;

	// INSERT -- inserting items into queue
	testQueue.enQueue(10);
	testQueue.enQueue(11);
	testQueue.enQueue(12);
	testQueue.enQueue(13);
	testQueue.enQueue(14);
	testQueue.enQueue(15);
	testQueue.enQueue(16);
	testQueue.enQueue(17);

	// OUTPUT -- display queue
	cout << "TEST ";
	testQueue.displayQueue();
	cout << endl << endl;

	// PROCESSING -- deleting items from queue
	for(int i = 0; i < 11; i++)
	{
		if(testQueue.isEmpty())
		{
			cout << "CANNOT DELETE FROM AN EMPTY QUEUE" << endl << endl;
			break;
		}

		cout << "Deleting \"" << testQueue.deQueue() << "\"..." << endl << endl;
	}

	// OUTPUT -- display queue
	cout << "TEST ";
	testQueue.displayQueue();
	cout << endl << endl;

	return 0;
}


