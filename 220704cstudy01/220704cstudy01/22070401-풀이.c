#include<stdio.h>
int main()
{
	//1.
	printf("이름은 노민영입니다.\n" );

	//2.
	int age;
	printf("입력: ");
	scanf_s("%d", &age);
	printf("내 나이는 %d살입니다.\n", age);

	//3.
	int a, b;
	printf("입력1 : ");
	scanf_s("%d", &a);
	printf("입력2 : ");
	scanf_s("%d", &b);
	printf("출력 : %d\n", (a * a) + (b * b));


	//4.
	char name[100];
	printf("옆자리 학생의 이름은?\n");
	rewind(stdin);
	scanf_s("%s", name, sizeof(name)); //스페이스바 짤림
	printf("내 옆자리 학생의 이름은 %s입니다.\n", name);
	//띄어쓰기를 쓸 경우 gets(name)을 쓸 것. 다만 숫자는 scanf_s를 쓸 것.


	//5.
	double dollar;
	printf("달러입력 : ");
	scanf_s("%lf", &dollar);
	printf("달러출력 : %lf krw\n", dollar * 1298.89);
	

	//6.









	return 0;
}