#include<stdio.h>
struct Rectangle
{
	int width;
	int height;
}typedef Rectangle; //struct생략 가능


int main()
{
	struct Rectangle r1;
	r1.width = 50;
	r1.height = 10;
	printf("넓이 : %d\n", r1.width * r1.height);
	Rectangle r2;//typedef Rectangle안적으면 앞에 항상 struct가 붙어야함.

	scanf_s("%d %d", &r2.width, &r2.height);
	printf("넓이 : %d\n", r2.width * r2.height);
	//printf("넓이 : %d\n", area(r2));

	Rectangle recs[3];
	recs[0] = r1;
	recs[1] = r2;
	recs[2].width=r1.width;
	recs[2].height = r1.height;


	return 0;
}