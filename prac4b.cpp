#include<iostream.h>
#include<graphics.h>
#include<conio.h>

void drawline(int x0,int y0,int x1,int y1)
{  int dx,dy,p,x,y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while(x<x1)
    {
	if(p>=0)
	{
	    putpixel(x,y,7);
	    y=y+1;
	    p=p+2*dy-2*dx;
	}
	else{
	    putpixel(x,y,7);
	    p=p+2*dy;
	}
	x=x+1;
    }
}

void main()
{
    int x0,y0,x1,y1;
    int gd = DETECT,gm,error;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

   // setbkcolor(WHITE);
    setcolor(CYAN);

    cout<<"\n Enter  Co-Ordinates Of  First Point : ";
    cin>>x0>>y0;
    cout<<"\n Enter  Co-Ordinates Of  Secont Point : ";
    cin>>x1>>y1;

    drawline(x0,y0,x1,y1);
    getch();
    closegraph();
}
