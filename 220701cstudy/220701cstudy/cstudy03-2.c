#include<stdio.h>
int main()
{
	//1��.1���� 100������ ���� ���غ�����.
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum += i;
	printf("%d\n", sum);
	
	
	
	//2.1���� 100������ ���� ���ϴ� ��, 3�� ����� ���ؼ��� ���غ��ÿ�.
	
	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	
	
	//3.1���� n������ ���� ������. (n �Է°�)
	printf("10������ ��\n");
	int n;
	scanf_s("%d", &n);
	sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	printf("%d : %d\n", n, sum);
	
	//4.�Է��� ���� ���� ������ ���� �ﰢ���� ����غ�����.   -> ��ø�� for���� ���� �ִ�.
	//�Է�: 3
	//*
	//**
	//***
	int floor;
	printf("����?\n");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
	
	
	//5.3���� �ݴ�Ǵ� �ﰢ���� ����ÿ�.(����� �� �� �� �ݺ������� �Ѵ�.)
	//�Է�: 3
	//  *
	// **
	//***
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < floor - i - 1; j++)
			printf(" ");
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
	
	//6.�Է°��� �̿��Ͽ� �Ƕ�̵带 ��������.(2n+1�� ��Ģ�� ���� ����� ������ �پ��)
	//�Է�: 3
	  //*
	 //***
	//*****
	
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < floor - i - 1; j++)
			printf(" ");
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	
	
	
	//7.�Է°��� �̿��Ͽ� ���̾Ƹ�带 ��������.
		
	
	for (int i = 0; i < floor - 1; i++)
		{
			//���Ⱑ ���� ����
			for (int j = 0; j < i + 1; j++)
				printf(" ");
			//���� ���� ����
			for (int j = 0; j < (2 * (floor-i-1))-1; j++)
				printf("*");
			printf("\n");
		}
	
	









	return 0;
}