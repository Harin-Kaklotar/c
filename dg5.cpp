#include<graphics.h>
// circle
main(){

int gd = DETECT, gm;
initgraph(&gd, &gm, "");

//Declaration: void circle(int x, int y, int radius);
circle(100,100, 100);

int i = 0;
for(i ; i < 10; i++){
    circle(300, 200, 10*i);
}


getch();
closegraph();

return 0;

}
