#include<stdio.h>
int main()
{
	//문자 입력 2가지 방법이 있음.

	char c;
	printf("내 기분은 오늘 +? -? 0?\n");
	scanf_s("%c", &c, 1);
	printf("오늘 내 기분은 %c입니다.\n", c);
	rewind(stdin); //버퍼 공간 청소
	scanf_s("%c", &c, 1);
	printf("c = %c\n", c);

	rewind(stdin);
	printf("내 이름의 첫글자는?");
	c = getchar(); //1글자만 입력받는 거
	printf("%c\n", c);
	printf("내 이름의 끝글자는?");
	rewind(stdin);
	c = getchar();
	printf("%c\n", c);

	char name[100];//name변수는 100byte 저장가능
	printf("이름은?");
	scanf_s("%s", name, sizeof(name));
	printf("내 이름은 %s입니다.\n", name);
	rewind(stdin); //문자열도 마찬가지로 다음에 또 입력받을 땐 rewind해줘야 함.

	char mbti[100];
	printf("mbti?");
	gets(mbti); //통상적으로 많이 쓰임
	//scanf_s에선 스페이스바가 짤림
	printf("내 mbti는 %s입니다.\n", mbti);




	return 0;
}