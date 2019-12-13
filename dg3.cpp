#include<graphics.h>
// arc
main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, "");

// void arc(int x, int y, int stangle, int endangle, int radius);
//
//         90
//    180      0
//        270
//
arc(300,300,0,45, 100);

// to create full circle
arc(100,100, 0,360, 100);

getch();
closegraph();

return 0;
}
