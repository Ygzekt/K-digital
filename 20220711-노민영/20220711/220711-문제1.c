#include<stdio.h>
void mun1()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % c == 0)
			continue;
		sum += i;
	}
	printf("��:%d\n", sum),
}

int main()
{
	int num1;
	num1 = mun1();
	printf("1������:%d\n", num1);

	return 0;
}