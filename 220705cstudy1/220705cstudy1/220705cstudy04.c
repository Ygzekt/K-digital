#include<stdio.h>
int main()
{
	//�迭
	//�л� 100���� ���̸� �����ϴ� �����?

	//1.������ 100�� �����.
	//int student1���� �����ؼ�
	//



	//2. �迭�� �̿��Ѵ�.
	int stu_numbers[100];
	for (int i = 1; i <= 100; i++);
	stu_numbers[i - 1] = i;
	//�迭�� ���� ù��°�� [0]���� ����.
	//�׸��� ���� ����-1�� ����.
	//���⼱ ���̰� 100�̴ϱ� [99]��°�� ��

	//ó���� �迭 ���鶧 ���� �Ҵ絵 ����
	int numbers[5] = { 10,20,30,40,50 };
	printf("%d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
	//stu_numbers�� 100ĭ¥�� �޸��� ������
	//�� stu_numbers�� ������
	int* ptr = stu_numbers;

	printf("\n%d\n", stu_numbers[50]);//���� 51
	ptr[50] = 1000;

	printf("\n%d\n", stu_numbers[50]);

	printf("[2]��°(����°) �� �����ϱ�\n");
	scanf_s("%d", ptr + 2);
	printf("\n%d\n", stu_numbers[2]);
	printf("\n%d\n", ptr[2]);

	int my_nums[5] = { 10,20,30,40,50 };
	ptr = my_nums;
	printf("%d", ptr[2]);

	printf("\n%d %d %d %d\n", ptr[2], *(ptr + 2), stu_numbers[2], *(stu_numbers + 2));


	stu_numbers = my_nums; //������ ����� �ȵȴ�.
	//stu_numbers�� �� �� ����ų �� ����.




	return 0;
}