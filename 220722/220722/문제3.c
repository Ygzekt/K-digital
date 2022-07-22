#include<stdio.h>
struct Rectangle
{
	int width;
	int height;
};
int main()
{
	struct Rectangle p1;
	p1.width = 30;
	p1.height = 20;
	printf("%d\n", p1.width * p1.height);

	struct Rectangle p2;
	p2.width = 60;
	p2.height = 50;
	printf("%d\n", p2.width * p2.height);


	struct Rectangle p3;
	scanf_s("%d", &p3.width);
	scanf_s("%d", &p3.height);


	return 0;
}