#include "draw.h"
// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Draw at least 3 lines with that function using a loop.
void center(SDL_Renderer *gRenderer, int, int);
void draw(SDL_Renderer *gRenderer) {
    int x  = 7;
    int y = 7;
    for (int i = 0; i < 3; ++i) {
        center(gRenderer, x, y);
        x += 125;
        y += 125;
    }
}
void center(SDL_Renderer *gRenderer, int x, int y){
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, x, y, 512, 310);
}