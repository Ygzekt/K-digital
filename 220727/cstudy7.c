#include<stdio.h>

void q1(int year)
{
	char s[12][10] = { "¿ø¼şÀÌ", "´ß", "°³", "µÅÁö", "Áã", "¼Ò", "È£¶ûÀÌ", "Åä³¢", "¿ë", "¹ì", "¸»", "¾ç" };
	
	int d;
	
	while (1)
	{
		printf("³âµµ: ");
		scanf_s("%d", &year);
		if (year <= 0);
		{
			break;
		}
		d = year % 12;
		printf("%d³â %s\n", year, s[d]);
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