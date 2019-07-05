#include "draw.h"

const int SCREEN_WIDTH = 650;
const int SCREEN_HEIGHT = 650;

void draw(SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    int size = 24;
    int m = 24;
    for (int i = 0; i < 100; ++i) {
        int p1[2] = {SCREEN_WIDTH / 2 - (size / 2) * i, i * m};
        int p2[2] = {SCREEN_WIDTH / 2 + (size / 2) * i, i * m};
        int p3[2] = {size * i, SCREEN_HEIGHT};
        int p4[2] = {SCREEN_WIDTH - size * i, SCREEN_HEIGHT};
        SDL_RenderDrawLine(gRenderer, p1[0], p1[1], p2[0], p2[1]);
        SDL_RenderDrawLine(gRenderer, p2[0], p2[1], p3[0], p3[1]);
        SDL_RenderDrawLine(gRenderer, p1[0], p1[1], p4[0], p4[1]);
        SDL_RenderDrawLine(gRenderer, p3[0], p3[1], p4[0], p4[1]);
    }
}