#include<stdio.h>//�������� Ǭ��.
int calcAge()
{
	int year;
	printf("��⵵�� �¾\n");
	scanf_s("%d", &year);
	return 2023 - year;
}
int main()
{
	int age = calcAge();
	printf("�� ���� %d��\n", age);
	//calcAge();
	return 0;
}