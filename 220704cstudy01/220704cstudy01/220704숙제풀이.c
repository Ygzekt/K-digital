#include<stdio.h>
int main()
{
	//1.
	for (char c = 'A'; c <= 'Z'; c++)
		printf("%c\n", c);
	//2.
	for (char c = 'a'; c <= 'z'; c++)
		printf("%c\n", c);
	
	//3.
	for (char c = 'A'; c <= 'z'; c++)
	{
		//[\]^_` 이건 제외해줘야 함
		if(c<='Z' || c>='a') //아스키코드 표시
		printf("%c\n", c);//알파벳보다 크거나 작은 것들 빼고 출력함
	}


	return 0;
}