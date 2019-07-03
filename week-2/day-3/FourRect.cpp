#include "draw.h"
// draw four different size and color rectangles.
// avoid code duplication.
void draw(SDL_Renderer* gRenderer) {
    int x = 25;
    int y = 25;
    int s = 50;
    int cr = 10;
    int cg = 10;
    int cb = 10;
    for (int i = 0; i < 4; ++i) {
        SDL_SetRenderDrawColor(gRenderer, cr, cg, cb, 0xFF);
        SDL_Rect fillRect = {x, y, s, s};
        SDL_RenderFillRect(gRenderer, &fillRect);
        x += 100;
        y+= 100;
        s += 200;
        cr += 5;
        cg += 20;
        cb += 7;
    }
}