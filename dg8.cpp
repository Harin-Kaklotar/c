#include<graphics.h>
// draw polyline shape
main(){

    int gd = DETECT, gm;
    int points1[]={320,150,420,300,250,300,320,150};
    int points2[] = {100,100,200,100,200,200,100,200,100,100};

    initgraph(&gd, &gm, "");

    //Declaration: void drawpoly( int num, int *polypoints );
    drawpoly(4, points1);
    drawpoly(5, points2);

    getch();

    closegraph();

    return 0;

}
