#include<stdio.h>
int main()
{
	//1.
	printf("�� ���丮��?");
	int fact;
	scanf_s("%d", &fact);
	printf("%d!=%d", fact, fact);
	for (int i = fact - 1; i > 0; i--)
	{
		printf("x%d", i);
	}
	//2.
	int n, m;
	printf("\nn��m�Է��ϼ���.");
	scanf_s("%d %d", &n, &m);
	if (n > m)
	{
		int temp = m;
		m = n;
		n = temp;
	}
	int sum = 0;
	for (int i = n; i <= m; i++)
		sum += i;
	printf("%d���� %d������ ���� %d�̴�.\n", n, m, sum);

	//3.n����m������ ��(�� ¦����)->n�� m���� Ŭ ��� ����ó���ϱ�
	printf("n? m? �Է�");
	scanf_s("%d %d", &n, &m);
	if (n > m)
	{
		printf("ù��°�� �ι������� Ŀ�� �� �� ����\n");
	}
	else
	{
		sum = 0;
		for (int i = n; i <= m; i++)
		{
			if (i % 2 != 0)
				continue;

			sum += i;
		}
		printf("%d���� %d������ ���� %d�̴�.\n", n, m, sum);
	}

	//4.
	while (1)
	{
		int input;
		printf("���ѷ��� �Է�\n");
		scanf_s("%d", &input);
		if (input <= 0)
			break;
		printf("������ : %d\n", input * input);
	}
	printf("4�� �����\n");
	/*�ٸ��� do while�� ����ó�� input�� 0�̾ while������ �������� ���ص� ������ �ѹ��� �����Ѵ�.
	* �� ���ѷ����� ���ų� �� ���ų� ó���� ���� ������ �޾ƾ� �Ѵٸ� do while�� ����.
	*/
	int input = 0;
	do
	{
		printf("�μ��� �Է�\n");
		scanf_s("%d", &input);
		printf("%d", input * input);
	} while (input > 0);


	/* ���� �Է¿� ���� ����� �غ�����.
�Է� : 1
��� : *
�Է� : 2
��� : * 
        *
       *
        *
�Է� : 3
��� : * *
        *
       * *
        *
       * *
        *
	*/
	int N;
	printf("�Է�");
	scanf_s("%d", &N);
	for (int i = 0; i < 2 * N; i++)
	{
		int onOffSwitch = i;
		for (int j = 0; j < N; j++);//�� �κ�
		{
			if (onOffSwitch % 2 == 0)
				printf("*");
			else
				printf(" ");
			onOffSwitch++;
		}
		printf("\n");//�� �� ����ϰ� �� �� ��� ��
	}



	return 0;
}