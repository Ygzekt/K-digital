#include<stdio.h>
//�������� Ǭ��
int calculage(int y)
{
	return 2023 - y;
}
int main()
{
	int year;
	printf("����?");
	scanf_s("%d", &year);
	printf("�� ���� %d��.\n", calculage(year));
	return 0;
}