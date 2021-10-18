#include<cstdio>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main()
{
	int i;
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c://TC//BGI");

	//Outer circle
	circle(320,240,100);
	setcolor(RED);
	circle(320,240,99);
	//Inner circle
	circle(320,240,80);
	circle(320,240,81);
	setcolor(WHITE);
	//mark four points
	line(320,160,320,165);//top
	line(320,315,320,325)//bottom
	line(400,240,395,240);//left
	line(240,240,245,240);//right

	for(s=82;s<99;s++)
	{
	 setcolor(YELLOW);
	 circle(320,240,s);
	}
	setcolor(BLACK);
	line(270,153,264,140);
	line(250,168,242,153);
	line(227,160,284,132);
	arc(255,144,25,212,30);
	rectangle(130,80,490,380);
	line(370,155,376,140);
	line(391,168,398,153);
	line(413,160,356,132);
	arc(385,144,328,155,30);
	int x=10;
	setfillstyle(1,x);
	floodfill(380,130,RED);
	floodfill(260,130,RED);
	setfillstyle(1,WHITE);
	floodfill(135,85,WHITE);


	while(!kbhit())
	{
		printf("Time is : %2d:%2d:%3d\r",t.ti_hour%12, t.ti_min, t.ti_sec);
		setcolor(0);
		line(320,240, sec_arc.x, sec_arc.y);
		line(320,240, min_arc.x, min_arc.y);
		line(320,240, hr_arc.x, hr_arc.y);
		//Store time into struct t
		gettime(&t);
		//hour
		setcolor(0);
		arc(320,240,270,90-(t.ti_hour*6*5),55);
		setcolor(YELLOW);
		getarccoords(&hr_arc);
		line(320,240, hr_arc.x, hr_arc.y);
		//minute
		setcolor(0);
		arc(320,240,270,90-t.ti_min*6,65);
		setcolor(CYAN);
		getarccoords(&min_arc);
		line(320,240, min_arc.x, min_arc.y);
		//center circle
		setcolor(WHITE);
		pieslice(320,240,0,360,5);
		//second
		setcolor(0);
		arc(320,240,270,90-t.ti_sec*6,75);
		setcolor(RED);
		getarccoords(&sec_arc);
		line(320,240, sec_arc.x, sec_arc.y);
		delay(250);
		}
	return 0;
}
