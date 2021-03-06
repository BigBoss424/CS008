#include <stdlib.h>
#include "card.h"
#include <iostream>

const std::string SUIT[SUIT_MAX] = {"S", "H", "D", "C"};
const std::string RANK[RANK_MAX] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K",                                     "A"};
Card::Card(const int &suit, const int &rank) : _suit(suit), _rank(rank)
{

}

int Card::generate_suit()
{
    return rand() % (SUIT_MAX-1) + 0;
}

int Card::generate_rank()
{
    return rand() % (RANK_MAX-1) + 0;
}

std::string Card::Card2Str() const
{
    return SUIT[get_suit()] + RANK[get_rank()];
}

int Card::get_suit() const
{
    return _suit;
}

int Card::get_rank() const
{
    return _rank;
}

