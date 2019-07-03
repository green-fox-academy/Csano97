#include "draw.h"
// draw a red horizontal line to the canvas' middle.
// draw a green vertical line to the canvas' middle.
void draw(SDL_Renderer* gRenderer) {
    for (int i = 0; i < 100; ++i) {
        SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
        SDL_RenderDrawLine(gRenderer, 0, 360, 720, 360);
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
        SDL_RenderDrawLine(gRenderer, 360, 0, 360, 720);
    }

}