#include "poker_game.h"

outcome_t who_is_the_winner(card_t *black, card_t *white)
{
    int final_outcome = DRAW;
  if(high_card(black, white) == BLACK_WINNER){
      final_outcome = BLACK_WINNER;
  } else if(high_card(black, white) == WHITE_WINNER){
      final_outcome = WHITE_WINNER;
  }
  return final_outcome;
}

outcome_t high_card(card_t* black, card_t* white){
    int winner = 0;
    int winner_two = 0;
    for (int i = 0; i < sizeof(black); ++i) {
        if (black[i].value > winner) {
            winner = black[i].value;
        }
    }
    for (int j = 0; j < sizeof(white); ++j) {
        if(white[j].value > winner_two){
            winner_two = white[j].value;
        }
    }
    if(winner > winner_two){
        return BLACK_WINNER;
    }else if(winner < winner_two){
        return WHITE_WINNER;
    }
    return DRAW;
}