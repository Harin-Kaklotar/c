#include<graphics.h>

// ellipse
main(){

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // void ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius);
    ellipse(100, 100, 0, 360, 50, 100);
    ellipse(300, 300, 0, 360, 100, 50);
    ellipse(250, 250, 90,270, 50, 100);

    getch();
    closegraph();

    return 0;
}
