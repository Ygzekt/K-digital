#include<stdio.h>
int ggd()//void라면 return; 적거나 생략가능
		//int, double,char등이라면 반드시 return을 적어야함
		//깜빡하고 리턴 안 적어도 동작하고 이상한 동작을 할 수도 있는데 int 앞에 적었으면 반드시 return 정수; 적어야함
{
	int sum = 0;
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			sum += (i * j);
	}
	return sum;
}
void ggd2(int a)
{
	for (int i = 1; i <= 9; i++)
	{
		printf("%d x %d = %d\n", a, i, a * i);
	}
}
void ggd3(int s, int e)//출력
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = s; j <= e; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
}
int ggd4(int a, int b)
{
	//스왑
	if (s > e)
	{
		
	}
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d= %d\n", i, j, i * j);
		}
			sum += (i * j);
	}
	return sum;
}
int main()
{
	//1번
	printf("q1 : %d", ggd());
	//2번
	int dan;
	printf("\nq2: 몇 단?\n");
	scanf_s("%d", &dan);
	ggd2(dan);
	//3번
	printf("\nq3: x몇부터 x몇?\n");
	int start, end;
	scanf_s("%d %d", &start, &end);
	ggd3(start, end);
	//4번
	int s_d, e_d;
	printf("몇 단부터 몇 단의 합?\n");
	scanf_s("%d %d", &s_d, &e_d);
	printf("4번 결과 : %d\n", ggd(s_d, e_d));

	return 0;
}