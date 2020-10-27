/*******************************************************************************
 * AUTHOR		  : Milan Bui
 * STUDENT ID 	  : #
 * ASSIGNMENT #14 : Linked List
 * CLASS		  : CS 1C
 * SECTION		  : MW: 5:00p - 7:20p
 * DUE DATE		  : 29 April 2019
 ******************************************************************************/
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
using namespace std;

/*******************************************************************************
 * LinkedList Class
 * 	 This class is a class template that represents a LinkedList object.
 * 	 It manages two attributes: *head and size
 *******************************************************************************/
template<class Type>
class LinkedList
{
private:
	struct Node
	{
		Type item;   // Information
		Node *next;  // Pointer to next element (link)
	};
	Node *head;      // Head of linked list (points to front of the list)
	int size;        // Size of the linked list (# of nodes)

public:
	// Operator overloading =
    const LinkedList<Type>& operator=(const LinkedList<Type>&);

	/******************************
	 ** CONSTRUCTOR & DESTRUCTOR **
	 ******************************/
	LinkedList ();
	~LinkedList();
	LinkedList(const LinkedList<Type>& otherList); // Copy Constructor

	/***************
	 ** MUTATORS **
	 ***************/
    void addFront(Type newItem);
	void addBack(Type newItem);
	void addMiddle(Type newItem);
	void deleteItem(Type item);
	void reverseList();
	void clearList();

	/***************
	 ** ACCESSORS **
	 ***************/
	void printList()const;
};

/*******************************************************************************
 * LinkedList();
 * 	 Constructor; Initializes attributes
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
template<class Type>
LinkedList<Type>::LinkedList()
{
	head = NULL;
	size = 0;
}

/*******************************************************************************
 * ~LinkedList();
 * 	 Destructor; Deallocates the memory
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
template<class Type>
LinkedList<Type>::~LinkedList()
{
	Node *tempPtr; // PROC - pointer that points to the list

	// Deallocates memory and clears the linked list.
	tempPtr = head;
	while(tempPtr != NULL)
	{
		head = head->next;
		delete tempPtr;

		tempPtr = head;
	}
}

/*******************************************************************************
 * LinkedList(const LinkedList<Type>& otherList);
 * 	 Constructor; Copy constructor
 * 	 Parameters: otherList        // IN - object being copied
 * 	 Return: none
 *******************************************************************************/
template<class Type>
LinkedList<Type>::LinkedList(const LinkedList<Type>& otherList) // IN - object being copied
{
	// Declare & Initialize variables
    Node *newNode;         // PROC -- pointer to create a node
    Node *tempPtr;         // PROC -- pointer to traverse the list
    size = otherList.size; // PROC -- size of list

    if(otherList.head == NULL) //otherList is empty
    {
		head = NULL;
	}
	else
	{
		// Points to the other list to be copied
		tempPtr = otherList.head;

		//copies the first node
		head = new Node;
		head->item = tempPtr->item;
		head->next = NULL;

		tempPtr = tempPtr->next;

		//copies the remaining list
		while(tempPtr != NULL)
		{
			// Adds to back
			newNode = new Node;
			newNode->item = tempPtr->item;
			newNode->next = NULL;
			tempPtr = tempPtr->next;
		}//end while
	}//end else
}

/*******************************************************************************
 * addFront(Type newItem);
 * 	 Mutator; Adds a node to the front
 * 	 Parameters: newItem (Type)       // IN - item being added
 * 	 Return: none
 *******************************************************************************/
template<class Type>
void LinkedList<Type>::addFront(Type newItem) // IN - item being added
{
	// Declare variables
    Node *newNode;         // PROC -- pointer to create a node
    Node *tempPtr;         // PROC -- pointer to head of list

	// Initialize variables
	newNode = NULL;
	tempPtr = NULL;
	tempPtr = head;

	// Allocates more memory
	newNode = new Node;

	// If memory was allocated
	if(newNode != NULL)
	{
		// Sets values
		newNode->item = newItem;
		newNode->next = NULL;

		if(tempPtr == NULL) // If list is empty
		{
			head = newNode;
		}
		else
		{
			newNode->next = tempPtr;
			head = newNode;
		}

		// Increments the # of items in the list
		size++;
	}
	else
	{
		cout << "Could not Add Item - OUT OF MEMORY!\n\n";
	}
}

/*******************************************************************************
 * addBack(Type newItem);
 * 	 Mutator; Adds a node to the back
 * 	 Parameters: newItem (Type)       // IN - item being added
 * 	 Return: none
 *******************************************************************************/
template<class Type>
void LinkedList<Type>::addBack(Type newItem) // IN - item being added
{
	// Declare variables
	Node *newNode;    // PROC - pointer pointing to node of new item
	Node *tail;       // PROC - pointer to list to find end of list


	// Initialize variables
	newNode = NULL;
	tail = NULL;

	// Allocates more memory
	newNode = new Node;

	cout << "Adding " << newItem << "..." << endl << endl;

	if(newNode != NULL) // If memory allocated
	{
		newNode->item = newItem;
		newNode->next = NULL;

		// Finds tail (end of list)
		if(head != NULL) // If list is not empty
		{
			tail = head;

			while(tail->next != NULL)
			{
				tail = tail->next;
			}

			// Adds node to list
			tail->next = newNode;
		}
		else
		{
			head = newNode;
		}


		// Increments the # of items in the list
		size++;
	}
	else
	{
		cout << "Could not Add Item - OUT OF MEMORY!\n\n";
	}
}

