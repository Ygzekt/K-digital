#include<stdio.h>
//선생님이 푼것
int calculage(int y)
{
	return 2023 - y;
}
int main()
{
	int year;
	printf("몇년생?");
	scanf_s("%d", &year);
	printf("내 나이 %d살.\n", calculage(year));
	return 0;
}