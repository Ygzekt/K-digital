#include<stdio.h>
void swap(int* a, int* b, int* c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
int main()
{
	int a;
	int b;
	int c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("a=%d b=%d c=%d\n", a, b, c);
	//swap(&a, &b, &c);
	//printf("%d %d %d\n", a, b, c);
	//----------수동-------------------
	scanf_s("%d %d %d", &a, &b, &c);
	printf("a=%d b=%d c=%d\n", a, b, c);
	//반복
	//do while을 안 쓴 경우에 한번 수동으로 변경하고 나서 그 다음에 반복문으로 원래값으로 돌아온 여부를 체크 가능
	do
	{
		scanf_s("%d %d %d", &a, &b, &c);
		printf("a=%d b=%d c=%d\n", a, b, c);
	} while (a != a && b != b && c != c);
	printf("a=%d b=%d c=%d\n", a, b, c);
	
	return 0;
}