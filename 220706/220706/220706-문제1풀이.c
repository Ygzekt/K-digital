#include<stdio.h>
int main()
{
	//1.
	int numbers[5];
	//숫자 5개를 관리함 참고로 여기에는 기본값으로 쓰레기값이 들어감
	//(무슨값이 들어간지 아직 모름)

	//배열의 길이를 구하는 방법
	int size = sizeof(numbers) / sizeof(int);
	//int size = 50; //이렇게 중복선언은 안됨
	size = 5;//위에서 "선언"했다면 그 뒤엔 변수명 적기

	//sizeof -byte값 구하는 것
	//numvers는 5칸짜리 배열이니까 20
	//왜냐면 int5개 저장하는 거고 int 1개당 4byte니가... size = 20/4 =5
	for (int i = 0; i < size; i++)
	{
		int num;
		scanf_s("%d", &num); //num에 값 대입
		numbers[i] = num; //i번째 칸에다가 대입함
	}
	/*for{}안의 두번째 방법
	{
		printf("%d번째 숫자 입력\n", i);
		scanf_s("%d", &numbers[i]);
	}
	*/ 
	//int max, min=0; 입력하지말기.
	//가장 큰수와 작은수를 입력한다.
	int max = numbers[0];
	int min = numbers[0];

	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
		if (min > numbers[i])
		{
			min = numbers[i];
		}
	}
	printf("최댓값 :%d, 최소값 : %d\n", max, min);



	return 0;
}