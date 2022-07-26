#include<stdio.h>
void season2()
{
	int season = 0;
	printf("몇 월?");
	scanf_s("%d", &season);
	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	default:
		printf("잘못됨");
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
		printf("겨울\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	default:
		printf("잘못됨");
		break;
	}
}
int calculAge()
{
	printf("태어난 연도? ");
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
	//1번
	int season;
	printf("몇 월?");
	scanf_s("%d", &season);
	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	default:
		printf("잘못됨");
		break;
	}
	//2번
	season2();
	//3번
	int a;
	printf("몇월? ");
	scanf_s("%d", &a);
	season3(a);

	//4번
	printf("%d살입니다.\n",calculAge());

	//5번
	printf("태어난 연도? ");
	int year;
	scanf_s("%d", &year);
	printf("%d살입니다.", calculAge2(year));

	return 0;
}