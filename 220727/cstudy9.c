#include<stdio.h>
//������ ����Ǯ��
char* q2(int year)
{
	switch (year % 12)
	{
	case 0:
		return "������";
	case 1:
		return "��";
	case 2:
		return "��";
	case 3:
		return "����";
	case 4:
		return "��";
	case 5:
		return "��";
	case 6:
		return "ȣ����";
	case 7:
		return "�䳢";
	case 8:
		return "��";
	case 9:
		return "��";
	case 10:
		return "��";
	case 11:
		return "��";
	default:
		return "����";
	}
}
char* q2_1(int year)
{
	year %= 12;
	//2���� �迭�� ����.
	static char thees[12][10]={ "������", "��", "��", "����", "��", "��", "ȣ����", "�䳢", "��", "��", "��", "��" };
	return thees[year];
}
int main()
{
	int year;
	printf("�� ���?");
	scanf_s("%d", &year);
	printf("%s\n", q2(year));
	//q2_1
	printf("%s\n", q2_1(year));
	return 0;
}