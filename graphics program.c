#include<stdio.h>
#include<graphics.h>
#include<conio.h>
 int main()
 {
     int gd= DETECT. gm;
     initgraph(&gd. &gm."C:\\tc\\bgi");
     outtextxy(10,20, "Graphics source code example.");
     circle(200,200,50);
     setcolor(BLUE);
     line(100,100,300,100);
     getch();
     closegraph();
     return 0;
 }
