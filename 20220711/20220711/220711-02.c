#include<stdio.h>
void printMySelf()//선언
{
	printf("안녕하세요.\n");
	printf("노민영입니다.\n");
}
//제곱은 제곱인데, 0이나 음수면 그냥 0반환함
int MathPower(int num)//선언
{
	if (num <= 0)
		return 0;

	return num * num;
}

//반환형은 있는데 매개변수는 없다.
char calcul()//그것에 대한 연산 결과에 따라 - 0 + 글자 반환함.
{
	printf("첫번째 숫자 입력해보세요.");
	int num1;
	scanf_s("%d", &num1);
	printf("두번쨰 숫자 입력해보세요.");
	int num2;
	scanf_s("%d", &num2);
	int result = num2 - num1;
	if (result < 0)
		return'-';
	else if (result == 0)
		return'0';
	else
		return'+';
}
//변환형은 없고, 매개변수는 있는 형태로 하기
void calcul_sign(int num1, int num2)
{
	int result = num2 = num1;
	if (result < 0)
		printf("기호는 -입니다.\n");
	else if (result == 0)
		printf("기호는 0입니다.\n");
	else
			printf("기호는 +입니다.\n");

}
int main()
{
	printMySelf();//호출
	int result = MathPower(5);
	printf("5의 제곱은 %d입니다.\n", result);
	printf("3의 제곱은 %d입니다.\n", MathPower(3));
	result = MathPower(-7);
	printf("result = %d\n", result);

	char sign = calcul();
	printf("기호는 %c입니다.\n", sign);

	int n1, n2; //입력을 main에서 하고 있다.
	printf("첫번째수?");
	scanf_s("%d", &n1);
	printf("두번째수?");
	scanf_s("%d", &n2);
	calcul_sign(n1, n2); //n1,n2받아서 계산해서 출력해줌

	calcul_sign(30, 30);

	//함수의 선언
	// 1.함수의 정의를(선언) main위에 적는다.
	// 2.함수의 원형(=헤드)부분만 위에 적고, 정의는 main의 아래에 적는다.
	//

	return 0;
}