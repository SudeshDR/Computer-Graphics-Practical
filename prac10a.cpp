#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,maxx,maxy,key0,i;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	maxx=getmaxx();
	maxy=getmaxy();
	while(!kbhit());
	{for(i=0;i<maxy;i++)
	{cleardevice();
	settextstyle(3,2,5);
	outtextxy(maxx/2,i,"3067_SUDESH");
	delay(100);
	}}
	getch();
}

