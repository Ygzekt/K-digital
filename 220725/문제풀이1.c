#include<stdio.h>
//1. �� �л� ������ ������ִ� �Լ��� ����ÿ�
//ex) �Լ�(s1) = > 1�� �л� ������
//�̷��� ����ϱ�
struct Student
{
	int num;
	char name[100];
}typedef Student;
void printStudent(Student s)
{
	printf("%d�� �л� %s\n", s.num, s.name);
}
int main()
{
	Student s = { .name = "������",.num = 1 };
	printStudent(s);

	Student students[3];
	for (int i = 0; i < 3; i++)
	{
		int temp;
		printf("�л��� ��ȣ��?\n");
		scanf_s("%d", temp);
		int duplicate = 0;
		for (int j = 0; j < i; j++)
		{
			if (students[i].num == temp)
			{
				printf("�ߺ�");
				i--;

			}
		}
	}

	return 0;
}