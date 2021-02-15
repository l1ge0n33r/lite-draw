#include"includes.h"
#include"pixel.h"
#include"brushes.h"
#include"canvas.h"




int main()
{
    Canvas canvas;

    canvas.setResolution(1024, 1024);



    return 0;
}

    /*
    int width=1024, height=1024;
    std::cin >> width >>height;
    color **canvas = new color*[height];
    for (int i = 0; i < height; i++)
    {
        canvas[i] = new color[width];
    }

    //fillCanvas(canvas,{ 255,255,255 });
    
    for (int i = 0; i < height; ++i) {
        delete[] canvas[i];
    }
    delete[] canvas;
    */