#include<stdio.h>
int main()
{
	//파이썬으로 풀어야함. c언어로 풀면 틀렸다고 나옴.
	int n, m;
	scanf_s("%d %d", &n,&m);
	printf("%d", n / m);
	printf("%d", n % m);
	return 0;
}