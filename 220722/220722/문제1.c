#include<stdio.h>
/*
1. printArr�� ȣ���غ�����.
�� size�� �Ѱ���� �ϴ����� �����غ�����.


2. �迭 ���� �ִ��� ��ȯ�ϰ�
�ּڰ��� printf�� ����ϴ� �Լ��� 
����� ȣ���غ�����.


3. �迭 ���� ��ȣ�� ���� ������
�Լ��� ����� ȣ���ؼ� �׽�Ʈ�غ�����.
*/
void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}
int main()
{
	printArr();
	return 0;
}