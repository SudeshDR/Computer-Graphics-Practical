#include<iostream.h>
#include<graphics.h>
#include<conio.h>

void main()
{
    int x,y,x1,y1,x2,y2,tx,ty,x3,y3,x4,y4;
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    clrscr();
    cout<<"\n Enter 2 Lines End Points : ";
    cin>>x1>>y1>>x2>>y2;
    line(x1,y1,x2,y2);
    cout<<"\n Enter Translation Coordinates : ";
    cin>>x>>y;
    x3=x1+tx;
    y3=y1+ty;
    x4=x2+tx;
    y4=x2+ty;
    cout<<"\n Line After Transaltion ";
    line(x3,y3,x4,y4);
    getch();
    closegraph();
}
