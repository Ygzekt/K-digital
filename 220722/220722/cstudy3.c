#include<stdio.h>
struct student
{
	int math;
	int eng;
	int kor;
};
int main()
{
	struct student s1;
	s1.math = 50;
	s1.kor = 60;
	s1.eng = 100;

	struct student s2;
	s2.math = 100;
	s2.kor = 100;
	s2.eng = 0;

	//1개의 변수가 3개의 값을 저장함
	struct student s3;
	scanf_s("%d", &s3.math);
	scanf_s("%d", &s3.kor);
	scanf_s("%d", &s3.eng);

	return 0;
}