//Rectangle and polygon
#include"graphics.h"
#include <stdio.h>
int main()
{
	int gd = DETECT, gm, color;
	initgraph(&gd, &gm, "");//Rectangle
	rectangle(150,150,450,450);
    closegraph();

    int arr[] = {320, 150, 400, 250, //Poly
                 250, 350, 320, 150};
    initgraph(&gd, &gm, "");
    drawpoly(4, arr);
    closegraph();
	return 0;
}
