#include<stdio.h>
void ggd()
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}
}
void ggd2()
{
	int a1, a2;
	int b1, b2;
	printf("몇단에서 몇 단?\n");
	scanf_s("%d %d", &a1, &a2);
	printf("곱 몇에서 몇 곱?\n");
	scanf_s("%d %d", &b1, &b2);
	for (int i = a1; i <= a2; i++)
	{
		for (int j = b1; j <= b2; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}
}
int main()
{
	int i, j;
	printf("1번구구단\n");
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}
	//2번
	printf("2번구구단\n");
	ggd();
	//3번
	printf("3번");
	ggd2();
	return 0;
}