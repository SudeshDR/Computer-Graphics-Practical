#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    int x1,y1,x2,y2,x,y,xn,yn;
    double r11,r12,r21,r22,th;
    clrscr();
    cout<<"Enter 2 Line End Points : ";
    cin>>x1>>y1>>x2>>y2;
    line(x1,y1,x2,y2);
    cout<<"Enter The Angle : ";
    cin>>th;

    r11 = cos((th*3.1428)/180);
    r12 = sin((th*3.1428)/180);
    r21 = (-sin((th*3.1428)/180));
    r22 = (-cos((th*3.1428)/180));
    xn = ((x2*r11) - (y2 * r12 ));
    yn = ((x2 * r21) + (y2 * r22));
    //clrscr();
    cout<<"\nLine After Rotation ";
    line(x1,y1,xn,yn);
    getch();
    closegraph();
}
