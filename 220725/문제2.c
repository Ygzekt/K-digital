#include<stdio.h>
void value(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, &a);
	int* ptra = &a; // 변수의 주소 저장하는 변수
	int* ptrb = &b;

	//value(&a, &b);
	value(ptra, ptrb);
	printf("%d %d", a, b);
	//printf("a:%d b:%d\n", &a, &b);
	//printf("a:%d b:%d\n", value(a), value(b));

	return 0;
}