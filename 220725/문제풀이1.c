#include<stdio.h>
//1. 이 학생 정보를 출력해주는 함수를 만드시오
//ex) 함수(s1) = > 1번 학생 도광현
//이렇게 출력하기
struct Student
{
	int num;
	char name[100];
}typedef Student;
void printStudent(Student s)
{
	printf("%d번 학생 %s\n", s.num, s.name);
}
int main()
{
	Student s = { .name = "도광현",.num = 1 };
	printStudent(s);

	Student students[3];
	for (int i = 0; i < 3; i++)
	{
		int temp;
		printf("학생의 번호는?\n");
		scanf_s("%d", temp);
		int duplicate = 0;
		for (int j = 0; j < i; j++)
		{
			if (students[i].num == temp)
			{
				printf("중복");
				i--;

			}
		}
	}

	return 0;
}