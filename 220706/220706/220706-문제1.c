#include<stdio.h>
int main()
{
//1.5���� ���ڸ� �Է¹ް� �� �߿��� ����  ū ���ڿ� ���� ���ڸ� ã������.
	int a[Size];
	printf("5���� ���ڸ� �Է��ϼ���.");
	for (int i = 0; i < Size; i++)
	{
		scanf_s("%d\n", &a[i]);
	}

	int min = a[0];
	int max = a[0];
	for (int i = 0; i < Size; i++)
	{
		if (a[i] < min) min = a[i];
		if (a[i] > max) min = a[i];
	}
	printf("max = %d\n", max);
	printf("min = %d\n", min);



//2.���ڿ� 2���� �Է¹ް�, �� 2���� ������ �ٸ��� ���θ� ������ּ���.
	char s1[10];
	char s2[10];

	printf("���ڿ��� �� �� �Է��ϼ���: ");
	scanf("%s %s", s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);



	return 0;
}