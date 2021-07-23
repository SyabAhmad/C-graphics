#include <graphics.h>
#include <windows.h>
int main()
{
	initwindow (800, 800);
	int gd = DETECT, gm;
	int x = 300;
	for(int v=1;v<20,v+=10;v++)
	{
		setcolor(rand());
		line(210,150,130,x);
		line(210,150,300,x);
		line(130,300,300,x);
		delay(200);
		line(210+v,150+v,130+v,x+v);
		line(210+v,150+v,300+v,x+v);
		line(130+v,300+v,300+v,x+v);
	}
	
	getch();
}
