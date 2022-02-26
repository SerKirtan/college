//Point, line, arc, circle
#include"graphics.h"
#include <stdio.h>
int main()
{
	int gd = DETECT, gm, color;
	initgraph(&gd, &gm, "");//Point
	putpixel(85, 35, GREEN);
	closegraph();

    initgraph(&gd, &gm, "");//arc
    arc(250,250,155,300,100);
    closegraph();

    initgraph(&gd, &gm, "");//line
    line(100,100,200,100);
    line(10,10,200,10);
    closegraph();

    initgraph(&gd, &gm, "");//circle
    circle(250, 200, 50);
    closegraph();

	return 0;
}
