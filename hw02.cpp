//Essa Buloushi                 CS1C
//
/**************************************************************
 * DECK OF CARDS
 * ------------------------------------------------------------
 * This program creates two decks of cards using classes. Then they are compared,
 * shuffled, and recompared.
 * ------------------------------------------------------------
 * INPUTS
 * Deck - deck
 * Deck - deck2
 * int     - count
 *
 * * ************************************************************/
#include <iostream>
#include <iomanip>
#include "deck.h"
#include "card.h"
using namespace std;

int main()
{
    //Initialize objects created
    Deck deck;
    Deck deck2;
    int count = 0;  //Used for while loop when counting how many times until card shuffles to original set
    
    
    deck.initializeDeck();
    deck2.initializeDeck();
    
    //Compare functions and print original decks
    cout << "*******************************************";
    cout << "\nBoth decks initialized. Printing..." << endl;
    cout << "Deck 1: ";
    deck.printDeck();
    cout << "\n___________________________________________" << endl;
    cout << "Deck 2: ";
    deck2.printDeck();

   cout << "\nComparing Deck 1 and Deck 2: " << endl;
   if (deck.compareDecks(deck2) == true)   //Compare function
       cout << "Deck 1 and Deck 2 follow the same sequence." << endl;
   else
       cout << "Deck 1 and Deck 2 do not follow the same sequence." << endl;


   //Starts shuffle and compares
   cout << "*******************************************" << endl;
   cout << "Starting shuffle on Deck 1. " << endl;
   deck.shuffleDeck(deck); //Shuffle function
   cout << "\nPrinting Deck 1 after initial shuffle: " << endl;
   deck.printDeck();
   cout << endl;
   cout << "___________________________________________" << endl;
   cout << "Program will now perform shuffles until met with original sequence..." << endl;

   //While loops forces loop to run until the card set is back to original
   while (deck.compareDecks(deck2) == false)
   {
       deck.shuffleDeck(deck);
       count++;
   }
   cout << "Shuffled " << (count+1) << " times in order to meet original set." << endl;
   cout << "Deck 1 is now: " << endl;
   deck.printDeck();


   return 0;
}
