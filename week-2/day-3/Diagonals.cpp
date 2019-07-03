#include <SDL_render.h>
#include "draw.h"
// Draw the canvas' diagonals.
// If it starts from the upper-left corner it should be green, otherwise it should be red.
void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 0, 0, 720, 720);
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 720, 0, 0, 720);

}

