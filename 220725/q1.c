#include<stdio.h>
void no_changeValue(int a, int b)
{
	a = b;
}
void changeValue(int* a, int b)
{
	*a = b; //*a �� �ּҰ� ������ ��� �ִ� ��
}

int main()
{
	int abc = 100;
	no_changeValue(abc, 50);
	printf("%d\n", abc);

	changeValue(&abc, 500);//abc�� �ּ� : &abc,   
	printf("%d\n", abc);

	int* ptr = &abc;//ptr :  �ּ� �����ϴ� ����
	changeValue(ptr, 9999);
	printf("%d\n", abc);
}