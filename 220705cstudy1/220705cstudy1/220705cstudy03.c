#include<stdio.h>
int main()
{
	//포인터=변수의 주소 혹은 위치
	int a = 10;
	int* ptr_a = &a;

	(*ptr_a)++;
	printf("a=%d\n", a);//11
	a++;
	printf("ptr_a가 가리키는 곳의 값:%d\n", *ptr_a);//12
	printf("a=%d\n", a);//12

	int b = a;
	b++;
	printf("a=%d\n", a); //b는 13, a는 12








	return 0;
}