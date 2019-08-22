#include "unity.h"
#include "poker_game.h"

void test_poker_black(void)
{
    card_t black[5] = {{CLUBS, TWO}, {DIAMONDS, FIVE}, {SPADES, KING}, {HEARTS, THREE}, {CLUBS, SIX}};
    card_t white[5] = {{CLUBS, TWO}, {DIAMONDS, SIX}, {SPADES, JACK}, {HEARTS, FOUR}, {CLUBS, EIGHT}};
   TEST_ASSERT_EQUAL_INT(BLACK_WINNER, who_is_the_winner(&black, &white));

}
void test_poker_white(void)
{
    card_t black[5] = {{CLUBS, TWO}, {DIAMONDS, FIVE}, {SPADES, JACK}, {HEARTS, THREE}, {CLUBS, SIX}};
    card_t white[5] = {{CLUBS, TWO}, {DIAMONDS, SIX}, {SPADES, KING}, {HEARTS, FOUR}, {CLUBS, EIGHT}};

    TEST_ASSERT_EQUAL_INT(WHITE_WINNER, who_is_the_winner(&black, &white));

}
void test_poker_DRAW(void)
{

    card_t black[5] = {{CLUBS, TWO}, {DIAMONDS, SIX}, {SPADES, JACK}, {HEARTS, FOUR}, {CLUBS, EIGHT}};
    card_t white[5] = {{CLUBS, TWO}, {DIAMONDS, SIX}, {SPADES, JACK}, {HEARTS, FOUR}, {CLUBS, EIGHT}};


    TEST_ASSERT_EQUAL_INT(DRAW, who_is_the_winner(&black, &white));

}