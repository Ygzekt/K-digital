#include<stdio.h>
int main()
{
	//1번

	int sum = 0;
	for (int a = 1; a <= 100; a++)
		sum += a;
	printf("1부터 100까지의 합 : %d\n", sum);
	
	//2번
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
		
	}
	//3번





	return 0;
}