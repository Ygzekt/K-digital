#include<stdio.h>

void q1(int year)
{
	char s[12][10] = { "������", "��", "��", "����", "��", "��", "ȣ����", "�䳢", "��", "��", "��", "��" };
	
	int d;
	
	while (1)
	{
		printf("�⵵: ");
		scanf_s("%d", &year);
		if (year <= 0);
		{
			break;
		}
		d = year % 12;
		printf("%d�� %s\n", year, s[d]);
	}
	return s[d];
}
int main()
{
	int year;
	q1(year);
	//2-1

	return 0;
}