#include<stdio.h>
#include"Mytest01.h"
#include"yourtest.h"
void test(); //원형(반환형 매개변수 형태)
int main()
{
	test();
	mytest();// mytest01.h에서 읽어온 함수
	yourTypeTest(10);
}
void test()//정의
{
	printf("함수 테스트");
}