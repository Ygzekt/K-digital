#include<stdio.h>
int main()
{
	//반복문

	//3가지가 있음
	//1.for문
	for (int i = 0; i < 10; i++)
		printf("이동준선생님 안녕하세요\n");
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i;
	printf("1부터 10까지의 합 : %d\n", sum);

	//for문도 중괄호로 묶을 수 있다.
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			printf("*");
		else
			printf("!");
	}





	//2. while문
	//3. do while문




	return 0;
}