#include<stdio.h>
int main()
{
	/*1. 나이를 입력한다.
if문으로 음수에 대한 예외처리를 한다.
그리고 이 아래 메시지는 switch문으로 해본다. (못하면 if로라도 해보기)
유아기 -> 응애응애
10대 -> 급식먹는 친구들
20대 -> 청춘
30대 -> 일잘러
40대 -> 관리자
그 외 -> 멋쟁이
	*/
	int age;
	printf("나이 입력 :");
	scanf_s("%d\n", &age);
	if (age < 0)
		printf("음수");
	else
	{
		switch (age)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				printf("유아기");
				break;
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
				printf("급식먹는 친구들");
				break;
			case 20:
			case 21:
			case 22:
			case 23:
			case 24:
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
				printf("청춘");
				break;
			case 30:
			case 31:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
			case 37:
			case 38:
			case 39:
				printf("일잘러");
				break;
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 47:
			case 48:
			case 49:
				printf("관리자");
				break;

		default:
			printf("멋쟁이");
			break;
		}
	}
	/*2. 학점을 입력받고 그에 따라서 결과 출력하기
음수 -> 퇴학
1.0 미만 -> F
2.0 미만 -> D
3.0 미만 -> C
4.0 미만 -> B
4.5 미만 -> A
4.5 -> A+
4.5 초과 -> 교수
	*/
	int score = 0;
	printf("학점 입력 :");
	scanf_s("%d\n", &score);
	if (score < 0);
	printf("음수");
	score = score / 2;
	switch (score / 10) 
	{
	case 10:
	case 9:
		printf("A학점 입니다\n"); 
		break;
	case 8: 
		printf("B학점 입니다\n"); 
		break;
	case 7: 
		printf("C학점 입니다\n"); 
		break;
	case 6: 
		printf("D학점 입니다\n"); 
		break;
	default: 
		printf("F학점 입니다\n");
		break;
	}

}






	return 0;
}