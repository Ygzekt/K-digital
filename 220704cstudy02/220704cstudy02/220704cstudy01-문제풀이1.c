#include<stdio.h>
int main()
{
	//1.
	printf("몇 팩토리얼?");
	int fact;
	scanf_s("%d", &fact);
	printf("%d!=%d", fact, fact);
	for (int i = fact - 1; i > 0; i--)
	{
		printf("x%d", i);
	}
	//2.
	int n, m;
	printf("\nn와m입력하세요.");
	scanf_s("%d %d", &n, &m);
	if (n > m)
	{
		int temp = m;
		m = n;
		n = temp;
	}
	int sum = 0;
	for (int i = n; i <= m; i++)
		sum += i;
	printf("%d부터 %d까지의 합은 %d이다.\n", n, m, sum);

	//3.n부터m까지의 합(단 짝수만)->n이 m보다 클 경우 오류처리하기
	printf("n? m? 입력");
	scanf_s("%d %d", &n, &m);
	if (n > m)
	{
		printf("첫번째가 두번쨰보다 커서 합 못 구함\n");
	}
	else
	{
		sum = 0;
		for (int i = n; i <= m; i++)
		{
			if (i % 2 != 0)
				continue;

			sum += i;
		}
		printf("%d부터 %d까지의 합은 %d이다.\n", n, m, sum);
	}

	//4.
	while (1)
	{
		int input;
		printf("무한루프 입력\n");
		scanf_s("%d", &input);
		if (input <= 0)
			break;
		printf("제곱값 : %d\n", input * input);
	}
	printf("4번 종료됨\n");
	/*다른식 do while은 지금처럼 input이 0이어서 while조건을 만족하지 못해도 무조건 한번은 실행한다.
	* 즉 무한루프를 돌거나 안 돌거나 처음에 값은 무조건 받아야 한다면 do while을 쓴다.
	*/
	int input = 0;
	do
	{
		printf("두숫자 입력\n");
		scanf_s("%d", &input);
		printf("%d", input * input);
	} while (input > 0);


	/* 다음 입력에 따른 출력을 해보세요.
입력 : 1
출력 : *
입력 : 2
출력 : * 
        *
       *
        *
입력 : 3
출력 : * *
        *
       * *
        *
       * *
        *
	*/
	int N;
	printf("입력");
	scanf_s("%d", &N);
	for (int i = 0; i < 2 * N; i++)
	{
		int onOffSwitch = i;
		for (int j = 0; j < N; j++);//행 부분
		{
			if (onOffSwitch % 2 == 0)
				printf("*");
			else
				printf(" ");
			onOffSwitch++;
		}
		printf("\n");//한 줄 출력하고 한 줄 띄는 것
	}



	return 0;
}