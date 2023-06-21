#ifndef card_h
#define card_h
#include "card.h"
Rank Card::getRank()const
{
    return rank;
}
Suit Card::getSuit()const
{
    return suit;
}
void Card::setRank(Rank newRank)
{
    rank = newRank;
}
void Card::setSuit(Suit newSuit)
{
    suit = newSuit;
}

#endif