#include <iostream>
#include <graphics.h>
#include <windows.h>

int main()
{
	initwindow(1200,1200);
	int gd =DETECT, gm;
	int x=40;
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	//rectangle(300,179,550,210);
	//outtextxy(360,250,"Loading...");
	for(int j=0;j<1;j++)
	{
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(360,450,170-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(140,450,100-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(360,660,100-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(350,230,100-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(580,450,100-i);
			delay(x);
		}
		for(int i=1;i<30;i++)
		{
			setcolor(rand());
			circle(360,450,500-i);
			delay(x);
		}
//		for(int i=1;i<30;i++)
//		{
//			setcolor(rand());
//			circle(530,370,100-i);
//			delay(x);
//		}
//		for(int i=1;i<30;i++)
//		{
//			setcolor(rand());
//			circle(530+(i+30),450+(i+80),100-i);
//			delay(x);
//		}
	}
	getch();
}
