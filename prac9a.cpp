#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
void flood(int,int,int,int);  
void main()  
{  
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:/TURBOC3/bgi");
     circle(50,50,10);
   // rectangle(50,50,250,250);
    flood(55,55,14,0);

   getch();
}
void flood(int x,int y,int fillColor, int defaultColor)
{
    if(getpixel(x,y)==defaultColor)
    {
	delay(5);
        putpixel(x,y,fillColor);  
        flood(x+1,y,fillColor,defaultColor);  
        flood(x-1,y,fillColor,defaultColor);  
        flood(x,y+1,fillColor,defaultColor);  
        flood(x,y-1,fillColor,defaultColor);  
    }  
}  

