#include<stdio.h>
int main()
{
	//�ݺ���

	//3������ ����
	//1.for��
	for (int i = 0; i < 10; i++)
		printf("�̵��ؼ����� �ȳ��ϼ���\n");
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i;
	printf("1���� 10������ �� : %d\n", sum);

	//for���� �߰�ȣ�� ���� �� �ִ�.
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			printf("*");
		else
			printf("!");
	}





	//2. while��
	//3. do while��




	return 0;
}