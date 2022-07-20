#include<stdio.h>
int main()
{
	//if문 - java, c#, js 다 똑같음
	//if = 만약에
	//경우의 수가 여러개 이거나

	int age = 10;
	age = 0;
	if(age > 0)
		printf("age는 양수입니다.\n"); //age갑이 0이거나 음수면 출력이 안됨

	age = -1;
	if (age < 0) // 괄호 안에 있는 조건이 true일 때
	{				//작성해야 하는 코드가 2줄 이상이면 중괄호로 
					//묶어야 함...1줄짜리도 중괄호써도 됨

		printf("age는 음수입니다.\n");
		printf("나이는 음수 일 수 없습니다.\n");
	}
	//if문에 대해서 하고 싶은 말들...
	//1. 제발 if 끝에 세미콜론 붙이지 말기
	//if(age==00; <- 이거 적으면 이 안에 조건을 무조건 true로 본다.
	//2.if(age=1) <- age에 1을 대입시키는 거라서 무조건 true
	// if(1)
	//참고로 0이외의 숫자는 양수 음수 모두다 true
	//즉 if(age = -1) 이렇게 적어도 무조건 true처럼 동작을 함
	age = 0;
	if (age = -1) //if(-1)
		printf("이건 무조건 출력됨.\n");
	age = 0;
	if (age = 0) //if(0)
		printf("이건 절~~~~~~~~대로 출력 안됨");

	//3.이렇게 적지 않는게 좋다. 가독성 떨어짐
	if (age > 0)printf("age는 양수입니다.");
	if (age > 0) { printf ("age는 양수입니다."); }

	//4.java랑 c계열(c, c++, c#)은 권장 중괄호 위치가 다르다.
	if (age > 0) {//<- 이게 자바 스타일
		printf("age는 양수");
	}

	//경우의 수가 2가지인 경우
	if (age > 0)
	{
		printf("age는 양수");
	}
	else  // if문의 그 경우의 수가 아닌 경우
	{
		printf("age는 양수가 아니다.");
	}

	//경우의 수가 3가지인 경우
	if (age > 0)
		printf("age는 +");

	else if (age == 0)//else if의 개수는 많이 적을 수 있으나
		printf("age는 0"); //너무 많으면 코드의 가독성이 떨어짐
	else
		printf("age는 음수");

	//1.if문은 중첩이 가능하다.
	if (age > 0)
	{
		if (age % 2 == 0)
			printf("\n\n\n\n짝");
		else
			printf("\n\n\n\n홀");
	}

	//2. if문의 괄호 안에 삼항연산자처럼 여러 개의 식 적기 가능
	if (age > 0 && age % 2 == 0)
		printf("age는 자연수이면서 짝수이다.");
	if (age > 0 || age % 2 != 0)
		printf("age는 자연수이거나 혹은 홀수이다.");
	

	return 0;
}