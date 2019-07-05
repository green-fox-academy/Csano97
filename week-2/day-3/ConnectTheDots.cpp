#include "draw.h"

void dots(SDL_Renderer *gRenderer, int connect[][2]);
void draw(SDL_Renderer* gRenderer) {
    int connectRed[][2] = {{10, 10}, {290,  10}, {290, 290}, {10, 290}};
    int connectBlue[][2] = {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}};
    dots(gRenderer, connectRed);
}
void dots(SDL_Renderer *gRenderer, int connect[][2]){
    int x =0;
    int y = 0;
    int size;
    size = sizeof(connect) / sizeof(connect[0][0]);
    int size2;
    size2 = sizeof(connect) / sizeof(connect[0][1]);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size2; ++j) {
            x += connect[i][j];
            y += connect[i][j+1];
            SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
            SDL_RenderDrawLine(gRenderer, x, y, 200, 200);
        }
    }
    //SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    //SDL_RenderDrawLine(gRenderer, 0, 0, 200, 200);
}