#include<stdio.h>
int main()
{
	//1.
	int gugu1[8][9];

	int row = sizeof(gugu1) / sizeof(gugu1[0]);
	int col = sizeof(gugu1[0]) / sizeof(gugu1[0][0]);//sizeof(int)
	printf("%d행 %d열\n", row, col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			gugu1[i][j] = (i + 2) * (j + 1);
		}
	}

	int gugu2[10][9];
	int gugu2_row = sizeof(gugu2) / sizeof(gugu2[0]);
	//row랑 col쿨 값 똑같으니까 그대로 써도 됨.
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
			gugu2[i][j] = (i + 10) * (j + 1);
	}

	//3번
	int sum1 = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			sum1 += gugu1[i][j];
	}

	//4.
	int sum2 = 0;
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
			sum2 += gugu2[i][j];
	}

	//5.
	int sum3 = sum1 + sum2;

	printf("2~9합: %d\n", sum1);
	printf("10~19합: %d\n", sum2);
	printf("총합: %d\n", sum3);

	//6.
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{//if문줘서 띄어쓰기를 했다.
			if (gugu1[i][j] < 10)//10미만은 2번 띄어쓰기, 100미만은 1번띄어쓰기
				printf("  ");
			else if (gugu1[i][j] < 100)
				printf(" ");
			printf("%d ", gugu1[i][j]);
		}
			
		printf("\n");
	}

	//7.
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("%3d ", gugu2[i][j]);//%3d -> 3칸
		printf("\n");
	}
	
	
	return 0;

}