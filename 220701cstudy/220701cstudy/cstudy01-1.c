#include<stdio.h>
#define °¡À§ 0
#define ¹ÙÀ§ 1

int main()
{

	//1¹ø
	if (0)
	{
#pragma region Ã¹¹øÂ° ¹®Á¦



		int month;
		printf("¸î¿ù¿¡ ÅÂ¾î³µ´Ï?");
		scanf_s("%d", &month);

		if (month == 12 || month == 1 || month == 2)
			printf("°Ü¿ï");
		else if (month >= 3 && month <= 5)
			printf("º½\n");
		else if (month >= 6 && month <= 8)
			printf("¿©¸§\n");
		else if (month >= 9 && month <= 11)
			printf("°¡À»\n");
		else
			printf("¿À·ù\n");
#pragma endregion

	}
	//2¹ø
	if (1)
	{
#pragma region µÎ¹øÂ° ¹®Á¦


	printf("°¡À§ ¹ÙÀ§ º¸(ÇÃ·¹ÀÌ¾î1)");
	int p1, p2;
	scanf_s("%d", &p1);
	printf("°¡À§ ¹ÙÀ§ º¸(ÇÃ·¹ÀÌ¾î2)");
	scanf_s("%d", &p2);
	p1 %= 3;
	p2 %= 3;
	switch (p1)
	{
	case 0:
		printf("p1:°¡À§\n");
		switch (p2)
		{
		case 0:
			printf("p2: °¡À§\n");
			printf("ºñ±è\n");
			break;
		case 1:
			printf("p2: ¹ÙÀ§\n");
			printf("Áü\n");
			break;
		case 2:
			printf("p2: º¸\n");
			printf("ÀÌ±è\n");
			break;
		default:
			break;
		}
		break;
	case 1:
		printf("p1:¹ÙÀ§\n");
		switch (p2)
		{
		case 0:
			printf("p2: °¡À§\n");
			printf("ÀÌ±è\n");
			break;
		case 1:
			printf("p2: ¹ÙÀ§\n");
			printf("ºñ±è\n");
			break;
		case 2:
			printf("p2: º¸\n");
			printf("Áü\n");
			break;
		default:
			break;
		}
		break;
	case 2:
		printf("p1:º¸\n");
		switch (p2)
		{
		case 0:
			printf("p2: °¡À§\n");
			printf("Áü\n");
			break;
		case 1:
			printf("p2: ¹ÙÀ§\n");
			printf("ÀÌ±è\n");
			break;
		case 2:
			printf("p2: º¸\n");
			printf("ºñ±è\n");
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	
#pragma endregion
	}
	//3¹ø
	//°æ¿ìÀÇ ¼ö 12°³

	printf("¸î³â»ý?");
	int year;
	scanf_s("%d", &year);
	switch (year)
	{
	case 0:
		printf("¿ø¼þÀÌ\n");
		break;
	case 1:
		printf("¹ì\n");
		break;
	case 2:
		printf("¸»\n");
		break;
	case 3:
		printf("¾ç\n");
		break;
	case 4:
		printf("¿ø¼þÀÌ\n");
		break;
	case 5:
		printf("´ß\n");
		break;
	case 6:
		printf("°³\n");
		break;
	case 7:
		printf("µÅÁö\n");
		break;
	case 8:
		printf("Áã\n");
		break;
	case 9:
		printf("¼Ò\n");
		break;
	case 10:
		printf("È£¶ûÀÌ\n");
		break;
	case 11:
		printf("Åä³¢\n");
		break;
	default:
		break;
	}
	//¿­°ÅÇü
	//¼­ÀüÆò°¡¿¡¼­ ³ª¿Â °Å
	//¼ýÀÚµé¿¡°Ô ÀÌ¸§À» ºÙÀÌ´Â °Í
	enum ½ÊÀÌÁö½Å
	{
		Áã = 4, ¼Ò, È£¶ûÀÌ, Åä³¢, ¿ë, ¹ì, ¸», ¾ç, ¿ø¼þÀÌ = 0, ´ß, °³, µÅÁö
	};

	int qustn = year % 12;

	enum ½ÊÀÌÁö½Å temp = ¿ø¼þÀÌ;
	printf("%d\n", temp);
	
	if (qustn == Áã)
		printf("Áã\n");
	else if (qustn == ¼Ò)
		printf("¼Ò\n");
	else if (qustn == È£¶ûÀÌ)
		printf("È£¶ûÀÌ\n");
	else if (qustn == Åä³¢)
		printf("Åä³¢\n");
	else if (qustn == ¿ë)
		printf("¿ë\n");
	else if (qustn == ¹ì)
		printf("¹ì\n");
	else if (qustn == ¸»)
		printf("¸»\n");
	else if (qustn == ¾ç)
		printf("¾ç\n");
	else if (qustn == ¿ø¼þÀÌ)
		printf("¿ø¼þÀÌ\n");
	else if (qustn == ´ß)
		printf("´ß\n");
	else if (qustn == °³)
		printf("°³\n");
	else if (qustn == µÅÁö)
		printf("µÅÁö\n");

	return 0;
}