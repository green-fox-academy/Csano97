#include "draw.h"
#include <iostream>
#include <vector>
void drawRectangle(SDL_Renderer *, int, int, int, int, int depth);
void drawCarpet(SDL_Renderer* gRenderer);

void draw(SDL_Renderer* gRenderer)
{
    drawCarpet(gRenderer);
}
void drawCarpet(SDL_Renderer* gRenderer)
{
    drawRectangle(gRenderer, 0, 0, 800, 800, 0);
}

void drawRectangle(SDL_Renderer *gRenderer, int x1, int y1, int a, int b, int depth)
{
    if (depth == 6){
        return;
    }
    std::vector<std::vector<int>> colors = {
            {75, 0, 130},
            {0, 0, 128},
            {135, 206, 250},
            { 0, 255, 0},
            {255, 255, 0},
            {255, 127, 0},
            {255, 0 , 0}
    };
    SDL_SetRenderDrawColor(gRenderer, colors[depth][0], colors[depth][1], colors[depth][2], 0xFF);
    SDL_Rect fillRect = {(x1 + a) / 3, (y1 + b) / 3, a / 3, b / 3};
    SDL_RenderFillRect(gRenderer, &fillRect);
    drawRectangle(gRenderer, x1, y1, a / 3, b / 3, depth + 1);
    drawRectangle(gRenderer, x1 + a, y1, a / 3, b / 3, depth + 1);
    drawRectangle(gRenderer, x1 + 2 * a, y1, a / 3, b / 3, depth + 1);
    drawRectangle(gRenderer, x1, y1 + b, a / 3, b / 3, depth + 1);
    drawRectangle(gRenderer, x1, y1 + 2 * b, a / 3, b / 3, depth + 1);
    drawRectangle(gRenderer, x1 + a, y1 + 2 * b, a / 3, b / 3, depth + 1);
    drawRectangle(gRenderer, x1 + 2 * a, y1 + 2 * b, a / 3, b / 3, depth + 1);
    drawRectangle(gRenderer, x1 + 2 * a, y1 + b, a / 3, b / 3, depth + 1);
}