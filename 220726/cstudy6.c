#include<stdio.h>
void season2()
{
	int season = 0;
	printf("�� ��?");
	scanf_s("%d", &season);
	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	default:
		printf("�߸���");
		break;
	}
}

int season3(int season)
{
	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	default:
		printf("�߸���");
		break;
	}
}
int calculAge()
{
	printf("�¾ ����? ");
	int year;
	scanf_s("%d", &year);
	return 2023 - year;
}
int calculAge2(int year)
{
	return 2023 - year;
}

int main()
{
	//1��
	int season;
	printf("�� ��?");
	scanf_s("%d", &season);
	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	default:
		printf("�߸���");
		break;
	}
	//2��
	season2();
	//3��
	int a;
	printf("���? ");
	scanf_s("%d", &a);
	season3(a);

	//4��
	printf("%d���Դϴ�.\n",calculAge());

	//5��
	printf("�¾ ����? ");
	int year;
	scanf_s("%d", &year);
	printf("%d���Դϴ�.", calculAge2(year));

	return 0;
}