#include<stdio.h>
int main()
{
	int second;
	printf("����?");
	scanf_s("%d", &second);
	int sec, min;
	sec = second;
	min = sec / 60;

	sec = sec % 60;
	min = min % 60;
	
	if (min > 0) 
	{
		printf("%d��", min);
	}
	if (sec > 0)
	{
		printf("%d��", sec);
	}
	if(sec > 3600)
	{
		printf("����");
	}
	return 0;
}