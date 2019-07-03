#include "draw.h"
#include <cstdlib>

const int SCREEN_WIDTH = 720;
const int SCREEN_HEIGHT = 720;

// Create a square drawing function that takes 2 parameters:
// The square size, and the fill color,
// and draws a square of that size and color to the center of the canvas.
// Create a loop that fills the canvas with a rainbow of colored squares.
void fillwithsquares(SDL_Renderer *gRenderer, int size, int color);

void draw(SDL_Renderer *gRenderer)
{
    int size = 5;
    int color = 0;
    fillwithsquares(gRenderer, size, color );

}


void fillwithsquares(SDL_Renderer *gRenderer, int size, int color)
{
    int x = SCREEN_WIDTH / 2 - size;
    int y = SCREEN_HEIGHT / 2 - size;
    while (size < SCREEN_WIDTH && size < SCREEN_HEIGHT) {
        x = SCREEN_WIDTH / 2 - size / 2;
        y = SCREEN_HEIGHT / 2 - size / 2;
        SDL_SetRenderDrawColor(gRenderer, rand()%255, rand()%255, rand()%255, 0xFF);
        SDL_Rect SDL_RectEmpty = {x, y, size, size};
        SDL_RenderDrawRect(gRenderer, &SDL_RectEmpty);
        size += 1;
        color += 3;
    }
}