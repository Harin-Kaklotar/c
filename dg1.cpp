#include<graphics.h>
main(){

int gd =DETECT, gm;
initgraph(&gd, &gm, "");

circle(200, 300, 100);
circle(200,300,50);

getch();
closegraph();
return 0;
}
