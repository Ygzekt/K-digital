#include<stdio.h>
int ggd4(int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
			sum += i * j;
		}
	}
	return sum;
}
int main()
{
	int e, f;
	printf("몇단부터 몇단? ");
	scanf_s("%d %d", &e, &f);
	int result2 = ggd4(e, f);
	printf("%d\n", result2);
	return 0;
}