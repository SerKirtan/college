// C for fillpoly()
#include <graphics.h>
#include<stdio.h>
int main()
{
	int gd = DETECT, gm;
	int arr[] = {320, 150, 400, 250,
				250, 350, 320, 150};
	initgraph(&gd, &gm, "");
	fillpoly(4, arr);
	closegraph();

	return 0;
}
