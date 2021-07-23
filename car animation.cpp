#include <graphics.h>
#include <windows.h>
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*1.75
#define GroundX ScreenHeight*0.70
*************Created By Syed Syab Ahmad Shah.*************
void circle_loop(int x)
{
    int i,rx,ry;
    for(i=0;i<100;i++)
    {
         rx=rand() % ScreenWidth;
         ry=rand() % ScreenHeight;
         //if(ry<GroundY)circle(rx-10,ry-10,10);
         if(ry<GroundX)line(rx-20,ry-20,rx,ry);
         line(0,500,900,500);
         line(0,520,900,520);
         line(0,540,900,540);
         line(0,560,900,560);
         line(0,580,900,580);
         line(0,600,900,600);
         line(0,620,900,620);
         line(0,640,900,640);
         line(0,660,900,660);
         line(0,680,900,680);
         line(0,700,900,700);
    }
}
int main()
{
	initwindow(900,700, "rain");
//	int gd = DETECT,gm;
	int x=0;
	int i=0;
	while(!kbhit())
	{
		
		circle_loop(x);
		for(int i=1;i<1900;i+=40)
		{
			*************Created By Syed Syab Ahmad Shah.*************
			
	   		circle(i,440,60);
	   		floodfill(i,440,15);
	   		circle(i+300,440,60);
	   		floodfill(i+300,440,15);
	   		circle(i+-380,450,50);
	   		floodfill(i+-380,450,15);
	   		circle(i+-280,450,50);
	   		floodfill(i+-280,450,15);
	   		line(i+(-440),400,i+340,400);
	   		line(i+(-440),200,i+-40,200);
	   		line(i+(-40),390,i+340,400);
	   		line(i+(-40),380,i+340,400);
	   		line(i+(-40),370,i+340,400);
	   		line(i+(-40),200,i+340,400);
	   		line(i+(-40),210,i+340,400);
	   		line(i+(-40),220,i+340,400);
	   		line(i+(-40),230,i+340,400);
	   		line(i+(-40),200,i+-40,400);
	   		line(i+(-440),200,i+-40,400);
	   		line(i+(-440),200,i+-440,400);
	   		line(i+(-40),200,i+-440,400);
			circle_loop(x);	
	   		delay(50);
	   		cleardevice();
		}
		
		
		
	}
	*************Created By Syed Syab Ahmad Shah.*************
	getch();
}
