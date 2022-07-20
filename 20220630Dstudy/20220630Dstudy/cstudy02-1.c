#include<stdio.h>
int main()
{
	//1번
	
	int x, y;
	printf("x와 y값은?");
	scanf_s("%d %d", &x, &y);
	if (x > 0)
	{

		if (y > 0)
			printf("\n1사분면이다.");
		else (y < 0)
			printf()

	}
	//3번
	int h, m;//정답 5	6,9번
	printf("\n시간과 분을 입력하세요.\n");
	scanf_s("%d %d", &h, &m);

	if (m < 45)
	{
		printf("m보다 적어 울린다.");
	}
	else  // if문의 그 경우의 수가 아닌 경우
	{
		printf("m보다 커 안울린다.");
	}

	return 0;
}