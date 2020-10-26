/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #3: Pointers
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 6 February 2019
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include "namespace.h"
#include "printHeader.h"
using namespace std;
using namespace athleticEquipment;
/*******************************************************************************
 * ATHLETIC EQUIPTMENT PURCHASE
 * _____________________________________________________________________________
 *
 * This program will output an inventory list of available athletic equipment
 * for purchase and prompt the customer for the amount of different products
 * they wish to purchase. It will also prompt the customer for the name of the
 * products they wish to purchase and how many of each. It will then output
 * the receipt of their purchase with the names of the products they purchased,
 * how many they purchased, the total before tax, and the total after a 7.75%
 * tax. Finally, it will display the updated inventory after their purchase. The
 * program will use the amount of different products they wish to purchase to
 * dynamically create and array.
 * _____________________________________________________________________________
 * INPUT:
 *	    *totalItems      - size of array and total different items customer
 *	                       wants to buy
 *	    *customersCart[] - an array of a structs of what the user wants to buy
 *	                       and how many
 *
 * OUTPUT:
 *	    *customersCart[] - an array of a structs of what the user wants to buy
 *	                       and how many
 *	    nikeShoeCost     - the cost of nike basketball shoes
 *	    shirtCost        - the cost of under armour t-shirts
 *	    brooksShoeCost   - the cost of brooks running shoes
 *	    asicsShoeCost    - the cost of asics running shoes
 *	    shortCost        - the cost of under armour shorts
 *	    nikeShoes        - the amount of available nike basketball shoes
 *	    shirt            - the amount of available under armour t-shirts
 *	    brooksShoes      - the amount of available brooks running shoes
 *	    asicsShoes       - the amount of available asics running shoes
 *	    shorts           - the amount of available under armour shorts
 *	    totalCost        - the total cost of the purchase
 *
 ******************************************************************************/
