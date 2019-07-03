#include "draw.h"

// create a function that draws one square and takes 1 parameters:
// the square size
// and draws a square of that size to the center of the canvas.
// draw at least 3 squares with that function.
// the squares should not be filled otherwise they will hide each other
// avoid code duplication.
void rectangle(SDL_Renderer *gRenderer, int s);

void draw(SDL_Renderer *gRenderer)
{
    int s = 50;
    for (int i = 0; i < 3; ++i) {
        rectangle(gRenderer, s);
        s += 50;
    }

}

void rectangle(SDL_Renderer *gRenderer, int s)
{
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_Rect SDL_RectEmpty = {270, 310, s, s};
    SDL_RenderDrawRect(gRenderer, &SDL_RectEmpty);
}