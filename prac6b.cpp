#include<iostream.h>
#include<graphics.h>
#include<conio.h>

void main()
{
    int x1,y1,x2,y2,x,y,x3,y3,x4,y4;
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    clrscr();
    cout<<"\n Enter 2 Lines End Points : ";
    cin>>x1>>y1>>x2>>y2;
    line(x1,y1,x2,y2);
    cout<<"\n Enter Scaling Coordinates : ";
    cin>>x>>y;
    x3=x1*x;
    y3=y1*y;
    x4=x2*x;
    y4=y2*y;
    cout<<"\n Line After Scaling ";
    //line(x3,y3,x2,y2);
    line(x1,y1,x4,y4);
    getch();
    closegraph();
}


