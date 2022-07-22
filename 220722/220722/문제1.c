#include<stdio.h>
/*
1. printArr를 호출해보세요.
왜 size를 넘겨줘야 하는지도 생각해보세요.


2. 배열 안의 최댓값은 반환하고
최솟값은 printf로 출력하는 함수를 
만들고 호출해보세요.


3. 배열 값의 부호를 전부 뒤집는
함수는 만들고 호출해서 테스트해보세요.
*/
void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}
int main()
{
	printArr();
	return 0;
}