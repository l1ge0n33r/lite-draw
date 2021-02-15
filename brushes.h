#pragma once
#include"pixel.h"

short square_brush(int cx, int cy, int radius, color col, color** canvas)
{
    int x = cx - radius;
    int y = cy - radius;
    for (x; x < radius * 2; x++)
    {
        for (y; y < radius * 2; y++)
        {
            if (x > 0 && y > 0)
            {
                canvas[y][x] = col;
            }
        }
    }
    return 0;
}

short round_brush(int x, int y, int radius, color col, color** canvas)
{
    //round_algorithm(x, y, radius, col);


    return 0;
}