int main()
{
	// Declare variables
	int index;    // PROC - LCV and index to track place in cart array
	int i;        // PROC - LCV and index to keep track of place in product name
	int length;   // PROC - length of product name
	bool invalid; // PROC - whether input is valid or not



	// OUTPUT -- outputs class header
	cout << printHeader("Pointers", 3);


	// OUTPUT -- outputs program description
	cout << "This program will:" << endl;
	cout << "1. Display an inventory list of available athletic equipment"
			"\n   for purchase." << endl;
	cout << "2. Prompt the customer for the amount of different products "
			"\n   they wish to purchase, the name of each product, and the "
			"\n   amount of each product they wish to purchase." << endl;
	cout << "3. Output a receipt with the name of the products they purchased,"
			"\n   the amount of each product purchased, the total before tax, "
			"\n   and the total after a 7.75% tax." << endl;
	cout << "4. Display the updated inventory list after the purchase has"
			"\n    been made." << endl << endl;




	// OUTPUT -- outputs current inventory (equipment name, cost, and quanitity)
	cout << "CURRENT INVENTORY:" << endl << endl;
	cout << left << setw(25) << "Name of Equipment";
	cout << left << setw(12) << "Cost";
	cout << left << "Quantity" << endl;

	cout << setfill('-') << setw(45) << "-" << endl;
	cout << setfill(' ');

	cout << left << setw(25) << "Nike Basketball Shoes";
	cout << right << "$" << setw(8) << nikeShoeCost;
	cout << right << setw(8) << nikeShoes << endl;

	cout << left << setw(25) << "Under Armour T-Shirt";
	cout << right << "$" << setw(8) << shirtCost;
	cout << right << setw(8) << shirt << endl;

	cout << left << setw(25) << "Brooks Running Shoes";
	cout << right << "$" << setw(8) << brooksShoeCost;
	cout << right << setw(8) << brooksShoes << endl;

	cout << left << setw(25) << "Asics Running Shoes";
	cout << right << "$" << setw(8) << asicsShoeCost;
	cout << right << setw(8) << asicsShoes << endl;

	cout << left << setw(25) << "Under Armour Shorts";
	cout << right << "$" << setw(8) << shortCost;
	cout << right << setw(8) << shorts << endl << endl;




	// INPUT -- prompts customer for # of different products they wish to buy
	do
	{
		invalid = false;
		cout << "There are five product available. "
				"\nHow many different products do you wish to purchase (1 - 5): ";

		totalItems = new int;
		cin >> *totalItems;
		cin.ignore(1000, '\n');

		// PROC -- checks for input failure and boundaries
		if(cin.fail())
		{
			cout << "**** Please input a NUMBER between 0 and 5 ****" << endl;
			cout << "\n";
			cin.clear();
			cin.ignore(1000, '\n');

			invalid = true;
		}
		else if((*totalItems < 0) || (*totalItems > 5))
		{
			cout << "**** The number " << *totalItems << left
				 << setw(27 - (to_string(*totalItems).length()))
				 << " is an invalid entry" << "****" << endl;
			cout << "**** Please input a number between 0 and 5 ****" << endl;
			cout << "\n";

			invalid = true;
		}

	}while(invalid);


	cout << endl;


	// PROC -- dynamically creates array of struct of Cart
	customersCart = new Cart[*totalItems];

	for(index = 0; index < *totalItems; index++)
	{
		do
		{
			invalid = false;

			// INPUT -- prompts user for name of product they want to buy
			cout << "Please enter the name of the item you would like to purchase"
					"\nas shown above: ";
			getline(cin, customersCart[index].item);

			// PROC -- changes the input to all lowercase
			length = customersCart[index].item.length();

			for(i = 0; i < length; i++)
			{
				customersCart[index].item[i] = tolower(customersCart[index].item[i]);
			}


			// PROC -- If input is not one of the items in the inventory
			if(    (customersCart[index].item != "nike basketball shoes")
				&& (customersCart[index].item != "under armour t-shirt" )
				&& (customersCart[index].item != "brooks running shoes" )
				&& (customersCart[index].item != "asics running shoes"  )
				&& (customersCart[index].item != "under armour shorts"  ))
			{
				cout << "Invalid entry. Item either spelled incorrectly or does"
						"\nnot exist."
					 << endl << endl;
				invalid = true;
			}

		}while(invalid);



		do
		{
			invalid = false;

			// INPUT -- prompts user for # of that item they want to buy
			cout << "Please enter how many you would like to purchase: ";
			cin >> customersCart[index].amount;
			cin.ignore(1000, '\n');

			// PROC -- if input is higher than what is in the inventory
			if(    ((customersCart[index].item == "nike basketball shoes")
					    && (customersCart[index].amount > nikeShoes  ))
				|| ((customersCart[index].item == "under armour t-shirt"
						&& (customersCart[index].amount > shirt      )))
				|| ((customersCart[index].item == "brooks running shoes"
						&& (customersCart[index].amount > brooksShoes)))
				|| ((customersCart[index].item == "asics running shoes"
						&& (customersCart[index].amount > asicsShoes )))
				|| ((customersCart[index].item == "under armour shorts"
						&& (customersCart[index].amount > shorts     ))))
			{
				cout << "Invalid entry. Not enough of that item is in stock."
					 << endl;
				invalid = true;
			}
			// If input is less than 0
			else if(customersCart[index].amount < 0)
			{
				cout << "Invalid entry. Please enter a positive number." << endl;
				invalid = true;
			}
		}while(invalid);


		// PROC -- changes the amount in inventory of the item the customer wants
		//         to purchase, calculates the cost, and adds the cost to the
		//         total cost
		if(customersCart[index].item == "nike basketball shoes")
		{
			nikeShoes -= customersCart[index].amount;
			totalCost += (customersCart[index].amount * nikeShoeCost);
		}
		else if(customersCart[index].item == "under armour t-shirt")
		{
			shirt -= customersCart[index].amount;
			totalCost += (customersCart[index].amount * shirtCost);
		}
		else if(customersCart[index].item == "brooks running shoes")
		{
			brooksShoes -= customersCart[index].amount;
			totalCost += (customersCart[index].amount * brooksShoeCost);
		}
		else if(customersCart[index].item == "asics running shoes")
		{
			asicsShoes -= customersCart[index].amount;
			totalCost += (customersCart[index].amount * asicsShoeCost);
		}
		else if(customersCart[index].item == "under armour shorts")
		{
			shorts -= customersCart[index].amount;
			totalCost += (customersCart[index].amount * shortCost);
		}

		cout << endl;
	}

	cout << endl;

	// OUTPUT -- outputs receipt
	cout << "RECEIPT" << endl;
	cout << setw(40) << setfill('-') << '-' << endl;
	cout << setfill(' ');

	cout << left << setw(25) << "- Product Name -";
	cout << right << setw(13) << "- Amount -" << endl;

	// Outputs the items and the amount of each item the customer bought
	for(index = 0; index < *totalItems; index++)
	{
		cout << left << setw(25) << customersCart[index].item;
		cout << right << setw(13) << customersCart[index].amount << endl;
	}
	cout << endl;

	// Outputs the total cost before tax
	cout << left << setw(25) << "TOTAL COST:" << "$";
	cout << right << setw(13) << fixed << setprecision(2) << totalCost << endl
		 << endl;

	cout << left << setw(26) <<  "TAX:";
	cout << right << setw(13) << "total x 7.75%" << endl << endl;

	// PROC -- calculate the cost with the tax
	totalCost += (totalCost * taxRate);

	// Outputs the cost after tax
	cout << left << setw(25) <<  "FINAL COST:" <<"$";
	cout << right << setw(13) << fixed << setprecision(2) << totalCost << endl
		 << endl << endl;



	// OUTPUT -- outputs the updated inventory after the purchase
	cout << "CURRENT INVENTORY:" << endl << endl;
	cout << left << setw(25) << "Name of Equipment";
	cout << left << setw(12) << "Cost";
	cout << left << "Quantity" << endl;

	cout << setfill('-') << setw(45) << "-" << endl;
	cout << setfill(' ');

	cout << left << setw(25) << "Nike Basketball Shoes";
	cout << right << "$" << setw(8) << nikeShoeCost;
	cout << right << setw(8) << nikeShoes << endl;

	cout << left << setw(25) << "Under Armour T-Shirt";
	cout << right << "$" << setw(8) << shirtCost;
	cout << right << setw(8) << shirt << endl;

	cout << left << setw(25) << "Brooks Running Shoes";
	cout << right << "$" << setw(8) << brooksShoeCost;
	cout << right << setw(8) << brooksShoes << endl;

	cout << left << setw(25) << "Asics Running Shoes";
	cout << right << "$" << setw(8) << asicsShoeCost;
	cout << right << setw(8) << asicsShoes << endl;

	cout << left << setw(25) << "Under Armour Shorts";
	cout << right << "$" << setw(8) << shortCost;
	cout << right << setw(8) << shorts << endl;

	// De allocates memory
	delete totalItems;
	delete []customersCart;

	return 0;
}



