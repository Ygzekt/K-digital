#include<stdio.h>
int main()
{
	//1��
	
	int x, y;
	printf("x�� y����?");
	scanf_s("%d %d", &x, &y);
	if (x > 0)
	{

		if (y > 0)
			printf("\n1��и��̴�.");
		else (y < 0)
			printf()

	}
	//3��
	int h, m;//���� 5	6,9��
	printf("\n�ð��� ���� �Է��ϼ���.\n");
	scanf_s("%d %d", &h, &m);

	if (m < 45)
	{
		printf("m���� ���� �︰��.");
	}
	else  // if���� �� ����� ���� �ƴ� ���
	{
		printf("m���� Ŀ �ȿ︰��.");
	}

	return 0;
}