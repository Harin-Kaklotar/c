#include<graphics.h>
// close graphics
main(){
    int gm =DETECT, gd;
    initgraph(&gm, &gd, "");

    outtext("Press any key to close the graphics mode");

    getch();

    //Declaration: void closegraph();
    closegraph();

    return 0;
}
