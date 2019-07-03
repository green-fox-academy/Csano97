#include "draw.h"

// Reproduce this:
// [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r3.png]
// Pay attention for the outlines as well
void draw(SDL_Renderer *gRenderer)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < 20; ++i) {
        SDL_SetRenderDrawColor(gRenderer, 118, 29, 150, 0xFF);
        SDL_Rect SDL_RectEmpty = {x, y, 25, 25};
        SDL_RenderDrawRect(gRenderer, &SDL_RectEmpty);
        SDL_SetRenderDrawColor(gRenderer, 153, 63, 186, 0xFF);
        SDL_Rect fillRect = {x, y, 23, 23};
        SDL_RenderFillRect(gRenderer, &fillRect);
        x += 25;
        y += 25;
    }
}