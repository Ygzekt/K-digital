#include<stdio.h>
static int a;
static int b;

int big()
{
	if (a >= b)
	{
		printf("%d\n", a);
	}
	else
	{
		printf("%d\n", b);
	}
}
int bigvan()
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int van(int n)
{
	n = a;
	a = b;
	b = n;
	printf("a:%d", a);
	printf("b:%d", b);
}
int main()
{
	//1번
	printf("두 정수 입력:");
	scanf_s("%d %d", &a, &b);
	big(a, b);
	//2번
	printf("큰 수:%d\n", bigvan());
	//3번
	van(a,b);
	return 0;
}