/*******************************************************************************
 * addMiddle(Type newItem);
 * 	 Mutator; Adds a node to the middle
 * 	 Parameters: newItem (Type)       // IN - item being added
 * 	 Return: none
 *******************************************************************************/
template<class Type>
void LinkedList<Type>::addMiddle(Type newItem) // IN - item being added
{
	// Declare variables
	Node *newNode;     // PROC - pointer pointing to node of new item
	Node *tempPtr;     // PROC - pointer to find middle of list
	int middle;        // PORC - the middle position in the list

	// Initialize variables
	newNode = NULL;
	tempPtr = NULL;

	newNode = new Node; // Allocates more memory

	cout << "Adding " << newItem << "..." << endl << endl;

	if(newNode != NULL) // If memory allocated
	{
		newNode->item = newItem;
		newNode->next = NULL;

		// Finds middle
		if(head != NULL) // If list is not empty
		{
			tempPtr = head;

			// Calculates middle
			middle = size/2;

			// Goes to middle
			for(int i = 1; i < middle; i++)
			{
				tempPtr = tempPtr->next;
			}

			// Adds new node
			newNode->next = tempPtr->next;
			tempPtr->next = newNode;
		}
		else
		{
			head = newNode;
		}


		// Increments the # of items in the list
		size++;
	}
	else
	{
		cout << "Could not Add Item - OUT OF MEMORY!\n\n";
	}
}

/*******************************************************************************
 * deleteItem(Type item);
 * 	 Mutator; Deletes a node
 * 	 Parameters: newItem (Type)       // IN - item being deleted
 * 	 Return: none
 *******************************************************************************/
template<class Type>
void LinkedList<Type>::deleteItem(Type item) // IN - item being deleted
{
	// Declare/Initialize variables
	Node *tempPtr;      // PROC - pointer to list to find item
	Node *trail;        // PROC - trails tempPtr
	bool found = false; // PROC - if the item is found

	tempPtr = NULL;
	trail = NULL;

	cout << "Deleting " << item << "..." << endl << endl;

	if(head != NULL)
	{
		tempPtr = head->next;
		trail = head;

		while((!found) && (tempPtr->next != NULL)) // while not empty and found
		{
			if(tempPtr->next->item == item) // If found
			{
				found = true;
			}

			trail = tempPtr;
			tempPtr = tempPtr->next;
		}

		if(found)
		{
			// Deletes item
			trail->next = tempPtr->next;
			delete tempPtr;
		}
		else
		{
			cout << "Could not Delete Item - ITEM NOT FOUND!\n\n";
		}
	}
	else
	{
		cout << "Could not Delete Item - LIST IS EMPTY!\n\n";
	}
}

/*******************************************************************************
 * clearList();
 * 	 Mutator; Clears list (deallocates memory)
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
template<class Type>
void LinkedList<Type>::clearList()
{
	Node *tempPtr; // PROC - pointer that points to the list

	tempPtr = NULL;

	// Deallocates memory and clears the linked list.
	tempPtr = head;
	while(tempPtr != NULL)
	{
		head = head->next;
		delete tempPtr;

		tempPtr = head;
	}
}

/*******************************************************************************
 * Operator overloading '='
 *******************************************************************************/
template<class Type>
const LinkedList<Type>& LinkedList<Type>::operator=(
   	 	 					const LinkedList<Type>& otherList)
{
	Node *tempPtr; //pointer to traverse the list.

	if(this != &otherList) //avoid self-copy
	{
		if(head != NULL)  //if the list is not empty, destroy the list
		{
			clearList();
		}

		if(otherList.head == NULL) //otherList is empty
		{
			head = NULL;
		}
		else
		{
			// Points to list to be copied
			tempPtr = otherList.head;

			while(tempPtr != NULL)
			{
				addBack(tempPtr->item);

				tempPtr = tempPtr->next;
			}//end while
		}//end else
	}//end else
	return *this;
}

/*******************************************************************************
 * reverseList();
 * 	 Mutator; Reverses nodes in list
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
template<class Type>
void LinkedList<Type>::reverseList()
{
	  if(head != NULL && head->next != NULL)
	  {
			Node* x = head;
			Node* y = head->next;
			Node* z = NULL;
			if(y->next != NULL)
			{
				z = y->next;
			}
			head->next = NULL;
			while(z->next != NULL)
			{
				y->next = x;
				x = y;
				y = z;
				z = z->next;
			}
			y->next = x;
			head = z;
			z->next = y;
	  }
}

/*******************************************************************************
 * printList()const;
 * 	 Accessor; Displays linked list
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
template<class Type>
void LinkedList<Type>::printList()const
{
	if(head == NULL)
	{
		cout << "Could not Display List - LIST IS EMPTY!\n\n";
	}
	else
	{
		Node *tempPtr; //pointer to traverse the list

		tempPtr = head;   //set current so that it points to head

		while(tempPtr != NULL) //while more data to print
		{
		   cout<<tempPtr->item << " ";
		   tempPtr = tempPtr->next;
		}

		cout << endl << endl;
	}
}

#endif /* LINKEDLIST_H_ */
