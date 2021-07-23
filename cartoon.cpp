#include <iostream>
#include <graphics.h>
#include <windows.h>

int main()
{
	initwindow(1200,1200);
	int gd =DETECT, gm;
	int x=50;
//	settextstyle(BOLD_FONT,HORIZ_DIR,3);
//	rectangle(300,179,550,210);
//	outtextxy(360,250,"Loading...");
	for(int j=0;j<1;j++)
	{
		
		
//		for(int i=0;i<30;i++)
//		{
//			setcolor(3);
//			rectangle(580,479,510,610);
//			delay(x);
//		}
		for(int i=1;i<7;i++)
		{
			setcolor(rand());
			circle(470,750,20-i);
			delay(x);
			setcolor(rand());
			circle(490,750,20-i);
			delay(x);
			setcolor(rand());
			circle(510,750,20-i);
			delay(x);
			setcolor(rand());
			circle(530,750,20-i);
			delay(x);
			setcolor(rand());
			circle(550,750,20-i);
			delay(x);
			setcolor(rand());
			circle(570,750,20-i);
			delay(x);
			setcolor(rand());
			circle(590,750,20-i);
			delay(x);
			setcolor(rand());
			circle(610,750,20-i);
			delay(x);
			setcolor(rand());
			circle(630,750,20-i);
			delay(x);
			setcolor(rand());
			circle(530,750,20-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(300,450,20-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(820,450,20-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(300,450,100-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(820,450,100-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(550,520,500-i);
			delay(x);
		}
		for(int i=1;i<15;i++)
		{
			int y=550;
			int z = 550;
			setcolor(rand());
			circle(z,y+30,20-i);
			delay(x);
			setcolor(rand());
			circle(z,y+40,20-i);
			delay(x);
			setcolor(rand());
			circle(z,y+50,20-i);
			delay(x);
			setcolor(rand());
			circle(z,y+60,20-i);
			delay(x);
			setcolor(rand());
			circle(z,y+70,20-i);
			delay(x);
			setcolor(rand());
			circle(z,y+80,20-i);
			delay(x);
			setcolor(rand());
			circle(z,y+90,20-i);
			delay(x);
			setcolor(rand());
			circle(z,y+100,20-i);
			delay(x);
			setcolor(rand());
			circle(z,y+110,20-i);
			delay(x);
			setcolor(rand());
			circle(z,y+120,20-i);
			delay(x);
		}
	}
	for(int i=0;i<7;i++)
	{
			setcolor(5);
			rectangle(150,340,410,570);
			delay(x);
			setcolor(3);
			rectangle(700+10,340+10,950-10,570-10);
			delay(x);
			setcolor(4);
			rectangle(410+10,440+10,700-20,460-10);
			delay(x);
	}
	getch();
}
