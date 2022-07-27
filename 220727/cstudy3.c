#include<stdio.h>
//선생님 풀이
void printmonth(int month)
{
	switch (month)
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
		printf("오류\n");
		break;
	}
}
int main()
{
	int month;
	printf("q3:몇달?");
	scanf_s("%d", &month);
	printmonth(month);
	return 0;
}