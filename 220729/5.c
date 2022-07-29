#include<stdio.h>
struct KBStudent
{
	int cscore;
	int javascore;
	char name[100];
}typedef kb;
int main()
{
	kb s1 = { 100,100,"±èÃ¶¼ö" };

	kb s2;
	scanf_s("%d %d", &s2.cscore, &s2.javascore);
	rewind(stdin);
	gets(s2.name);
	printf("cscore=%d java=%d ÀÌ¸§=%s\n", s1.cscore, s1.javascore, s1.name);
	printf("cscore=%d java=%d ÀÌ¸§=%s\n", s2.cscore, s2.javascore, s2.name);

	kb students[5] = {
		{.cscore = 50,.javascore = 60,.name="¾ÈÃ¶¼ö"},
		{.cscore = 70,.javascore = 40,.name = "±èµ¿Çö"},
		{.cscore = 100,.javascore = 50,.name = "ÀÌ¿µÈñ"},
		{.cscore = 80,.javascore = 45,.name = "°­°¨Âù"},
		{.cscore = 75,.javascore = 65,.name = "°í·ÁÇÑ"},
	};
	
	return 0;
}