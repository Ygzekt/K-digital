#include<stdio.h>
int main()
{
	//1.
	printf("�̸��� ��ο��Դϴ�.\n" );

	//2.
	int age;
	printf("�Է�: ");
	scanf_s("%d", &age);
	printf("�� ���̴� %d���Դϴ�.\n", age);

	//3.
	int a, b;
	printf("�Է�1 : ");
	scanf_s("%d", &a);
	printf("�Է�2 : ");
	scanf_s("%d", &b);
	printf("��� : %d\n", (a * a) + (b * b));


	//4.
	char name[100];
	printf("���ڸ� �л��� �̸���?\n");
	rewind(stdin);
	scanf_s("%s", name, sizeof(name)); //�����̽��� ©��
	printf("�� ���ڸ� �л��� �̸��� %s�Դϴ�.\n", name);
	//���⸦ �� ��� gets(name)�� �� ��. �ٸ� ���ڴ� scanf_s�� �� ��.


	//5.
	double dollar;
	printf("�޷��Է� : ");
	scanf_s("%lf", &dollar);
	printf("�޷���� : %lf krw\n", dollar * 1298.89);
	

	//6.









	return 0;
}