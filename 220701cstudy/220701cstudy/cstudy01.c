#include<stdio.h>
int main()
{
	//1번
	int season;
	printf("태어난 월을 적으세요.\n");
	scanf_s("%d", &season);

	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을");
	default:
		printf("오류");
		break;
	}
		
	//2번
	int rcp = 0;
	printf("\n숫자 가위바위보를 쓰세요\n");
	scanf_s("%f", &rcp);
	int rcp1 = 1;
	int rcp2 = 2;
	printf("\n가위");
	switch (rcp)
	{
	case 0:
		printf("\n가위\n");
		switch (rcp1)
		{
		case 0:
			printf("\n비김\n");
			break;
		case 1:
			printf("\n이김\n");
			break;
		case 2:
			printf("\n짐\n");
			break;
		default:
			break;
		}
		break;
	case 1:
		printf("\n바위\n");
		switch (rcp2)
		{
		case 0:
			printf("\n이김\n");
			break;
		case 1:
			printf("\n짐\n");
			break;
		case 2:
			printf("\n비김\n");
			break;
		default:
			break;
		}
		break;
	case 2:
		printf("\n보\n");
		switch (rcp)
		{
		case 0:
			printf("\n짐\n");
			break;
		case 1:
			printf("\n비김\n");
			break;
		case 2:
			printf("\n이김\n");
			break;
		default:
			break;
		}
		break;
	default:
		printf("\n기타\n");
		break;
	}

	//3번







	return 0;
}