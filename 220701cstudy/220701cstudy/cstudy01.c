#include<stdio.h>
int main()
{
	//1��
	int season;
	printf("�¾ ���� ��������.\n");
	scanf_s("%d", &season);

	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�");
		break;
	case 3:
	case 4:
	case 5:
		printf("��");
		break;
	case 6:
	case 7:
	case 8:
		printf("����");
		break;
	case 9:
	case 10:
	case 11:
		printf("����");
	default:
		printf("����");
		break;
	}
		
	//2��
	int rcp = 0;
	printf("\n���� ������������ ������\n");
	scanf_s("%f", &rcp);
	int rcp1 = 1;
	int rcp2 = 2;
	printf("\n����");
	switch (rcp)
	{
	case 0:
		printf("\n����\n");
		switch (rcp1)
		{
		case 0:
			printf("\n���\n");
			break;
		case 1:
			printf("\n�̱�\n");
			break;
		case 2:
			printf("\n��\n");
			break;
		default:
			break;
		}
		break;
	case 1:
		printf("\n����\n");
		switch (rcp2)
		{
		case 0:
			printf("\n�̱�\n");
			break;
		case 1:
			printf("\n��\n");
			break;
		case 2:
			printf("\n���\n");
			break;
		default:
			break;
		}
		break;
	case 2:
		printf("\n��\n");
		switch (rcp)
		{
		case 0:
			printf("\n��\n");
			break;
		case 1:
			printf("\n���\n");
			break;
		case 2:
			printf("\n�̱�\n");
			break;
		default:
			break;
		}
		break;
	default:
		printf("\n��Ÿ\n");
		break;
	}

	//3��







	return 0;
}