#include<stdio.h>
void no_changeValue(int a, int b)
{
	a = b;
}
void changeValue(int* a, int b)
{
	*a = b; //*a 그 주소가 실제로 담고 있는 값
}

int main()
{
	int abc = 100;
	no_changeValue(abc, 50);
	printf("%d\n", abc);

	changeValue(&abc, 500);//abc의 주소 : &abc,   
	printf("%d\n", abc);

	int* ptr = &abc;//ptr :  주소 저장하는 변수
	changeValue(ptr, 9999);
	printf("%d\n", abc);
}