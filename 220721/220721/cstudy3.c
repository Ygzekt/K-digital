#include<stdio.h>
extern int a; //cTest.c���� �� ���� a
extern int b;
int main()
{
	//b++; ������ ������ ���� ���� �ȵ�!
	a++;
	printf("%d\n", a);
	up_Print();
}