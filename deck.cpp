#ifndef card_h
#define card_h
#include "deck.h"
#include "card.h"
#include <string>
using namespace std;

string suits[] = {"CLUBS", "HEARTS", "DIAMONDS", "SPADES"};

string ranks[] = {"ACE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "JACK", "QUEEN", "KING"};


void Deck::initializeDeck()
{
    for(int i = 0; i < SUIT_NUM; i++)
        for(int j = 0; j <RANK_NUM;j++)
        {
            deck[i*RANK_NUM+j].setSuit(static_cast<Suit>(i));
            deck[i*RANK_NUM+j].setRank(static_cast<Rank>(j));
        }
}
void Deck::shuffleDeck(Deck OG)
{
    int a = 0;
    int b = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if( i % 2 == 0)
        {
            deck[i] = OG.deck[a];
            a++;
        }
        else
        {
            deck[i] = OG.deck[b + HALF_SIZE];
            b++;
        }
    }

}
void Deck::printDeck()
{
    for(int i = 0; i < 52; i++)
    {
        cout << ranks[static_cast<int>(deck[i].getRank())] << " of " << suits[static_cast<int>(deck[i].getSuit())] << endl;
    }
}
bool Deck::compareDecks(Deck &OGDeck)
{
    bool comp = true;
    for (int i = 0; i < SUIT_NUM; i++)
        for(int j = 0; j <RANK_NUM;j++)
        {
            comp = (deck[i*RANK_NUM+j].getRank() == OGDeck.deck[i*RANK_NUM+j].getRank()) &&
            (deck[i*RANK_NUM+j].getSuit() == OGDeck.deck[i*RANK_NUM+j].getSuit());
            if(!comp){break;}
        }
    return comp;
}

#endif