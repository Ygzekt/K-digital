#include<stdio.h>
int main()
{
	//1.
	int numbers[5];
	//���� 5���� ������ ����� ���⿡�� �⺻������ �����Ⱚ�� ��
	//(�������� ���� ���� ��)

	//�迭�� ���̸� ���ϴ� ���
	int size = sizeof(numbers) / sizeof(int);
	//int size = 50; //�̷��� �ߺ������� �ȵ�
	size = 5;//������ "����"�ߴٸ� �� �ڿ� ������ ����

	//sizeof -byte�� ���ϴ� ��
	//numvers�� 5ĭ¥�� �迭�̴ϱ� 20
	//�ֳĸ� int5�� �����ϴ� �Ű� int 1���� 4byte�ϰ�... size = 20/4 =5
	for (int i = 0; i < size; i++)
	{
		int num;
		scanf_s("%d", &num); //num�� �� ����
		numbers[i] = num; //i��° ĭ���ٰ� ������
	}
	/*for{}���� �ι�° ���
	{
		printf("%d��° ���� �Է�\n", i);
		scanf_s("%d", &numbers[i]);
	}
	*/ 
	//int max, min=0; �Է���������.
	//���� ū���� �������� �Է��Ѵ�.
	int max = numbers[0];
	int min = numbers[0];

	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
		if (min > numbers[i])
		{
			min = numbers[i];
		}
	}
	printf("�ִ� :%d, �ּҰ� : %d\n", max, min);



	return 0;
}