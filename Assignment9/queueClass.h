/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #9: Templates
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 1 April 2019
 ******************************************************************************/
#ifndef QUEUECLASS_H_
#define QUEUECLASS_H_
#include <iostream>
using namespace std;

template<class Type>
struct QueueNode
{
	Type info;             // Information (any type of input)
	QueueNode<Type> *next; // Pointer pointing to next element
};

/*******************************************************************************
 * Queue Class
 * 	 This class represents a Queue object. It manages two attributes: *head and
 * 	 *tail
 *******************************************************************************/
template<class Type>
class Queue
{
public:
	/******************************
	 ** CONSTRUCTOR & DESTRUCTOR **
	 ******************************/
	Queue();
	Queue(const Queue &otherItem); // Copy constructor
	~Queue();

	/***************
	 ** MUTATORS **
	 ***************/
	void enQueue(Type newItem);
	Type deQueue();

	/***************
	 ** ACCESSORS **
	 ***************/
	bool isEmpty()const;
	Type front()const;
	int size()const;
	bool isFull()const;
	void displayQueue()const;
private:
	const int MAX = 10;    // Node limit
	QueueNode<Type> *head; // Pointer pointing to front of the Queue
	QueueNode<Type> *tail; // Pointer pointing to back of the Queue
	int _size;             // Queue size (number of nodes)
};

/*******************************************************************************
 * Queue();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
template<class Type>
Queue<Type>::Queue()
{
	head = NULL;
	tail = NULL;
	_size = 0;
}

/*******************************************************************************
 * Queue(const Queue &otherItem);
 * 	 Constructor; Copy constructor
 * 	 Parameters: otherItem  // IN - object being copied
 * 	 Return: none
 *******************************************************************************/
template<class Type>
Queue<Type>::Queue(const Queue &otherItem) // IN - object being copied
{
	// Declare and Initialize variables
	int item;               // IN - item being input
	QueueNode<Type> *temp;  // IN - temp  pointer for node

	cout << "COPY CONSTRUCTOR CALLED" << endl << endl;

	head = NULL;
	tail = NULL;
	_size = 0;

	temp = otherItem.head;

	while(temp != NULL)
	{
		item = temp->info;

		enQueue(item);

		temp = temp->next;
	}

}

/*******************************************************************************
 * ~Queue();
 * 	 Destructor; Deallocates the memory (destroys Queue)
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
template<class Type>
Queue<Type>::~Queue()
{
	QueueNode<Type> *temp;

	while(head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}

	tail = NULL;

	cout << "DESTRUCTOR CALLED" << endl;
}

/*******************************************************************************
 * addQueue(Type newItem);
 * 	 Mutator; Adds a new element to the back of the queue
 * 	 Parameters: newItem (Type) // IN - new item being added
 * 	 Return: none
 *******************************************************************************/
template<class Type>
void Queue<Type>::enQueue(Type newItem)
{
	// Declare variable
	QueueNode<Type> *newNode; // PROC - temporary pointer pointing to new item

	if(isFull())
	{
		cout << "Inserting \"" << newItem << "\"..." << endl;
		cout << "CANNOT ADD TO A FULL QUEUE" << endl << endl;
	}
	else
	{
		// Initialize variable
		newNode = new QueueNode<Type>;

		// INPUT -- inputting new item
		newNode->info = newItem;

		// PROC -- putting element in back
		newNode->next = NULL;

		// If queue empty
		if(head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = tail->next;
		}

		newNode = NULL;

		_size++;

		cout << "Inserting \"" << newItem << "\"..." << endl << endl;
	}
}

/*******************************************************************************
 * removeFront();
 * 	 Mutator; Removes element from front of queue
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
template<class Type>
Type Queue<Type>::deQueue()
{
	// Declare variables
	QueueNode<Type> *temp; // PROC - temp pointer pointing to head
	Type _info;

	// Point temp to head of list
	temp = head;

	// Points head to next element
	head = head->next;

	_info = temp->info;

	// Deallocates memory
	delete temp;

	// If list is empty
	if(head == NULL)
	{
		tail = NULL;
	}

	_size--;


	return _info;
}

/*******************************************************************************
 * isEmpty();
 * 	 Accessor; Checks if queue is empty
 * 	 Parameters: none
 * 	 Return: true (if empty) or false (if not empty)
 *******************************************************************************/
template<class Type>
bool Queue<Type>::isEmpty()const
{
	return(head == NULL);
}

/*******************************************************************************
 * peek();
 * 	 Accessor; Returns element at front of queue
 * 	 Parameters: none
 * 	 Return: head->info (item at top of queue)
 *******************************************************************************/
template<class Type>
Type Queue<Type>::front()const
{
	return(head->info);
}


/*******************************************************************************
 * size();
 * 	 Accessor; Returns size of queue
 * 	 Parameters: none
 * 	 Return: _size
 *******************************************************************************/
template<class Type>
int Queue<Type>::size()const
{
	return _size;
}


/*******************************************************************************
 * isFull();
 * 	 Accessor; Returns if queue is full or not
 * 	 Parameters: none
 * 	 Return: true or false
 *******************************************************************************/
template<class Type>
bool Queue<Type>::isFull()const
{
	return (_size == MAX);
}

/*******************************************************************************
 * displayQueue();
 * 	 Accessor; Displays entire queue without deleting queue
 * 	 Parameters: none
 * 	 Return: none
 * 	         -> displays elements of queue
 *******************************************************************************/
template<class Type>
void Queue<Type>::displayQueue()const
{
	// Declare variables
	QueueNode<Type> *temp; // PROC/OUT - temp pointer pointing to head of deque

	if(isEmpty())
	{
		cout << "NOTHING TO DISPLAY - QUEUE IS EMPTY" << endl;
	}
	else
	{
		cout << "QUEUE:" << endl;
		// Initialize variable
		temp = head;

		// While deque isn't empty
		while(temp != NULL)
		{
			// OUTPUT -- outputs element
			cout << temp->info << endl;

			// Points temp to next element
			temp = temp->next;
		}

		// De allocates temp
		delete temp;
		temp = NULL;
	}

}

#endif /* QUEUECLASS_H_ */
