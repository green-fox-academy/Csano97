#include "draw.h"
// Draw a green 100x100 square to the canvas' center.
void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    SDL_Rect fillRect = { 310, 310, 100, 100};
    SDL_RenderFillRect( gRenderer, &fillRect );
}