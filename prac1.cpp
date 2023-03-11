#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{

int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(BLUE);
putpixel(200,100,RED);
line(150,150,450,150);
line(150,150,450,150);
circle(250,400,50);
rectangle(300,300,250,250);
arc(400,400,0,120,50);
ellipse(100,100,0,360,100,25);

getch();
closegraph();
}
