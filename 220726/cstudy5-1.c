#include<stdio.h>
int ggd()//void��� return; ���ų� ��������
		//int, double,char���̶�� �ݵ�� return�� �������
		//�����ϰ� ���� �� ��� �����ϰ� �̻��� ������ �� ���� �ִµ� int �տ� �������� �ݵ�� return ����; �������
{
	int sum = 0;
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			sum += (i * j);
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
void ggd3(int s, int e)//���
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = s; j <= e; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
}
int ggd4(int a, int b)
{
	//����
	if (s > e)
	{
		
	}
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d= %d\n", i, j, i * j);
		}
			sum += (i * j);
	}
	return sum;
}
int main()
{
	//1��
	printf("q1 : %d", ggd());
	//2��
	int dan;
	printf("\nq2: �� ��?\n");
	scanf_s("%d", &dan);
	ggd2(dan);
	//3��
	printf("\nq3: x����� x��?\n");
	int start, end;
	scanf_s("%d %d", &start, &end);
	ggd3(start, end);
	//4��
	int s_d, e_d;
	printf("�� �ܺ��� �� ���� ��?\n");
	scanf_s("%d %d", &s_d, &e_d);
	printf("4�� ��� : %d\n", ggd(s_d, e_d));

	return 0;
}