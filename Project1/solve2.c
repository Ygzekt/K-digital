#include<stdio.h>
void q4(char a, char b)
{
	char color[9] = "color ";
	color[6] = a;
	color[7] = b;
	color[8] = NULL;//���������� �ɷ� �˰� ����

	system(color);
}

int q5()
{
	int sum = 1;
	printf("1");
	for (int i = 2; i <= 100; i++)
	{
		printf("+%d", i);
		sum += i;
	}
	return sum;
}

int q6(int a, int b)
{
	int sum = a;
	printf("%d",a);
	for (int i = a; i < b; i++)
	{
		printf("*%d", i + 1);
		sum *= (i + 1);
	}
	printf("\n");
	return sum;
}
int q7_q5(int a, int b)
{
	int sum = a;
	printf("%d",a);
	for (int i = a; i <= b; i++)
	{
		printf("+%d", i);
		sum += i;
	}
	return sum;
}
void calc(int a, int b, char c)
{
	int result = -1;
	switch (c)
	{
	case '+':
		result = q7_q5(a, b);//���ϱ� �Լ�
		printf("\n��� %d\n", result);
		break;
	case '*':
	case 'x':
	case 'X':
		result = q6(a, b);//���ϱ�
		printf("��� %d\n", result);
		break;

	default:
		printf("%c�� �߸��� �����Դϴ�.\n", c);
		break;
	}
}
int main()
{
	//q4
	printf("q4 ù��° ����");
	char c1 = getchar();
	rewind(stdin);
	printf("q4 �ι�° ����");
	char c2 = getchar();
	q4(c1, c2);
	printf("q5\n");
	printf("\ntotal = %d\n", q5());
	int a, b;
	printf("q6\n");
	printf("���� �Է�(a b)");
	scanf_s("%d %d", &a, &b);
	printf("total=%d",q6(a, b));
	printf("\nq7\n");
	printf("���� 2�� �Է�\n");
	scanf_s("%d %d", &a, &b);
	rewind(stdin); //���ۿ� ����� ������ �� ������. 
	printf("���� �Է�(+ * x X �� �ϳ�)\n");
	//char c = getchar();
	char c;
	scanf_s("%c", &c, 1);
	calc(a, b, c);

	return 0;
}