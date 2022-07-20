#include<stdio.h>
int main()
{
	//문자(따옴표 안에 있음'')와 문자열
	//문자열 - 쌍따옴표("")안에 있음. 문장 혹은 string이라고 함
	char c = 'A';
	char mbti[5] = "INFP"; //null혹은 '\0'
	char* m = mbti;

	char bType[3];
	bType[0] = 'A';
	bType[1] = 'B'; //bType에 AB라고 쓴거
	bType[2] = NULL;
	char bloodType[3] = "AB";
	char name[7] = "노민영";

	//문자열 입력받기
	printf("mbti는?\n");
	gets(mbti);
	//gets 쓴 다음에는 rewind 안써도 됨.
	//대신 scaf거나 getchar일 경우에 rewind가 필요
	//숫자만 입력받을거라면 rewind 안써도 되고, 문자나 물자열을 입력받을 떈 써야 함.
	//문자 입력받기
	printf("알파벳 하나 입력해보기");
	//rewind(stdin);
	// 컴퓨터 메모리(=버퍼라는 공간, 입력된 데이터가 저장되는 곳) 청소
	// 쓰임새
	// 1.숫자만 입력할 땐 쓸 필요 없다.
	// 2.숫자나 문자, 문자열과 같은 데이터를 입력하고 나서 그 뒤에 문자나
	// 문자열을 또 입력할 경우 쓰임.
	// 1)숫자 입력하고 나서 엔터를 치고, 문자난 문자열 입력시
	// 2)문자나 문자열 입력하고 나서, 다시 문자나 문자열 입력시 
	// scanf나 getchar를 한 번이라도 수행한 상태에서 바로 다음에 뭔가 입력받아야 될 경우에 쓰임
	// 참고로 직전에 gets로 문장을 입력받았다면 안써도 됨.
	//내가 문자나 문자열 입력하기 직전에 쓰임.(제일 처음에 입력할때 제외.)
	c = getchar();
	printf("%s %c", mbti, c);







	return 0;
}