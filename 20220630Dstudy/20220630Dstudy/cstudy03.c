#include<stdio.h>
int main()
{
	//���� ���� ��(=����� �� 3��)
	//���� 0 - ����
	//���� 1 - ����
	//���� 2 - ��

	int rcp = 0;

	if (rcp == 0)
		printf("����");
	else if (rcp == 1)
		printf("����");
	else if (rcp == 2)
		printf("��");
	else
		printf("��Ÿ");



	int rcp2 = 1;

	switch (rcp)
	{
	case 0:
		printf("\n����");
		break; //break ������ �ؿ��� üũ���� �ʰ� switch�� ����
	case 1:
		printf("\n����");
		break;
	case 2:
		printf("\n��");
		break;
	}
	//break�� ������ ������ ����ġ���� �� ������ ���� ����� ���� ��� ����.



	return 0;
}