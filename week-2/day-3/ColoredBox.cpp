#include "draw.h"
// Draw a box that has different colored lines on each edge.
// The center of the box should align with the center of the screen.

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 310, 300, 310, 400);
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 410, 300, 410, 400);
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0xFF, 0xFF);
    SDL_RenderDrawLine(gRenderer, 310, 300, 410, 300);
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 130, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 310, 400, 410, 400);
}
