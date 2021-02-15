#include"pixel.h"

struct res
{
    int x;
    int y;
    res(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
};

class Canvas 
{
    int height, width;
    color** _canvas = new color * [height];

public :

    void setResolution(int x, int y)
    {
        y = height;
        x = width;
    }

    res getResolution()
    {
        res resolution(height, width);
        
        return resolution;
    }
    
    Canvas() {
        
        for (int i = 0; i < height; i++)
        {
            _canvas[i] = new color[width];
        }
    }
    
    
    void fillCanvas(color** canvas, color BG)
    {
        for (size_t i = 0; i < (sizeof(canvas) / sizeof(canvas[0])); i++)for (size_t j = 0; j < (sizeof(canvas[0]) / (sizeof(canvas) / sizeof(canvas[0]))); j++)
        {
            canvas[i][j] = BG;
        }
    }


    ~Canvas()
    {
        for (int i = 0; i < height; ++i) {
            delete[] _canvas[i];
        }
        delete[] _canvas;
    }
};