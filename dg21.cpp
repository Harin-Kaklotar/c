#include<graphics.h>
// getx, gety get current x and y coordinate position
main(){

int gd = DETECT, gm;
char a[50];

initgraph(&gd, &gm, "");

sprintf(a, "Current position of x = %d", getx());
outtext(a);

sprintf(a, "Current position of y = %d", gety());
outtextxy(0,20, a);

getch();
closegraph();

return 0;

}
