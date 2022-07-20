#include<stdio.h>
int main()
{
	//1.
	printf("문장 입력:");
	char s1[1024];
	char s2[1024];
	gets(s1);
	int diff = 'a' - 'A';
	for (int i = 0; s1[i] != NULL; i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= diff;
		}
	}
	printf("1. %s\n", s1);

	//2.
	for (int i = 0; s1[i] != NULL; i++)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += diff;
		}
	}
	printf("2. %s\n", s1);

	//3.
	printf("문장 다시 입력해보세요.");
	gets(s2);
	for (int i = 0; s2[i] != '\0'; i++)
	{
		if (s2[i] >= 'A' && s2[i] <= 'Z')
			s2[i] += diff;
		else if (s2[i] >= 'a' && s2[i] <= 'z')
			s2[i] -= diff;
	}
	printf("%s\n", s2);

	//4.뒤집기
	char r[1024];//뒤집린 거 저장하기
	int index = 0;
	int count = 0;
	while (s2[index] != NULL)
		index++;
	//index가 s2의 문장 끝null을 가리키면 끝남.
	//index-1:null바로 앞. 즉 문장의 끝
	
	for (int i = index - 1; i >= 0; i--, count++)
	{
		printf(" %c ", s2[i]);
		r[count] = s2[i];
	}
	r[count] = NULL;
	printf("\n%s\n", r);

	return 0;
}