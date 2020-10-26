/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: #
 * ASSIGNMENT #3: Pointers
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 6 February 2019
 ******************************************************************************/

#ifndef NAMESPACE_H_
#define NAMESPACE_H_


namespace athleticEquipment
{
	struct Cart
	{
		std::string item;  // name of athletic equipment to buy
		int amount;        // number of athletic equipment to buy
	};

	const double taxRate = 0.0775;        // PROC/OUT - the tax rate
	const double nikeShoeCost = 189.99;   // PROC/OUT - cost of nike shoes
	const double shirtCost = 22.99;       // PROC/OUT - cost of under armour shirt
	const double brooksShoeCost = 125.44; // PROC/OUT - cost of brooks shoes
	const double asicsShoeCost = 115.88;  // PROC/OUT - cost of asics shoes
	const double shortCost = 45.77;       // PROC/OUT - cost of under armour shorts

	int nikeShoes = 39;                   // PROC/OUT - # of available nike shoes
	int shirt = 48;                       // PROC/OUT - # of available shirts
	int brooksShoes = 9;                  // PROC/OUT - # of available brooks shoes
	int asicsShoes = 44;                  // PROC/OUT - # of available asics shoes
	int shorts = 88;                      // PROC/OUT - # of available shorts
	double totalCost = 0;                 // PROC/OUT - total cost of purchase

	Cart* customersCart;                  // IN/OUT   - what customer wants to
	                                      //            buy and how many (pointer)
	int* totalItems;                      // IN       - size of array and total
	                                      //            different items customer
                                          //            wants to buy (pointer)
}

#endif /* NAMESPACE_H_ */
