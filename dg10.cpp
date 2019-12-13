#include<graphics.h>
// fillellipse
main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // void fillellipse(int x, int y, int xradius, int yradius);
    fillellipse(200,200, 100, 50);

    getch();
    closegraph();
}
