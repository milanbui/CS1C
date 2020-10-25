/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: 1129567
 * ASSIGNMENT #1: Deck of Cards
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 23 January 2019
 ******************************************************************************/
#ifndef CARDCLASS_H_
#define CARDCLASS_H_

// PREPROCESSOR DIRECTIVES
#include <iostream>
using namespace std;

// GLOBAL CONSTANTS

// TYPE DEFINITIONS AND ENUMERATED TYPES
enum suit{ CLUBS,     // Clubs    (card suit)
	       DIAMONDS,  // Diamonds (card suit)
		   HEARTS,    // Hearts   (card suit)
		   SPADES     // Spades   (card suit)
		 };

enum ranking{ ACE,    // Ace   (card rank)
	          KING,   // King  (card rank)
			  QUEEN,  // Queen (card rank)
			  JACK,   // Jack  (card rank)
			  TEN,    // Ten   (card rank)
			  NINE,   // Nine  (card rank)
			  EIGHT,  // Eight (card rank)
			  SEVEN,  // Seven (card rank)
			  SIX,    // Six   (card rank)
			  FIVE,   // Five  (card rank)
			  FOUR,   // Four  (card rank)
			  THREE,  // Three (card rank)
			  TWO     // Two   (card rank)
			};

struct cardDeck
{
	suit cardSuit;    // Card's suit
	ranking cardRank; // Card's rank
};

/*******************************************************************************
 * Card Class
 * 	 This class represents a Card object. It manages two attributes:
 * 	 originalDeck and deck.
 *******************************************************************************/
class Card
{
	public:
	/******************************
	 ** CONSTRUCTOR & DESTRUCTOR **
	 ******************************/
		Card();
		~Card();

		/***************
		 ** MUTATORS **
		 ***************/
		void initializeDeck();
		void shuffleDeck();

		/***************
		 ** ACCESSORS **
		 ***************/
		void printDeck()const;
		bool compareDecks()const;

	private:
		cardDeck originalDeck[52]; // Deck when first initialized
		cardDeck deck[52];         // Deck of cards
};

/*******************************************************************************
 * Card();
 * 	 Constructor; Has no function because there are no attributes to initialize
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * ~Card();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * initializeDeck();
 * 	 Mutator; Initializes the deck of cards (both originalDeck and deck)
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * shuffleDeck();
 * 	 Mutator; Shuffles deck using a perfect shuffle
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/

/*******************************************************************************
 * printDeck()const;
 * 	 Accessor; Outputs the current state of the deck to the console
 * 	 Parameters: none
 * 	 Return: none.
 *******************************************************************************/

/*******************************************************************************
 * compareDecks()const;
 * 	 Accessor; Compares the deck that was shuffled with the deck that wasn't to
 * 	 see if their configuration matches. (Compares deck with originalDeck)
 * 	 Parameters: none
 * 	 Return: same (bool) - whether or not the order of the cards is the same.
 *******************************************************************************/

// PROTOTYPES

#endif /* CARDCLASS_H_ */
