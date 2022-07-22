#include<stdio.h>
//1. 배열을 만드는 데, 배열의 크기를 사용자가 정한다.
//선생님은 malloc,calloc안쓰고 문제 풀음
#define MAX 1024 //매크로 상수
int main()
{
	int numbers[5];
	int mynumbers[MAX];
	//malloc, calloc을 쓴 이유
	//int num = 5;
	//int numbers[num]; //변수로 배열 크기 지정

	int size = sizeof(numbers) / sizeof(int);

	for (int i=0; i < size; i++)
	{
		printf("%d번째 숫자 입력", i);
		scanf_s("%d", &numbers[i]);
	}

	int max = numbers[0];
	int max_index = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			max_index = i; //정답
		}
	}

	return 0;
}