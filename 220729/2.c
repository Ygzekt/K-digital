#include<stdio.h>
struct Game3d
{
	int x;
	int y;
	int z;
}typedef g3;
int main()
{
	g3 d1 = { 10,20,30 };
	g3 d2 = { .x = 10, .y = 20, .z = 30 };
	g3 d3;
	d3.x = 10;
	d3.y = 20;
	d3.z = 15;
	g3 d4;
	scanf_s("%d %d %d", &d4.x, &d4.y, &d4.z);
	printf("%d %d %d", d4.x, d4.y, d4.z);
	return 0;
}