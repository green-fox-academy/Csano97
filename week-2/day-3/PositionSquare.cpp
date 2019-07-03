#include "draw.h"
// create a function that draws one square and takes 2 parameters:
// the x and y coordinates of the square's top left corner
// and draws a 50x50 square from that point.
// draw at least 3 squares with that function.
// avoid code duplication.
void square(SDL_Renderer *gRenderer, int x, int y);
void draw(SDL_Renderer* gRenderer) {
    int x = 125;
    int y =100;
    for (int i = 0; i < 3; ++i) {
        square(gRenderer, x, y);
        x += 100;
        y += 100;
    }
}
void square(SDL_Renderer *gRenderer, int x, int y){
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_Rect fillRect = {x, y, 50, 50};
    SDL_RenderFillRect(gRenderer, &fillRect);
}