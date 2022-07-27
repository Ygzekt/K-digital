#include<stdio.h>
char* gangi(int year)
{
	int ganji = year % 10;
	int thee = year % 12;

	char ganjiResult[3];
	char theeResult[3];
	static char result[5];

	switch (ganji)
	{
	case 0:
		strcpy(ganjiResult,"경");
		break;
	case 1:
		strcpy(ganjiResult,"신");
		break;
	case 2:
		strcpy(ganjiResult,"임");
		break;
	case 3:
		strcpy(ganjiResult,"계");
		break;
	case 4:
		strcpy(ganjiResult,"갑");
		break;
	case 5:
		strcpy(ganjiResult,"을");
		break;
	case 6:
		strcpy(ganjiResult,"병");
		break;
	case 7:
		strcpy(ganjiResult,"정");
		break;
	case 8:
		strcpy(ganjiResult,"무");
		break;
	case 9:
		strcpy(ganjiResult,"기");
		break;
	default:
		strcpy(ganjiResult,"오류");
		break;
	}
	switch (thee)
	{
	case 0:
		strcpy(ganjiResult,"신");
		break;
	case 1:
		strcpy(ganjiResult,"유");
		break;
	case 2:
		strcpy(ganjiResult,"술");
		break;
	case 3:
		strcpy(ganjiResult,"해");
		break;
	case 4:
		strcpy(ganjiResult,"자");
		break;
	case 5:
		strcpy(ganjiResult,"축");
		break;
	case 6:
		strcpy(ganjiResult,"인");
		break;
	case 7:
		strcpy(ganjiResult,"묘");
		break;
	case 8:
		strcpy(ganjiResult,"진");
		break;
	case 9:
		strcpy(ganjiResult,"사");
		break;
	case 10:
		strcpy(ganjiResult,"오");
		break;
	case 11:
		strcpy(ganjiResult,"미");
		break;
	default:
		strcpy(ganjiResult,"오류");
		break;
	}
	for (int i = 0; i < 2; i++)
		result[i] = ganjiResult[i];
	for (int i = 0; i < 2; i++)
		result[i + 2] = theeResult[i];
	result[4] = NULL;
	return result;
}
int main()
{
	printf("몇년생?");
	int year;
	scanf_s("%d", &year);
	printf("%s", gangi(year));
	return 0;
}