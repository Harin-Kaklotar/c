#include<graphics.h>
// getcolor
main(){

int gd = DETECT, gm;
int colorCode;
char c[100];

initgraph(&gd, &gm, "");

//setcolor(10);
//Declaration : int getcolor();
colorCode = getcolor();

sprintf(c, "Current color is %d", colorCode);

outtext(c);

getch();
closegraph();
return 0;

}
