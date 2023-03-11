#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>

int main()
{

    int gd = DETECT,gm;
    int xmax,ymax;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    setbkcolor(BLUE);
    xmax = getmaxx();
    ymax = getmaxy();
    line(xmax/2,0,xmax/2,ymax);
    line(0,ymax/2,xmax,ymax/2);
    getch();
    closegraph();
    return 0;
}
