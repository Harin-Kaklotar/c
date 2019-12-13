#include<graphics.h>
// example of graphics line
// create deferent shapes using line
main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, "");

// triangle
line(100,100,200,100);
line(100,100, 150, 150);
line(150,150, 200,100);


setcolor(BLUE);
// rectangle
line(300,300, 500,300);
line(300,300, 300,400);
line(500,300, 500,400);
line(500,400, 300,400);


getch();

closegraph();

return 0;
}
