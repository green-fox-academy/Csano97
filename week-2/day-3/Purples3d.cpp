#include "draw.h"

// Reproduce this:
// [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r4.png]
// Pay attention for the outlines as well
void draw(SDL_Renderer *gRenderer)
{
    int x = 0;
    int y = 0;
    int s1 = 10;
    int s2 = 9;
    for (int i = 0; i < 6; ++i) {
        SDL_SetRenderDrawColor(gRenderer, 118, 29, 150, 0xFF);
        SDL_Rect SDL_RectEmpty = {x, y, s1, s1};
        SDL_RenderDrawRect(gRenderer, &SDL_RectEmpty);
        SDL_SetRenderDrawColor(gRenderer, 153, 63, 186, 0xFF);
        SDL_Rect fillRect = {x, y, s2, s2};
        SDL_RenderFillRect(gRenderer, &fillRect);
        x += s1;
        y += s2;
        s1 *= 2;
        s2 *= 2;

    }
}