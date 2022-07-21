#include<stdio.h>

void enterKey()
{
	printf("\n");
}
void printPowerNumber(int n)
{
	printf("%d", n * n);
}
int inputNum()
{
	int n;
	printf("숫자입력\n");
	scanf_s("%d", &n);
	return n;
}

//매개변수랑 반환값 둘 다 있는 것
int PowerNum(int n, int p) //n: 숫자, p:제곱수
{
	if (p <= 0)
		return 1;
	else if (p == 1)
		return n;
	else 
	{ 
		int num = n;
		for(int i = 0; i < p-1; i++)
			n *= num;
	}
	return n;
}

void printNumber(int n)
{
	printf("%d", n);
}

int main()
{
	int num = inputNum();
	printPowerNumber(num);
	enterKey();
	printPowerNumber(inputNum());
	enterKey();
	printf("숫자 2개에 대해서 입력받고 출력해봄\n");
	enterKey();

	return 0;
}
int hocul()// 호출해보기

{
	enterKey();
	printNumber(30);//2번
	enterKey();
	//1번
	enterKey(); //한 줄 띄기 호출
	printPowerNumber(3);
	enterKey();
	int mynum = inputNum();
	int result = PowerNum(mynum, 3);
	printf("%d", result);
	//3번
	//입력한 숫자 반환 - inputNum()
	//PowerNum - 입력한 숫자의 p제곱 출력
	//그 결과를 화면에 뿌림
	printNumber(PowerNum(inputNum(),2));

	//4번
	int num = inputNum();
	int power = inputNum();
	printNumber(PowerNum(num, power));


	return 0;
}