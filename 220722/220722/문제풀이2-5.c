#include<stdio.h>
#include"student.h"
int main()
{
	Stu s1 = { .math = 40,.kor = 50, .eng = 55 };
	Stu s2 = { 50, 60, 55 };

	int avg = ( s1.math + s1.kor + s1.eng ) / 3;
	int avg2 = ( s2.math + s2.kor + s2.eng ) / 3;

	if (avg >= avg2)
		printf("ù��° �л��� ����� �� ũ��.\n");
	else
		printf("�� ��° �л��� ����� �� ũ��.\n");

	Stu students[5];
	for (int i = 0; i < 5; i++)
	{
		printf("�л��� ������ ���� �Է�.");
		scanf_s("%d %d %d", &students[i].math, &students[i].kor, &students[i].eng);
	}
	Stu Elite = students[0];
	int num = 0;
	for (int i = 0; i < 5; i++)
	{
		int average = students[i].kor + students[i].eng+ students[i].math;
		average /= 3;
		int max = Elite.kor + Elite.eng+ Elite.math;
		max /= 3;

		if (max < average)
		{
			Elite = students[i];
			num = i;
		}
	}
	printf("%d��° �л��� 1���̴�.\n", num);

	return 0;
}