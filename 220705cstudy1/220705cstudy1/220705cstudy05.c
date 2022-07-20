#include<stdio.h>
int main()
{
	int numbers[6]; //6개의 숫자를 저장
	//int numbers[6]={0,};
	//{0,} <- 0으로 초기화
	char mbti[5]; //5개의 문자저장. 단 마지막 글자는 '\0'(널)

	int* ptr_n = numbers;
	char* m = mbti;

	*m = 'E';
	*ptr_n = 100;

	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);

	printf("%s", mbti);
	//참고로 베열에 값 넣는 방법 2번째
	//1번째는 ptr+1 이런식으로 넣었음

	scanf_s("%d", &numbers[1]);
	scanf_s("%d", numbers + 2);
	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);

	rewind(stdin);
	gets(m);
	printf("%s", mbti);
	printf("%s", m);






	return 0;
}