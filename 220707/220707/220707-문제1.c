#include<stdio.h>
int main()
{
	//1.������ 2��~9�� ���� 2���� �迭�� ����
	int i, j;
	int gugudan[10][10]; 

	for (i = 2; i <= 9; i++)
	{
		printf("\n[ %d�� ]\n\n", i);

		for (j = 2; j <= 9; j++)
		{
			gugudan[i][j] = i * j;
			printf("%d X %d = %d \n", i, j, gugudan[i][j]);
		}
	}
	

	//2.10��~19�� ���� 2���� �迭�� ����
	for (i = 10; i <= 19; i++)
	{
		printf("\n[%d��]\n", i);
		for (j = 2; j <= 19; j++)
		{
			gugudan[i][j] = i * j;
			printf("%d X %d = %d \n", i, j, gugudan[i][j]);
		}
	}

	//3.1�� �迭�� �� ���� ���غ�����.


	return 0;
}