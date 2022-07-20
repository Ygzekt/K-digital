#include<stdio.h>
int main()
{
	//반복문
	//for while do while 이 있는데 
	//가장 대표적인 건 for

	//어떤것을 10번 출력하고 싶다면?
	for (int i = 0; i < 10; i++)
	{
		printf("이동준선생님\n");
	}

	int count; //count값을 10번 찍음.
	while (count < 10)
	{
		printf("count=%d\n", count);
		count++;
	}
	//while안에 있는 조건이 거짓이라도 무조건 1번은 수행함 참고로 현재 

	return 0;
}