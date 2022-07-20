#include <stdio.h>
int main()
{
	int sum = 0;
	int i;
	printf("1");
	for (i = 2; i <= 100; i++)
	printf("+%d", i);
	for (i = 1; i <= 100; i++)
	sum += i;
	printf("\ntotal=%d\n", sum);
    return 0;
}