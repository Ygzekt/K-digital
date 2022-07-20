#include<stdio.h>
int main()
{
	int second;
	printf("몇초?");
	scanf_s("%d", &second);
	int sec, min;
	sec = second;
	min = sec / 60;

	sec = sec % 60;
	min = min % 60;
	
	if (min > 0) 
	{
		printf("%d분", min);
	}
	if (sec > 0)
	{
		printf("%d초", sec);
	}
	if(sec > 3600)
	{
		printf("오류");
	}
	return 0;
}