#include<stdio.h>
int main()
{
	//주소를 저장하는 변수=포인터

//int는 정수를 저장하는 변수
//int*는 정수변수를 저장하는 정수 포인터
	int* ptr_a = &a;

	//대용량의 데이터를 관리하는것
	//배열이라는 것을 씀
	int numbers[5] //5개의 숫자를 저장
	int* p = numbers;

	//p[0]=첫번째=numbers[0]
	//p[1]=두번째=numbers[1]

	//ptr_a, p는 변수의 위치를 저장
	//그 중에서 p는 numbers와 마찬가리조
	//5칸짜리 데이터의 시작위치를 저장함 그리고 그 위치안에 있는 데이터에 접근하려면 
	//[0] 이렇게 대과호 연산을 쓰면 된다.

	//출력
	int number;

	//입력
	printf("숫자를 입력: ");
	scanf_s("%d", &number);
	//number 변수의 주소(위치)에 접근
	//그리고 그 안에 들어갈 값을 집어넣음
	printf("number=%d\n", number);
	//조건문
	if (number > 0)
	{
		printf("number는 양수에요\n");
	}
	else if (number == 0) //else if나 else 없이 if만 있는 경우도 있다.
	{
		printf("number는 0\n");
	}
	else //음수...0도 아니고 0을 넘지도 않음
	{
		printf("number는 음수에요.\n");
	}









	return 0;
}