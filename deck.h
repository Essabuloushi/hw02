#include <iostream>
#include <string>
#include "card.h"
#pragma once
using namespace std;
// //Enum of Suits and Rank
// enum Suit {CLUBS, HEARTS, DIAMONDS, SPADES};
// enum Rank {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
// const int SIZE = 52;    //Size of deck
// const int HALF_SIZE = 26;   //Used for shuffle
// const int SUIT_NUM = 4;     //Amount of suits
// const int RANK_NUM = 13;      //Amount of Ranks


class Deck
{
public:
    
    void shuffleDeck(Deck OGDeck);  //Shuffle functions
    void initializeDeck();
    void printDeck();
    bool compareDecks(Deck &OGDeck); //Compare function
    
private:

    Card deck[SIZE];    //Deck object initalized with size
    
};



#ifndef deck_h
#define deck_h


#endif /* CardDeck_h */
