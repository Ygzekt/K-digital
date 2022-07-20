#include<stdio.h>
int main()
{
	
	//1번 하나도 못풀어서 풀이봄
	printf("몇초인가요?(1번)");
	int sec;
	scanf_s("%d", &sec);

	printf("%d분 %d초\n", sec / 60, sec % 60);

	//2번
	printf("2x+b의 해 구하기(2번)\n");
	printf("x는?");
	int x, b;
	scanf_s("%d", &x);
	printf("b는?");
	scanf_s("%d", &b);
	printf("2x+b=%d\n", (2 * x) + b);

	//3번
	printf("기분은?");
	rewind(stdin);
	char feel;
	scanf_s("%c", &feel, 1);
	printf("mbti?");
	rewind(stdin);
	char mbti[5];
	scanf_s("%s", mbti, sizeof(mbti));
	printf("혈액형?");
	rewind(stdin);
	char bType[10];
	gets(bType);
	
	double cm;
	printf("키는?");
	scanf_s("%lf", &cm);
	printf("나이는?");
	int age;
	scanf_s("%d", &age);
	printf("저의 기분은 %c입니다. 제 mbti는 %s이고, 제 혈액형은 %s입니다. 제 키는 %.2lf이며, 나이는 %d살입니다.\n", feel, mbti, bType, cm, age);

	//4번
	





	



	return 0;
}