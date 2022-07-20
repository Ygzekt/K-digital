#include<stdio.h>
int main()
{
	//6번
	int num;
	printf("숫자를 입력하시요.");
	scanf_s("%d", &num);
	if (num < 0)
	{
		printf("음수!\n");
	}
	else if (num == 0)
	{
		printf("num은 0!\n");

	}
	else
	{
		if (num % 2 == 0)
			printf("짝\n");
		else
			printf("홀\n");
	}

	//7.
	printf("구구단 5단을 출력!");
	for (int i = 1; i < 10; i++)
		printf("5x%d = %d\n", i, 5 * i);

	//8.
	printf("몇 단?");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < 10; i++)
		printf("%dx%d = %d\n", n, i, n * i);

	//9.
	for (int n = 2; n < 10; n++)
	{
		for (int i = 1; i < 10; i++)
			printf("%dx%d = %d\n", n, i, n * i);
	}

	//10.
	int sum = 0;
	printf("몇까지 합할까요?\n");
	scanf_s("%d", &n);
	printf("1");
	sum = 1;
	for (int i = 2; i <= n; i++)
	{
		sum += i;
		printf("+%d", i);
	}
	printf("=%d\n", sum);


	return 0;
}