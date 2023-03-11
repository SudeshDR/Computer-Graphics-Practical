#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t\t*************************HUT*****************\t\t");
setcolor(YELLOW);
rectangle(174,201,276,393);
outtextxy(180,203,"SUDESH HUT");
rectangle(201,299,246,393);
rectangle(276,201,440,393);
line(174,201,224,120);
line(274,201,224,120);
line(224,120,405,120);

line(405,120,440,201);
circle(230,340,7);
circle(351,279,18);
circle(351,279,43);
getch();
closegraph();
}
