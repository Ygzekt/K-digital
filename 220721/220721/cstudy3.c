#include<stdio.h>
extern int a; //cTest.c에서 온 변수 a
extern int b;
int main()
{
	//b++; 있으면 오류로 인해 실행 안됨!
	a++;
	printf("%d\n", a);
	up_Print();
}