#include<stdio.h>
int main()
{
	//가위 바위 보(=경우의 수 3개)
	//숫자 0 - 가위
	//숫자 1 - 바위
	//숫자 2 - 보

	int rcp = 0;

	if (rcp == 0)
		printf("가위");
	else if (rcp == 1)
		printf("바위");
	else if (rcp == 2)
		printf("보");
	else
		printf("기타");



	int rcp2 = 1;

	switch (rcp)
	{
	case 0:
		printf("\n가위");
		break; //break 만나면 밑에건 체크하지 않고 switch문 종료
	case 1:
		printf("\n바위");
		break;
	case 2:
		printf("\n보");
		break;
	}
	//break를 만나지 않으면 스위치문이 안 끝나고 다음 경우의 수를 계속 띄운다.



	return 0;
}