#include<stdio.h>
int main()
{
	//1.int age라는 변수를 선언
	//이 변수에 나의 나이를 입력한다.
	//2.내 나이는 age살입니다. 출력
	//3.age 변수를 이용해서 내가 태어난 연도를 확인해보기(한국식 나이를 기준으로 한다.)
	//4.원의 반지름 r값을 입력받고, 원의 넓이와 원의 둘레값 출력하기
	//원의 넓이 : r*r*3.14
	//원의 둘레 : 2*r*3.14
	//5.byte를 입력받고 그에 해당하는 bit값 출력하기
	//입력 : 1 입력 : 5
	//출력 : 8 출력 : 40
	//6.bit값을 입력받고 그에 해당하는 byte값 출력하기
	//입력 : 8 출력 : 1
	//입력 : 40 출력 : 5
	//7.5,6번에서 입력받은 걸 가지고 출력하기(이상한 문제;;)
	//mybit * 8 = mybyte 값입니다.

	int age = 27;
	//scanf_s("%d\n", &age); 하지말기, \n붙이는거 아님.
	scanf_s("%d", &age);
	printf("내 나이 : %d\n", age);
	printf("나는 %d년생입니다.\n", 2022 + 1 - age);

	int r;
	printf("반지름 입력해요\n");
	scanf_s("%d", &r);
	printf("원의 넓이 : %f\n", r * r * 3.14);
	printf("원의 둘레 : %f\n", 2 * r * 3.14);
	double round = 2 * r * 3.14;
	printf("원의 둘레 : %f\n", round);
	//코드이동 : alt + 화살표 위아래
	//코드 바꾸기 : 컨트롤 + g
	//5번
	printf("몇 byte?\n");
	int byte;
	scanf_s("%d", &byte);
	printf("%d byte = %d bit\n", byte, byte * 8);
	//6번
	int bit;
	printf("몇 bit?\n");
	scanf_s("%d", &bit);
	printf("%d bit = %d byte\n", bit, bit / 8);

	//7번
	//mybyte * 8 = mybit;

	int mybyte = byte;
	int mybit = mybyte * 8;

	printf("%d byte * 8 = %d bit\n", mybyte, mybit);

	return 0;
}