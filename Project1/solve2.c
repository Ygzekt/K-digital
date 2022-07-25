#include<stdio.h>
void q4(char a, char b)
{
	char color[9] = "color ";
	color[6] = a;
	color[7] = b;
	color[8] = NULL;//생략가능한 걸로 알고 있음

	system(color);
}

int q5()
{
	int sum = 1;
	printf("1");
	for (int i = 2; i <= 100; i++)
	{
		printf("+%d", i);
		sum += i;
	}
	return sum;
}

int q6(int a, int b)
{
	int sum = a;
	printf("%d",a);
	for (int i = a; i < b; i++)
	{
		printf("*%d", i + 1);
		sum *= (i + 1);
	}
	printf("\n");
	return sum;
}
int q7_q5(int a, int b)
{
	int sum = a;
	printf("%d",a);
	for (int i = a; i <= b; i++)
	{
		printf("+%d", i);
		sum += i;
	}
	return sum;
}
void calc(int a, int b, char c)
{
	int result = -1;
	switch (c)
	{
	case '+':
		result = q7_q5(a, b);//더하기 함수
		printf("\n결과 %d\n", result);
		break;
	case '*':
	case 'x':
	case 'X':
		result = q6(a, b);//곱하기
		printf("결과 %d\n", result);
		break;

	default:
		printf("%c는 잘못된 문자입니다.\n", c);
		break;
	}
}
int main()
{
	//q4
	printf("q4 첫번째 문자");
	char c1 = getchar();
	rewind(stdin);
	printf("q4 두번째 문자");
	char c2 = getchar();
	q4(c1, c2);
	printf("q5\n");
	printf("\ntotal = %d\n", q5());
	int a, b;
	printf("q6\n");
	printf("숫자 입력(a b)");
	scanf_s("%d %d", &a, &b);
	printf("total=%d",q6(a, b));
	printf("\nq7\n");
	printf("숫자 2개 입력\n");
	scanf_s("%d %d", &a, &b);
	rewind(stdin); //버퍼에 저장된 값들을 다 지워줌. 
	printf("문자 입력(+ * x X 중 하나)\n");
	//char c = getchar();
	char c;
	scanf_s("%c", &c, 1);
	calc(a, b, c);

	return 0;
}