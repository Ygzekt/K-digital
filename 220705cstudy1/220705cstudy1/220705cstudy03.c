#include<stdio.h>
int main()
{
	//������=������ �ּ� Ȥ�� ��ġ
	int a = 10;
	int* ptr_a = &a;

	(*ptr_a)++;
	printf("a=%d\n", a);//11
	a++;
	printf("ptr_a�� ����Ű�� ���� ��:%d\n", *ptr_a);//12
	printf("a=%d\n", a);//12

	int b = a;
	b++;
	printf("a=%d\n", a); //b�� 13, a�� 12








	return 0;
}