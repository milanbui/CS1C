/*******************************************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: 1129567
 * ASSIGNMENT #1: Deck of Cards
 * CLASS		: CS 1C
 * SECTION		: MW: 5:00p - 7:20p
 * DUE DATE		: 23 January 2019
 ******************************************************************************/
#include <iostream>
using namespace std;

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
Card::Card()
{

}

/*******************************************************************************
 * ~Card();
 * 	 Destructor; Does not perform any specific function
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
Card::~Card()
{

}

/*******************************************************************************
 * initializeDeck();
 * 	 Mutator; Initializes the deck of cards (both originalDeck and deck)
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
void Card::initializeDeck()
{
	// Declaring variables
	int i;  // PROC - loop control variable
	int j;  // PROC - controls incrementing of suit
	int k;  // PROC - controls incrementing of rank

	// Initialize variables
	j = 0;
	k = 0;

	// PROC -- loops 52 times to initialize entire deck
	for(i = 0; i < 52; i++)
	{

		// PROC -- Initializes suit for both deck and originalDeck to same suit
		deck[i].cardSuit = static_cast<suit>(CLUBS+j);
		originalDeck[i].cardSuit = static_cast<suit>(CLUBS+j);

		// PROC -- Initializes rank for both deck and originalDeck to same rank
		deck[i].cardRank = static_cast<ranking>(ACE+k);
		originalDeck[i].cardRank = static_cast<ranking>(ACE+k);

		// Increments k to move to next card rank
		k++;

		// If k has gotten to 13 (all ranks have been used)
		if(k == 13)
		{
			// Increments j to move to next card suit
			j++;

			// Resets k to 0 to start at beginning of rank for new suit
			k = 0;
		}

	}
}

/*******************************************************************************
 * shuffleDeck();
 * 	 Mutator; Shuffles deck using a perfect shuffle
 * 	 Parameters: none
 * 	 Return: none
 *******************************************************************************/
void Card::shuffleDeck()
{
	// Declare variables
	cardDeck left[26];  // PROC - left side (first half) of deck

	cardDeck right[26]; // PROC - right side (last half) of deck

	int i;              // PROC - loop control variable & variable controlling
	                    //        deck index
	int j;              // PROC - loop control variable and variable controlling
	                    //        left and right index


	// PROCESING -- loops 26 times to initialize left and right decks
	for(i = 0; i < 26; i++)
	{
		left[i].cardSuit = deck[i].cardSuit;
		left[i].cardRank = deck[i].cardRank;

		right[i].cardSuit = deck[26+i].cardSuit;
		right[i].cardRank = deck[26+i].cardRank;
	}

	// Resets i to 0
	i = 0;

	// PROCESSING -- sets every other card (starting from 0) to left deck
	for(j = 0; j < 26; j++)
	{
		deck[i].cardSuit = left[j].cardSuit;
		deck[i].cardRank = left[j].cardRank;

		// Increments i by two to skip every other card
		i = i + 2;

	}

	// Resets i to 1
	i = 1;

	// PROCESSING -- sets every other card (starting from 1) to left deck
	for(j = 0; j < 26; j++)
	{
		deck[i].cardSuit = right[j].cardSuit;
		deck[i].cardRank = right[j].cardRank;

		// Increments i by two to skip every other card
		i = i + 2;
	}
}

/*******************************************************************************
 * printDeck()const;
 * 	 Accessor; Outputs the current state of the deck to the console
 * 	 Parameters: none
 * 	 Return: none.
 *******************************************************************************/
void Card::printDeck()const
{

	// PROC -- loops through deck of cards
	for(int i = 0; i < 52; i++)
	{
		// OUTPUT -- outputs the card's suit (converts from enum of type suit)
		switch(deck[i].cardSuit)
		{
		case CLUBS:
			cout << "CLUBS";
			break;
		case DIAMONDS:
			cout << "DIAMONDS";
			break;
		case HEARTS:
			cout << "HEARTS";
			break;
		case SPADES:
			cout << "SPADES";
			break;
		default:
			cout << "Should not run.";
			break;
		}

		cout << " ";

		// OUTPUT -- outputs the card's rank (converts from enum of type ranking)
		switch(deck[i].cardRank)
		{
		case ACE:
			cout << "ACE";
			break;
		case KING:
			cout << "KING";
			break;
		case QUEEN:
			cout << "QUEEN";
			break;
		case JACK:
			cout << "JACK";
			break;
		case TEN:
			cout << "10";
			break;
		case NINE:
			cout << "9";
			break;
		case EIGHT:
			cout << "8";
			break;
		case SEVEN:
			cout << "7";
			break;
		case SIX:
			cout << "6";
			break;
		case FIVE:
			cout << "5";
			break;
		case FOUR:
			cout << "4";
			break;
		case THREE:
			cout << "3";
			break;
		case TWO:
			cout << "2";
			break;
		default:
			cout << "Should not run.";
			break;
		}

		cout << endl;
	}
}

/*******************************************************************************
 * compareDecks()const;
 * 	 Accessor; Compares the deck that was shuffled with the deck that wasn't to
 * 	 see if their configuration matches. (Compares deck with originalDeck)
 * 	 Parameters: none
 * 	 Return: same (bool) - whether or not the order of the cards is the same.
 *******************************************************************************/
bool Card::compareDecks()const
{
	// Declare variables
	int i;     // PROC       - loop control variable & index of decks
	bool same; // PROC & OUT - whether or not the order of the cards is the same

	// Initialize variables
	i = 0;
	same = true;

	// PROC -- loops through entire deck
	for(i = 0; i < 52; i++)
	{
		// PROC -- if the suits or the ranks of the cards to match, then the
		//         order is not the same, so sets same to false
		if((deck[i].cardSuit != originalDeck[i].cardSuit) ||
		   (deck[i].cardRank != originalDeck[i].cardRank))
		{
			same = false;
		}

	}

	// OUTPUT -- returns same
	return same;
}
