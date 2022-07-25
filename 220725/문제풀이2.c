#include<stdio.h>
void no_changeValue(int a, int b)
{
	a = b;
}
int main()
{
	int a = 3;
	int b = 5;
	no_changeValue(a, 300);
	printf("%d", a);
	return 0;
}