#include<stdio.h>
/*
1. ���� a�� b�� c�� ���� �Է¹ް�, a���� b������ ���� ���ϵ�, c�� ��� �κ���
�����ϰ� ���� ���� ��.
�� ���� main�� ��ȯ�ϴ� �Լ� �ۼ��ϱ�(���ϰڴٸ� �׳� main�� ���� ¥����)
ex) 1~10������ �� 3�� ��� ����
*/
//2. Sec(��) ���� �Է¹޾Ƽ� �ð��� h�� m�ʶ�� �� ����ϵ�, 3600�̻��� ���� ������
//���� �޽����� ����Ѵ�.
//�׸��� m ���� ��ȯ�Ѵ�.

//1��
int q1(int a, int b, int c)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % c == 0)
			continue;

		sum += i;
	}
	return sum;
}
int q2(int Sec)
{
	if (Sec >= 3600)
	{
		printf("����\n");
		return -1;
	}
	int min = Sec / 60;
	int s = Sec % 60;
	printf("%d�� %d��\n", min, s);
	return min;
}
//3. ��ȯ���� �Ű������� ������ ȭ���� ������ �ٲ� �� �ִ� �Լ��� ���Ͻÿ�.
//system('color a0') �̿�
void q3()
{
	system("color 4a");
}
int main()
{
	//1��
	int a, b, c;
	printf("1�� a b c ���� �Է�");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("��� : %d\n", q1(a,b,c));

	//2��
	int Sec;
	printf("2�� �� �Է�");
	scanf_s("%d", &Sec);
	printf("M�� : %d\n", q2(Sec));

	//3�� system("color a0");
	q3();
	return 0;
}