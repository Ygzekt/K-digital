#include<stdio.h>
int ggd()
{
	int sum = 0;
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
			sum += i * j;
		}
	}
	return sum;
}
void ggd2(int a)
{
	for (int i = 1; i <= 9; i++)
	{
		printf("%d x %d = %d\n", a, i, a * i);
	}
}
int ggd3(int a, int b)
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = a; j <= b; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}
}
int ggd4(int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
			sum += i * j;
		}	
	}
	return sum;
}
int main()
{
	//1번
	int result= ggd();
	printf("%d\n", result);
	//2번
	int a;
	printf("몇 단? ");
	scanf_s("%d", &a);
	ggd2(a);
	//3번
	int n,m;
	printf("x몇부터 x몇?\n");
	scanf_s("%d %d", &n, &m);
	ggd3(n, m);
	//4번
	int e, f;
	scanf_s("%d %d", &e, &f);
	printf("몇단부터 몇단? ");
	int result2 = ggd4(e,f);
	printf("%d\n", result2);

	return 0;
}