#include<stdio.h>
int main()
{
	//�ݺ���
	//for while do while �� �ִµ� 
	//���� ��ǥ���� �� for

	//����� 10�� ����ϰ� �ʹٸ�?
	for (int i = 0; i < 10; i++)
	{
		printf("�̵��ؼ�����\n");
	}

	int count; //count���� 10�� ����.
	while (count < 10)
	{
		printf("count=%d\n", count);
		count++;
	}
	//while�ȿ� �ִ� ������ �����̶� ������ 1���� ������ ����� ���� 

	return 0;
}