/*******************************************************************************
 * AUTHOR		: Milan Bui
 * ASSIGNMENT #1        : Deck of Cards
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 23 January 2019
 ******************************************************************************/
#include "printHeader.h"
#include "cardClass.h"
using namespace std;
/*******************************************************************************
 * INITIALIZE, SHUFFLE, AND DISPLAY DECK OF CARDS
 * _____________________________________________________________________________
 *
 * This program will initialize a deck of cards and perform a perfect shuffle.
 * It will shuffle the cards until the deck returns to its original
 * configuration. The program will also output the initial deck, the deck after
 * the first shuffle, the final deck, and the amount of times the deck was
 * shuffled.
 * _____________________________________________________________________________
 * INPUT:
 *	    none
 *
 * OUTPUT:
 *	    cardDeck     - the members of the deck of cards (suits and ranks)
 *	    shuffleCount - the number of times the deck was shuffled
 *
 ******************************************************************************/
int main()
{
	// Declaring variables
	Card cardDeck;     // PROC & OUT - deck of cards

	bool samePosition; // PROC       - if the deck matches its original
	                   //              configuration
	int  shuffleCount; // PROC & OUT - the number of times the deck was shuffled

	// Initialize variable
	shuffleCount = 0;

	// OUTPUT -- outputs header (including name, class and assignment details)
	cout << printHeader("Deck of Cards", 1);


	// OUTPUT -- outputs description of the program
	cout << "This program will:" << endl;
	cout << "1. Initialize a deck of cards" << endl;
	cout << "2. Perform a perfect shuffle until the cards return to their "
			"original positions" << endl;
	cout << "3. Display the initial deck, shuffled deck, and the final deck"
		 << endl;
	cout << "4. Display the number of perfect shuffles that returned the deck "
			"to its original configuration" << endl;
	cout <<  endl;

	// PROCESSING -- initializes the deck
	cardDeck.initializeDeck();

	// OUTPUT -- outputs the deck after being initialized
	cout << "The original deck:" << endl;
	cardDeck.printDeck();
	cout << endl;

	// PROCESSING -- shuffles the deck
	cardDeck.shuffleDeck();

	// OUTPUT -- outputs the deck after the first shuffle
	cout << "The deck after the first perfect shuffle:" << endl;
	cardDeck.printDeck();
	cout << endl;

	// PROC -- increments the shuffle by one since the deck was shuffled
	shuffleCount++;

	// PROC -- checks to see if the deck matches its original configuration
	samePosition = cardDeck.compareDecks();

	// PROC -- while the deck is different from its original configuration,
	//         it shuffles
	while(!samePosition)
	{

		// PROCESSING -- shuffles the deck
		cardDeck.shuffleDeck();

		// PROC -- checks to see if the deck matches its original configuration
		samePosition = cardDeck.compareDecks();

		// PROC -- increments the shuffle by one since the deck was shuffled
		shuffleCount++;
	}

	// OUTPUT -- outputs the final deck (after its returned to its original
	//           configuration
	cout << "The final deck:" << endl;
	cardDeck.printDeck();
	cout << endl;

	// OUTPUT -- outputs the number of times the deck was shuffled before returning
	//           to its original configuration
	cout << "The deck returned to its original configuration after " << shuffleCount
		 << " perfect shuffles." << endl;

	return 0;

}
