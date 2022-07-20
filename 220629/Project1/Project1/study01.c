#include<stdio.h>
int main()
{
	int age = 27;
	long bigValue = 9999999999;
	short smallValue = 5;
	double pi_value = 3.1415;
	float myPi = 3.14;

	char Mylnitial = 'L';

	int nowYear = 2022;
	printf("내가 태어난 연도는 %d입니다.\n", nowYear + 1 - age);
	printf("원주율 값은 %f입니다. \n", pi_value);

	//변수를 통해서 값을 입력받기
	//내가 입력한 숫자의 제곱값을 구해보자.

	int input;
	printf("숫자를 입력해주세요.");
	scanf_s("%d", &input);
	printf("그 숫자의 제곱은 %d입니다.\n", input * input);
	int 노민영 = input * input;
	printf("답 : %d\n", 노민영);

	//1.int age라는 변수를 선언
	//이 변수에 나의 나이를 입력한다.
	//2.내 나이는 age살입니다. 출력
	//3.age 변수를 이용해서 내가 태어난 연도를 확인해보기(한국식 나이를 기준으로 한다.)
	//4.원의 반지름 r값을 입력받고, 원의 넓이와 원의 둘레값 출력하기
	//원의 넓이 : r*r*3.14
	//원의 둘레 : 2*r*3.14
	//5.byte를 입력받고 그에 해당하는 bit값 출력하기
	//입력 : 1 출력 : 5
	//입력 : 8 출력 : 40
	//6.bit값을 입력받고 그에 해당하는 byte값 출력하기
	//입력 : 8 출력 : 1
	//입력 : 40 출력 : 5
	//7.bit값과 byte값을 입력받고 아래와 같이 출력되게 한다.(변수명은 mybit, mybyte가정)
	//mybit *8 = mybyte 값입니다.



	return 0;
}