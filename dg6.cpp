#include<graphics.h>
//clear device
// print text on graphics screen
main(){

int gm = DETECT, gd;

initgraph(&gm, &gd, "");

outtext("Press any key to draw shapes");
getch();


circle(300,200, 100);
line(100,100, 200,100);
arc(100, 100, 0, 180, 50);
bar(200,200, 300,300);

outtext("Press any key to clear the graphics screen");
getch();
//Declaration: void cleardevice();
cleardevice();

getch();

closegraph();

return 0;

}
