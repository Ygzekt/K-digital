#include<stdio.h>
int main()
{
	//1.int age��� ������ ����
	//�� ������ ���� ���̸� �Է��Ѵ�.
	//2.�� ���̴� age���Դϴ�. ���
	//3.age ������ �̿��ؼ� ���� �¾ ������ Ȯ���غ���(�ѱ��� ���̸� �������� �Ѵ�.)
	//4.���� ������ r���� �Է¹ް�, ���� ���̿� ���� �ѷ��� ����ϱ�
	//���� ���� : r*r*3.14
	//���� �ѷ� : 2*r*3.14
	//5.byte�� �Է¹ް� �׿� �ش��ϴ� bit�� ����ϱ�
	//�Է� : 1 �Է� : 5
	//��� : 8 ��� : 40
	//6.bit���� �Է¹ް� �׿� �ش��ϴ� byte�� ����ϱ�
	//�Է� : 8 ��� : 1
	//�Է� : 40 ��� : 5
	//7.5,6������ �Է¹��� �� ������ ����ϱ�(�̻��� ����;;)
	//mybit * 8 = mybyte ���Դϴ�.

	int age = 27;
	//scanf_s("%d\n", &age); ��������, \n���̴°� �ƴ�.
	scanf_s("%d", &age);
	printf("�� ���� : %d\n", age);
	printf("���� %d����Դϴ�.\n", 2022 + 1 - age);

	int r;
	printf("������ �Է��ؿ�\n");
	scanf_s("%d", &r);
	printf("���� ���� : %f\n", r * r * 3.14);
	printf("���� �ѷ� : %f\n", 2 * r * 3.14);
	double round = 2 * r * 3.14;
	printf("���� �ѷ� : %f\n", round);
	//�ڵ��̵� : alt + ȭ��ǥ ���Ʒ�
	//�ڵ� �ٲٱ� : ��Ʈ�� + g
	//5��
	printf("�� byte?\n");
	int byte;
	scanf_s("%d", &byte);
	printf("%d byte = %d bit\n", byte, byte * 8);
	//6��
	int bit;
	printf("�� bit?\n");
	scanf_s("%d", &bit);
	printf("%d bit = %d byte\n", bit, bit / 8);

	//7��
	//mybyte * 8 = mybit;

	int mybyte = byte;
	int mybit = mybyte * 8;

	printf("%d byte * 8 = %d bit\n", mybyte, mybit);

	return 0;
}