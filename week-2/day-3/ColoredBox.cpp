#include "draw.h"
// Draw a box that has different colored lines on each edge.
// The center of the box should align with the center of the screen.

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 462, 300, 462, 400);
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 562, 300, 562, 400);
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0xFF, 0xFF);
    SDL_RenderDrawLine(gRenderer, 462, 300, 562, 300);
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 130, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 462, 400, 562, 400);
}
