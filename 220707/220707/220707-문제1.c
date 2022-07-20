#include<stdio.h>
int main()
{
	//1.구구단 2단~9단 값을 2차원 배열에 저장
	int i, j;
	int gugudan[10][10]; 

	for (i = 2; i <= 9; i++)
	{
		printf("\n[ %d단 ]\n\n", i);

		for (j = 2; j <= 9; j++)
		{
			gugudan[i][j] = i * j;
			printf("%d X %d = %d \n", i, j, gugudan[i][j]);
		}
	}
	

	//2.10단~19단 값을 2차원 배열에 저장
	for (i = 10; i <= 19; i++)
	{
		printf("\n[%d단]\n", i);
		for (j = 2; j <= 19; j++)
		{
			gugudan[i][j] = i * j;
			printf("%d X %d = %d \n", i, j, gugudan[i][j]);
		}
	}

	//3.1번 배열의 총 합을 구해보세요.


	return 0;
}