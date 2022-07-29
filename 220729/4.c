#include<stdio.h>
#include"hd1.h"

int main()
{
	//切积1疙老 版快
	StudentScore s1 = { .kor = 100,.eng = 0,.math = 50 };
	//切积 3疙老 版快
	StudentScore students[3] = {
		{.kor = 100,.eng = 10,.math = 90 },
		{.kor = 100,.eng = 100,.math = 90 },
		{.kor = 100,.eng = 100,.math = 100 } };

	students[0].kor = 50;
	printf("%d %d %d\n", students[0].kor, students[1].kor, students[2].kor);

	return 0;
}