#ifndef POKER_POKER_GAME_H
#define POKER_POKER_GAME_H

typedef enum value{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
}value_t;

typedef enum symbol{
    CLUBS,
    SPADES,
    HEARTS,
    DIAMONDS
}symbol_t;

typedef struct card{
    symbol_t symbol;
    value_t value;
}card_t;

typedef enum outcome{
    BLACK_WINNER,
    WHITE_WINNER,
    DRAW
}outcome_t;


outcome_t who_is_the_winner(card_t* black, card_t* white);

outcome_t high_card(card_t* black, card_t* white);

#endif //POKER_POKER_GAME_H
