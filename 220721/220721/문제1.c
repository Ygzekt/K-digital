#include<stdio.h>
void Enter()
{
	printf("\n");
}
void printpowernumber(int n)
{
	printf("%d", n * n);
}
int inputNum()
{
	int n;
	printf("숫자입력\n");
	scanf_s("%d", &n);
	return n;
}



//1번
int main()
{
	int num = inputNum();
	printpowernumber(num);
	Enter();
	return 0;
}