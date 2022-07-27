#include<stdio.h>//수업
void printfYourName(char n[])
{
	printf("당신의 이름은 %s입니다.\n", n);
}
char* printABC()
{
	return "abc\n";
}
//매개변수없이 문자열을 입력받아서 리턴하고 싶을 땐?
char* retnMYpointer()
{
	//문자열을 입력한 뒤 리턴하고 싶다면 앞에 static을 붙여라
	static char mbti[5]; //static을 붙이면 잘됨...왜?
	printf("mbti?");
	gets(mbti);
	return mbti;
}
char* retnMymbti(char* mbti)
{
	return mbti; //매개변수로 받은 걸 그대로 리턴해보기
}

int main()
{
	printf("이름입력");
	char name[100];
	gets(name);
	printfYourName(name);

	printf("%s", printABC());
	//배열 = 포인터
	//name 배열은 name 포인터라고 봐도 된다.
	printf("%s\n", retnMYpointer());
	printf("%s\n", retnMymbti("infp"));
	printf("%s\n", retnMymbti(name));
	return 0;
}