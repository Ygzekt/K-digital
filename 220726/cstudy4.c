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
	printf("��ܿ��� �� ��?\n");
	scanf_s("%d %d", &a1, &a2);
	printf("�� ��� �� ��?\n");
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
	printf("1��������\n");
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}
	//2��
	printf("2��������\n");
	ggd();
	//3��
	printf("3��");
	ggd2();
	return 0;
}