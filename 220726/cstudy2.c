#include<stdio.h>
void noswap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 3;
	int b = 5;
	noswap(a, b);
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	int* pa = &a;
	int* pb = &b;
	swap(pa, pb);//�Ű������� �ּҰ��� ���� ��
	printf("%d %d", a, b);
	return 0;
}