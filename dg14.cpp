#include<graphics.h>

// getbkcolor
main(){

int gd = DETECT, gm;

int bkcolor;
char a[100];

initgraph(&gd, &gm, "");

bkcolor=getbkcolor();
sprintf(a, "Current background color code is %d", bkcolor);
outtext(a);

//setcolor(0);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(1);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(2);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(3);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(4);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(5);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(5);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(7);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(8);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(9);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(10);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(11);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(12);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(13);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(14);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);
//
//setcolor(15);
//bkcolor=getbkcolor();
//sprintf(a, "Current background color code is %d", bkcolor);
//outtext(a);

getch();
closegraph();
return 0;
}
