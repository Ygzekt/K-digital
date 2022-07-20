#include<stdio.h>
int main()
{
	//1번.1부터 100까지의 합을 구해보세요.
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum += i;
	printf("%d\n", sum);
	
	
	
	//2.1부터 100까지의 합을 구하는 데, 3의 배수에 대해서만 구해보시오.
	
	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	
	
	//3.1부터 n까지의 곱을 보세요. (n 입력값)
	printf("10까지의 곱\n");
	int n;
	scanf_s("%d", &n);
	sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	printf("%d : %d\n", n, sum);
	
	//4.입력한 값에 따라서 다음과 같은 삼각형을 출력해보세요.   -> 중첩된 for문들어갈 수도 있다.
	//입력: 3
	//*
	//**
	//***
	int floor;
	printf("몇층?\n");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
	
	
	//5.3번과 반대되는 삼각형을 만드시오.(띄어쓰기랑 별 둘 다 반복문으로 한다.)
	//입력: 3
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
	
	//6.입력값을 이용하여 피라미드를 만들어보세요.(2n+1의 법칙을 따름 띄어쓰기는 갈수록 줄어듬)
	//입력: 3
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
	
	
	
	//7.입력값을 이용하여 다이아몬드를 만들어보세요.
		
	
	for (int i = 0; i < floor - 1; i++)
		{
			//띄어쓰기가 점점 증가
			for (int j = 0; j < i + 1; j++)
				printf(" ");
			//별은 점점 감소
			for (int j = 0; j < (2 * (floor-i-1))-1; j++)
				printf("*");
			printf("\n");
		}
	
	









	return 0;
}