#ifndef CARD_H
#define CARD_H

#include <string>

const int SUIT_MAX(4);
const int RANK_MAX(13);

class Card
{
    friend class Deck;
public:
    explicit Card();
    explicit Card(const int &suit, const int &rank);

    std::string Card2Str() const;

private:
    int generate_suit();
    int generate_rank();
    int get_suit() const;
    int get_rank() const;
    int _suit;
    int _rank;
};
#endif