#include<graphics.h>
// bar
main(){

int gd = DETECT, gm;


initgraph(&gd, &gm, "");

//Declaration: void bar(int left, int top, int right, int bottom);
bar(100, 100, 200, 200);

// 3dbar
//Declaration: void bar3d(int left, int top, int right, int bottom, int depth, int topflag);
bar3d(300,300, 400,400, 50, 1);

getch();

closegraph();

return 0;

}
