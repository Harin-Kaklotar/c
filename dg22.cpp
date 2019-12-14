#include<graphics.h>
// graphdefaults
main(){

int gd = DETECT, gm;

initgraph(&gd, &gm, "");

setcolor(RED);
setbkcolor(BLUE);

circle(250, 250, 50);

getch();
// Declaration: void graphdefaults();
graphdefaults();

getch();
closegraph();

return 0;

}
