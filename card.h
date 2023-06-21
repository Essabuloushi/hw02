#include <iostream>
#include <string>
#pragma once
using namespace std;
//Enum of Suits and Rank
enum Suit {CLUBS, HEARTS, DIAMONDS, SPADES};
enum Rank {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
const int SIZE = 52;    //Size of deck
const int HALF_SIZE = 26;   //Used for shuffle
const int SUIT_NUM = 4;     //Amount of suits
const int RANK_NUM = 13;      //Amount of Ranks

class Card
{
public:
    //Mutators
    void setSuit(Suit cardSuit);
    
    void setRank(Rank cardRank);

    //Accessors
    Rank getRank() const;
    
    Suit getSuit() const;

private:
    Suit suit;  //Private variables
    Rank rank;
};