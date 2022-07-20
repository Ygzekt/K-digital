#include<stdio.h>
int main()
{
	//1. 팩토리얼을 출력해보세요.입력 : 5	
	//출력: 5 != 5x4x3x2x1
	int n;
	int sum = 0;
	printf("몇까지 곱할까요?\n");
	scanf_s("%d", &n);
	printf("1");
	sum = 1;
	for (int i = 2; i <= n; ++i)
	{
		sum *= i;
		printf("x%d", i);
	}
	printf("=%d!\n", sum);

	//2.n부터 m까지의 합을 구하되, m은 n보다 같거나 커야한다.
	
	//3.2번 문제의 연장인데, 짝수의 합만 구한다. 단 continue 사용할 것
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
			continue;
		printf("숫자 : %d\n", i);
	}

	/*
	4.숫자를 입력받고, 그 것의 제곱을 출력하는 코드를 짜되,
	무한 반복한다.단 0 이하의 숫자를 입력받으면 이 코드를 종료시킨다.
	*/
	int count = 0;
	while (1)//무한반복
	{
		if (count > 100)
			break;
		count = 10;
		printf("count=%d\n", count);
	}






	return 0;
}