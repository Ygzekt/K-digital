#include<stdio.h>
int main()
{
	//1. ���丮���� ����غ�����.�Է� : 5	
	//���: 5 != 5x4x3x2x1
	int n;
	int sum = 0;
	printf("����� ���ұ��?\n");
	scanf_s("%d", &n);
	printf("1");
	sum = 1;
	for (int i = 2; i <= n; ++i)
	{
		sum *= i;
		printf("x%d", i);
	}
	printf("=%d!\n", sum);

	//2.n���� m������ ���� ���ϵ�, m�� n���� ���ų� Ŀ���Ѵ�.
	
	//3.2�� ������ �����ε�, ¦���� �ո� ���Ѵ�. �� continue ����� ��
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
			continue;
		printf("���� : %d\n", i);
	}

	/*
	4.���ڸ� �Է¹ް�, �� ���� ������ ����ϴ� �ڵ带 ¥��,
	���� �ݺ��Ѵ�.�� 0 ������ ���ڸ� �Է¹����� �� �ڵ带 �����Ų��.
	*/
	int count = 0;
	while (1)//���ѹݺ�
	{
		if (count > 100)
			break;
		count = 10;
		printf("count=%d\n", count);
	}






	return 0;
}