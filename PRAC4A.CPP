#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<math.h>

void ddaline(int x1,int y1,int x2,int y2);
void main()
{
    int x1,x2,y1,y2;
    int gd = DETECT,gm,xmid,ymid;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setbkcolor(GREEN);
    setcolor(RED);

    cout<<"\n Enter x1 , y1 : ";
    cin>>x1>>y1;
    cout<<"\n Enter x2 , y2 : ";
    cin>>x2>>y2;

    line(0,240,640,240);
    line(320,0,320,480);

    outtextxy(590,250," X - axis ");
    outtextxy(300,0," Y - axis ");

    ddaline(x1,x2,y1,y2);

    getch();
    closegraph();
}
void ddaline(int x1,int y1,int x2,int y2)
{
    int dx,dy,step,k;
    float xinc,yinc,x,y;

    dx=x2-x1;
    dy=y2-y1;
    x=x1;
    y=y1;

    if(abs(dx)>=abs(dy))
{	step = abs(dx);}
    else
{	step=abs(dy);}

    xinc = dx/step;
    yinc = dy/step;

    putpixel(ceil(x)+320,240-ceil(y),RED);
    outtextxy(320+x,240-y,"( X1 , Y1 )");

    for(k=1;k<=step;k++)
    {
	x=x+xinc;
	y=y+yinc;

	delay(100);
	putpixel(320+ceil(x),240-ceil(y),RED);
    }
    outtextxy(320+x,240-y,"(X2 - Y2)");

}

