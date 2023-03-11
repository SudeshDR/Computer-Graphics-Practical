#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundryfill(int x, int y, int f_color, int b_color)
{
if(getpixel(x,y)!= b_color && getpixel(x,y)!= f_color)
{
delay(20);
putpixel(x,y,f_color);
boundryfill(x+1,y,f_color,b_color);
boundryfill(x,y+1,f_color,b_color);
boundryfill(x-1,y,f_color,b_color);
boundryfill(x,y-1,f_color,b_color);
}
}
void main()
{
int gd= DETECT, gm,r;
int x,y;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
clrscr();
cout<<"\nEnter x & y position for circle: ";
cin>>x>>y;
cout<<"\nEnter radius of a circle:";
cin>>r;
circle(x,y,r);
boundryfill(x,y,4,15);
getch();
closegraph();
}

