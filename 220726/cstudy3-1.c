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
	//----------����-------------------
	scanf_s("%d %d %d", &a, &b, &c);
	printf("a=%d b=%d c=%d\n", a, b, c);
	//�ݺ�
	//do while�� �� �� ��쿡 �ѹ� �������� �����ϰ� ���� �� ������ �ݺ������� ���������� ���ƿ� ���θ� üũ ����
	do
	{
		scanf_s("%d %d %d", &a, &b, &c);
		printf("a=%d b=%d c=%d\n", a, b, c);
	} while (a != a && b != b && c != c);
	printf("a=%d b=%d c=%d\n", a, b, c);
	
	return 0;
}