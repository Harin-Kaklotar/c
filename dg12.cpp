#include<graphics.h>

// use of floodfill algorithm to fill color

main(){

    int gd = DETECT, gm;
    int gResult;
    initgraph(&gd, &gm, "");


    gResult = graphresult();
    if(gResult != grOk){
        printf("Error %s", grapherrormsg(gResult));
        printf("\nEnter any key to exit the program");
        getch();
        exit(1);
    }


    setcolor(RED);
    circle(100, 100, 50);

    // Declaration: void floodfill(int x, int y, int border);
    floodfill(100, 100, RED);

    getch();

    closegraph();

    return 0;

}
