#include<stdio.h>
int main()
{
	//1.
	char eo;
	printf("문자입력:");
	scanf_s("%c", &eo);
	if ('a' <= eo && eo <= 'z')
	{
		printf("%c", eo - 32);
	}
	rewind(stdin);

	//2.
	char th;
	printf("문자입력");
	scanf_s("%c",&th)
		if ('A' <= th && th <= 'Z')
		{
			printf("%c", th + 32);
		}
	rewind(stdin);

	//3.
	char duddj;
	printf("문자 입력:");
	scanf_s("%c", &duddj);
	if ('a' <= duddj && duddj <= 'z')
	{
		printf("%c", duddj - 32);
	}
	if ('A' <= duddj && duddj <= 'Z')
	{
		printf("%c", duddj + 32);
	}



	return 0;
}