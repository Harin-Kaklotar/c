#include<graphics.h>
// getpixel color
main(){

int gd = DETECT, gm, xy_color;
char a[50];

initgraph(&gd, &gm, "");

xy_color = getpixel(0, 0);

sprintf(a,"color of pixel at (0,0) = %d", xy_color);
outtextxy(100,100,a);

getch();
closegraph();

return 0;

}
