#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;
int main()
{
	int gd=DETECT ,gm;
	initwindow(500,500);
	circle(250,200,50);
	circle(250,300,50);
	circle(250,400,50);
	int randm = (rand()% 10000) + 5000;
	for(int i=0;i<10;i++)
	{
		//setcolor(WHITE);
		setfillstyle(1,RED);
		floodfill(250,200,WHITE);
		Sleep(randm);
		
		
		
		setfillstyle(1,BLACK);
		floodfill(250,200,WHITE);
		
		setfillstyle(1,YELLOW);
		floodfill(250,300,WHITE);
		Sleep(randm/3);
		
		setfillstyle(1,BLACK);
		floodfill(250,300,WHITE);
		
		setfillstyle(1,GREEN);
		floodfill(250,400,WHITE);
		
		Sleep(randm);
		
		setfillstyle(1,BLACK);
		floodfill(250,400,WHITE);

	}
	
	getch();
	closegraph();

}
