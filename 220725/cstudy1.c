#include<stdio.h>
struct Student
{
	char name[100];
	int number;
}typedef Student;

int main()
{
	Student s1 = { .number = 1,.name = "������" };
	printf("%s %d\n", s1.name, s1.number);
	Student ss[3];
	ss[0] = (Student){ .number = 2,.name = "������" };
	printf("%s %d\n", ss[0].name, ss[0].number);
	printf("�л��� �̸���?");
	gets(ss[1].name);
	printf("�л��� ��ȣ��?");
	scanf_s("%d", &ss[1].number);
	ss[2].number = 10;
	strcpy(ss[2].name, "��ȣ��");
	printf("%s %d\n", ss[1].name, ss[1].number);
	printf("%s %d\n", ss[2].name, ss[2].number);
	return 0;
}
//cstudy2
int checkDupicate(int arr[], int size, int n)
{
	for (int i = 0; i < size; i++)
	{
		if (n == arr[i])
			return 1;
	}
	return 0;
}
int main()
{
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		int n;
		printf("�� �� �� ��");
		scanf_s("%d", &n);
		if (checkDupicate(numbers, i, n) == 0)
			numbers[i] = n;
		else
			i--;
	}
	return 0;
}
