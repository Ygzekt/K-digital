//포인터
//변수의 주소(=위치)를 저장하는 타입
#include<stdio.h>
void changeValue(int* p, int v)
{
	*p = v;
}

int main()
{
	int ex = 10;
	int* exptr = &ex;


	
	
	return 0;
}