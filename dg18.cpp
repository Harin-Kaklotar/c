#include<graphics.h>
// getmaxx
main(){

int gd = DETECT, gm, max_x;
char a[100];

initgraph(&gd, &gm, "");

max_x = getmaxx();

sprintf(a, "Maximum X coordinate for current graphics mode and driver is = %d", max_x);

outtext(a);

getch();
closegraph();

return 0;

}
