#include <iostream>
#include <graphics.h>
#include <windows.h>
int main()
{
	initwindow(900,900);
	int gd =DETECT, gm;
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	rectangle(300,179,550,210);
	outtextxy(360,250,"Loading...");
	for(int i=1;i<250;i++)
	{
		setcolor(3);
		rectangle(300+i,179,550,210);
		delay(20);
	}
	getch();
}
