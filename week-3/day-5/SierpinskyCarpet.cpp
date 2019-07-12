#include "draw.h"
#include <SDL2_gfxPrimitives.h>
#include <vector>
#include <iostream>

class Point
{
public:
    const double x, y;

    Point(int x_, int y_) : x(x_), y(y_)
    {}

    Point operator+(const Point &b)
    {
        return Point(x + b.x, y + b.y);
    }

    Point operator/(const double &div)
    {
        return Point(x / div, y / div);
    }
};

void drawRectangle(SDL_Renderer *gRenderer, const Point &left_upper_corner, const int &width, const int &height,
                   bool filled = true)
{
    int depth = 0;
    for (int i = 0; i < 7; ++i) {
        depth += 1;
    }
    std::vector<std::vector<int>> colors = {
            {148, 0,   211, 255},
            {75,  0,   130, 255},
            {0,   0,   255, 255},
            {0,   255, 0,   255},
            {255, 255, 0,   255},
            {255, 127, 0,   255},
            {255, 0,   0,   255}
    };

    SDL_Rect r;
    r.x = left_upper_corner.x;
    r.y = left_upper_corner.y;
    r.w = width;
    r.h = height;


    if (filled)
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 255);
    else
        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 0);

    SDL_RenderFillRect(gRenderer, &r);
}

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 800;

void sierpinski_carpet(SDL_Renderer *gRenderer, Point a, int size, int size2, int depth)
{
    int divided_height = size / 3;
    int divided_width = size2 / 3;
    if (depth > 0) {
        drawRectangle(gRenderer, a, size, size2);
        drawRectangle(gRenderer, Point(a.x + divided_width, a.y + divided_height), divided_width, divided_height,
                      false);
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (!(j == 1 && i == 1)) {
                    sierpinski_carpet(gRenderer, Point(a.x + i * divided_width, a.y + j * divided_height),
                                      divided_width, divided_height, depth - 1);
                }


    }
}

void draw(SDL_Renderer *gRenderer)
{
    sierpinski_carpet(gRenderer, Point(20, 20), 300, 300, 5);
}