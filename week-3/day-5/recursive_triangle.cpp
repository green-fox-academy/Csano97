#include "draw.h"
#include <SDL2_gfxPrimitives.h>
#include <vector>
#include <iostream>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 800;
void draw_recursive(SDL_Renderer *gRenderer, Sint16 x1, Sint16 y1, Sint16 x2, Sint16 y2, Sint16 x3, Sint16 y3, int depth)
{
    if (depth == 7) {
        return;
    }
    std::vector<std::vector<int>> colors = {
            {148, 0,   211, 255}, //violet
            {75,  0,   130, 255}, //indigo
            {0,   0,   255, 255},
            {0,   255, 0,   255}, //Blue
            {255, 255, 0,   255}, //yellow
            {255, 127, 0,   255}, // Orange
            {255, 0,   0,   255} //red
    };


            trigonRGBA(gRenderer, x1, y1, x2, y2, x3, y3, colors[depth][0], colors[depth][1], colors[depth][2], 0xFF);


        draw_recursive(gRenderer, x1, y1, x1 + ((x2 - x1) / 2), y1, x1 + ((x2 - x1) / 4), y1 + ((y3 - y1) / 2),
                       depth + 1);

        draw_recursive(gRenderer, x1 + ((x2 - x1) / 2), y1, x2, y2, x1 + ((x2 - x1) / 4 * 3), y1 + ((y3 - y1) / 2),
                       depth + 1);
        draw_recursive(gRenderer, x1 + ((x2 - x1) / 4), y1 + ((y3 - y1) / 2), x1 + ((x2 - x1) / 4 * 3),
                       y1 + ((y3 - y1) / 2), x3, y3, depth + 1);


}
void draw(SDL_Renderer* gRenderer)
{
    draw_recursive(gRenderer, 0, 0, SCREEN_WIDTH, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, 0);
}