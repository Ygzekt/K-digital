#include<stdio.h>
int main()
{
	//알파벳 등장 횟수
	//input에 NULL값으로 모두 채움
	char input[1024] = { NULL, };
	//그렇다고 char input[1024] = { 1, };
	//이렇게 적었다고 전부 1이 들어가진 않음.
	//첫번째 칸만 1이 들어감.
	printf("문자열을 입력");
	gets(input);
	int charAlpha[26] = { 0 };
	//전부 0으로 채운다. 안적으면 쓰레기 값 들어가 있음.
	//각 스펠링의 개수는 의미. [0]에 10있으면 a가 10개
	for (int i = 0; input[i] != NULL; i++)
	{
		//소문자로 전부 통일 작업
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			input[i] += ('a' - 'A');
		}
		// 소문자 a보다 작거나 소문자 z보다 큰 경우
		//a~z 사이의 범위 벗어남
		if (input[i] < 'a' || input[i]>'z')
		{
			if (input[i] == ' ')
				continue;//continue만 입력하면 a보다 작거나 z보다 큰 수는 건너뛰고
			//알파벳 소문자만 출력가능.

			printf("종료\n");
			return 0;//프로그램을 종료시켜버림
		}
		else //a~z인 경우 //그 다음에 개수를 센다.
		{
			charAlpha[input[i] - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (charAlpha[i] != 0)
			printf("'%c'는 %d글자입니다.\n", 'a' + i, charAlpha[i]);
		//i=0
		// 'a'+0='a'
		// i=1
		//'a'+1='b'
	}

	//알파벳 최초 등장 위치





	return 0;
}