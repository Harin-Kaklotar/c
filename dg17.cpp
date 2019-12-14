#include<graphics.h>
// getmaxcolor
main(){

int gd = DETECT, gm, mxclr;
char a[100];
initgraph(&gd, &gm, "");

mxclr = getmaxcolor();
sprintf(a, "Maximum number of color for current graphics mode and driver = %d", mxclr+1);
outtextxy(100,100,a);

getch();
closegraph();
return 0;

}
