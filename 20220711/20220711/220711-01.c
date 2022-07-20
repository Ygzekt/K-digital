#include<stdio.h>
int main()
{
	//scanf와 printf도 함수

	int result = printf("Hello");
	printf("\n%d", result);
	int n, m;
	int a = scanf_s("%d", &n);
	int b = scanf_s("%d %d", &n, &m);
	result = printf("%d %d", n, m);
	printf("\nresult=%d, a=%d, b=%d\n", result, a, b);













	return 0;
}