#include<stdio.h>

void enterKey()
{
	printf("\n");
}
void printPowerNumber(int n)
{
	printf("%d", n * n);
}
int inputNum()
{
	int n;
	printf("�����Է�\n");
	scanf_s("%d", &n);
	return n;
}

//�Ű������� ��ȯ�� �� �� �ִ� ��
int PowerNum(int n, int p) //n: ����, p:������
{
	if (p <= 0)
		return 1;
	else if (p == 1)
		return n;
	else 
	{ 
		int num = n;
		for(int i = 0; i < p-1; i++)
			n *= num;
	}
	return n;
}

void printNumber(int n)
{
	printf("%d", n);
}

int main()
{
	int num = inputNum();
	printPowerNumber(num);
	enterKey();
	printPowerNumber(inputNum());
	enterKey();
	printf("���� 2���� ���ؼ� �Է¹ް� ����غ�\n");
	enterKey();

	return 0;
}
int hocul()// ȣ���غ���

{
	enterKey();
	printNumber(30);//2��
	enterKey();
	//1��
	enterKey(); //�� �� ��� ȣ��
	printPowerNumber(3);
	enterKey();
	int mynum = inputNum();
	int result = PowerNum(mynum, 3);
	printf("%d", result);
	//3��
	//�Է��� ���� ��ȯ - inputNum()
	//PowerNum - �Է��� ������ p���� ���
	//�� ����� ȭ�鿡 �Ѹ�
	printNumber(PowerNum(inputNum(),2));

	//4��
	int num = inputNum();
	int power = inputNum();
	printNumber(PowerNum(num, power));


	return 0;
}