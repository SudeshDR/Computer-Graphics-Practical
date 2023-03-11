#include<graphics.h>
#include<conio.h>
void main()
{int gd=DETECT,gm;
int xmax,ymax;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
xmax=getmaxx();
ymax=getmaxy();
line(xmax/2,0,xmax/2,ymax);
line(0,ymax/2,xmax,ymax/2);
setbkcolor(BLUE);
setcolor(YELLOW);
circle(170,125,100);
outtextxy(170,125,"CIRCLE");
setcolor(YELLOW);
rectangle(58,251,304,392);
outtextxy(100,300,"RECTANGLE");
setcolor(YELLOW);
arc(500,150,45,135,100);
outtextxy(500,135,"ARC");
setcolor(YELLOW);
ellipse(500,300,0,360,75,25);
outtextxy(500,300,"ELLIPSE");
getch();
}

