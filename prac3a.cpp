#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){

int gd = DETECT,gm;
int midx,midy;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

midx = getmaxx()/2;
midy = getmaxy()/2;
setbkcolor(BLUE);
setcolor(WHITE);
circle(midx,midy,200);
setcolor(RED);
circle(midx,midy,150);
setcolor(YELLOW);
circle(midx,midy,100);
setcolor(GREEN);
circle(midx,midy,50);
setcolor(WHITE);
rectangle(midx-100,midy-100,midx+100,midy+100);
rectangle(midx-250,midy-175,midx+250,midy+175);
ellipse(midx,midy,0,360,50,100);
line(0,0,getmaxx(),getmaxy());
line(0,getmaxy(),getmaxx(),0);
getch();
closegraph();
return ;
}
