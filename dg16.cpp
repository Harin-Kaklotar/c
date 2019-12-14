#include<graphics.h>

main(){
int gd = DETECT, gm;
char *name;

initgraph(&gd, &gm, "");

name = getdrivername();

outtextxy(100,100, name);

getch();
closegraph();
return 0;
}
