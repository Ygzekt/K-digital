#include<stdio.h>
/*
1. 변수 a와 b와 c의 값을 입력받고, a부터 b까지의 합을 구하되, c의 배수 부분은
제외하고 합을 구할 것.
이 값을 main에 반환하는 함수 작성하기(못하겠다면 그냥 main에 먼저 짜보기)
ex) 1~10까지의 합 3의 배수 제외
*/
//2. Sec(초) 값을 입력받아서 시간이 h분 m초라는 걸 출력하되, 3600이상의 값을 받으면
//오류 메시지를 출력한다.
//그리고 m 값은 반환한다.

//1번
int q1(int a, int b, int c)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % c == 0)
			continue;

		sum += i;
	}
	return sum;
}
int q2(int Sec)
{
	if (Sec >= 3600)
	{
		printf("오류\n");
		return -1;
	}
	int min = Sec / 60;
	int s = Sec % 60;
	printf("%d분 %d초\n", min, s);
	return min;
}
//3. 반환값과 매개변수는 없으나 화면의 색깔을 바꿀 수 있는 함수를 구하시오.
//system('color a0') 이용
void q3()
{
	system("color 4a");
}
int main()
{
	//1번
	int a, b, c;
	printf("1번 a b c 숫자 입력");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("결과 : %d\n", q1(a,b,c));

	//2번
	int Sec;
	printf("2번 초 입력");
	scanf_s("%d", &Sec);
	printf("M값 : %d\n", q2(Sec));

	//3번 system("color a0");
	q3();
	return 0;
}