#include<stdio.h>
#define ���� 0
#define ���� 1

int main()
{

	//1��
	if (0)
	{
#pragma region ù��° ����



		int month;
		printf("����� �¾��?");
		scanf_s("%d", &month);

		if (month == 12 || month == 1 || month == 2)
			printf("�ܿ�");
		else if (month >= 3 && month <= 5)
			printf("��\n");
		else if (month >= 6 && month <= 8)
			printf("����\n");
		else if (month >= 9 && month <= 11)
			printf("����\n");
		else
			printf("����\n");
#pragma endregion

	}
	//2��
	if (1)
	{
#pragma region �ι�° ����


	printf("���� ���� ��(�÷��̾�1)");
	int p1, p2;
	scanf_s("%d", &p1);
	printf("���� ���� ��(�÷��̾�2)");
	scanf_s("%d", &p2);
	p1 %= 3;
	p2 %= 3;
	switch (p1)
	{
	case 0:
		printf("p1:����\n");
		switch (p2)
		{
		case 0:
			printf("p2: ����\n");
			printf("���\n");
			break;
		case 1:
			printf("p2: ����\n");
			printf("��\n");
			break;
		case 2:
			printf("p2: ��\n");
			printf("�̱�\n");
			break;
		default:
			break;
		}
		break;
	case 1:
		printf("p1:����\n");
		switch (p2)
		{
		case 0:
			printf("p2: ����\n");
			printf("�̱�\n");
			break;
		case 1:
			printf("p2: ����\n");
			printf("���\n");
			break;
		case 2:
			printf("p2: ��\n");
			printf("��\n");
			break;
		default:
			break;
		}
		break;
	case 2:
		printf("p1:��\n");
		switch (p2)
		{
		case 0:
			printf("p2: ����\n");
			printf("��\n");
			break;
		case 1:
			printf("p2: ����\n");
			printf("�̱�\n");
			break;
		case 2:
			printf("p2: ��\n");
			printf("���\n");
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	
#pragma endregion
	}
	//3��
	//����� �� 12��

	printf("����?");
	int year;
	scanf_s("%d", &year);
	switch (year)
	{
	case 0:
		printf("������\n");
		break;
	case 1:
		printf("��\n");
		break;
	case 2:
		printf("��\n");
		break;
	case 3:
		printf("��\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("��\n");
		break;
	case 6:
		printf("��\n");
		break;
	case 7:
		printf("����\n");
		break;
	case 8:
		printf("��\n");
		break;
	case 9:
		printf("��\n");
		break;
	case 10:
		printf("ȣ����\n");
		break;
	case 11:
		printf("�䳢\n");
		break;
	default:
		break;
	}
	//������
	//�����򰡿��� ���� ��
	//���ڵ鿡�� �̸��� ���̴� ��
	enum ��������
	{
		�� = 4, ��, ȣ����, �䳢, ��, ��, ��, ��, ������ = 0, ��, ��, ����
	};

	int qustn = year % 12;

	enum �������� temp = ������;
	printf("%d\n", temp);
	
	if (qustn == ��)
		printf("��\n");
	else if (qustn == ��)
		printf("��\n");
	else if (qustn == ȣ����)
		printf("ȣ����\n");
	else if (qustn == �䳢)
		printf("�䳢\n");
	else if (qustn == ��)
		printf("��\n");
	else if (qustn == ��)
		printf("��\n");
	else if (qustn == ��)
		printf("��\n");
	else if (qustn == ��)
		printf("��\n");
	else if (qustn == ������)
		printf("������\n");
	else if (qustn == ��)
		printf("��\n");
	else if (qustn == ��)
		printf("��\n");
	else if (qustn == ����)
		printf("����\n");

	return 0;
}