#include<stdio.h>
void findBig(int a, int b)
{
	if (a >= b)
	{
		printf("%d\n", a);
		return;
	}
	printf("%d\n", b);
}
int findbigreturn(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	return b;
}
int main()
{
	int a, b;
	printf("숫자 두 개 입력\n");
	scanf_s("%d %d", &a, &b);

	a >= b ? printf("%d\n", a) : printf("%d\n", b);
	if (a >= b)
		printf("%d\n", a);
	else
		printf("%d\n", b);

	findBig(a, b);
	int result = findbigreturn(a, b);
	printf("%d\n", result);
	return 0;
}