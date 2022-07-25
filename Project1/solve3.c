#include<stdio.h>
//8. 1부터 n까지의 값을 곱하는 함수를 작성하시오(반복문)
int q8(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	return sum;
}
//9. 1부터 n까지의 값을 곱하는 함수를 작성하시오(재귀함수)
//1부터 5까지 값을 곱하는 함수
//1부터 5까지의 곱은?
//5곱하기 1부터 4까지의 곱
//1부터 4까지의 곱은?
//4곱하기 1부터 3까지의 곱
//1부터 3까지의 곱은?
//3곱하기 1부터 2까지의 곱
//1부터 2까지의 곱은?
//2곱하기 1부터 1까지의 곱 -----------> 1부터 1이므로 return 1로 끝내주면 됨. 여기서 안 끝내면.... 예외처리 안 하면 stackoverflow(스택오버플로우)
//2곱하기 1부터 0까지의 곱을 또 구해야 함...
//0곱하기 -1까지의 곱...

int q9(int n)
{
	if (n == 1)
		return 1;
	return n * q9(n - 1);
}

int q10(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return q10(n - 1) + q10(n - 2);
}

//10. 다음 규칙을 갖는 함수를 작성하시오.
//n == 0 => 0
//n == 1 => 1
//n >1   => f(n-1) + f(n-2)
//숫자 패턴
//1,   1,   2,   3,     5,   8,   13   21
//n=1 n=2  n=3   n=4  n=5   n=6   n=7  n=8

int main()
{
	printf("q8~q10\n");
	printf("n 입력");
	int n;
	scanf_s("%d", &n);
	printf("8번 결과 : %d\n", q8(n));
	printf("q9");
	printf("9번 결과 : %d\n", q9(n));
	printf("q10");
	printf("10번 결과 : %d\n", q10(n));

	return 0;
}