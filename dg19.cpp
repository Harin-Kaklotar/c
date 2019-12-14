#include<graphics.h>

main(){

int gd = DETECT, gm, max_y;
char a[100];

initgraph(&gd, &gm, "");

max_y = getmaxy();

sprintf(a, "Maximum Y coordinate for current graphics mode and driver is %d", max_y);

outtextxy(100, 100, a);

getch();
closegraph();
return 0;

}
