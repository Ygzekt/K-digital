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
	//1��
	printf("�� ���� �Է�:");
	scanf_s("%d %d", &a, &b);
	big(a, b);
	//2��
	printf("ū ��:%d\n", bigvan());
	//3��
	van(a,b);
	return 0;
}