#include<stdio.h>
int main()
{
	//증감 연산자
	int a = 5;
	
	a++; //a=a+1;  a+=1; (*규칙)
	++a;
	a--;
	--a;

	printf("%d\n", ++a);
	printf("%d\n", a++);
	printf("%d\n", a);



	return 0;
}