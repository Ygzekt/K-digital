#include<stdio.h>
//1. �迭�� ����� ��, �迭�� ũ�⸦ ����ڰ� ���Ѵ�.
//�������� malloc,calloc�Ⱦ��� ���� Ǯ��
#define MAX 1024 //��ũ�� ���
int main()
{
	int numbers[5];
	int mynumbers[MAX];
	//malloc, calloc�� �� ����
	//int num = 5;
	//int numbers[num]; //������ �迭 ũ�� ����

	int size = sizeof(numbers) / sizeof(int);

	for (int i=0; i < size; i++)
	{
		printf("%d��° ���� �Է�", i);
		scanf_s("%d", &numbers[i]);
	}

	int max = numbers[0];
	int max_index = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			max_index = i; //����
		}
	}

	return 0;
}