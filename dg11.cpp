#include<graphics.h>

// fillpoly  , same as drawpoly
main(){

    int graphics_drivers = DETECT, graphics_modes;
    int points1[] = {100,100,200,100,200,200,100,200,100,100};

    initgraph(&graphics_drivers, &graphics_modes, "");

    fillpoly(5, points1);

    getch();

    closegraph();

    return 0;
}
