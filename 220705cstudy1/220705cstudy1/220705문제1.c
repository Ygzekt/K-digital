#include<stdio.h>
int main()
{
	/*1. ���̸� �Է��Ѵ�.
if������ ������ ���� ����ó���� �Ѵ�.
�׸��� �� �Ʒ� �޽����� switch������ �غ���. (���ϸ� if�ζ� �غ���)
���Ʊ� -> ��������
10�� -> �޽ĸԴ� ģ����
20�� -> û��
30�� -> ���߷�
40�� -> ������
�� �� -> ������
	*/
	int age;
	printf("���� �Է� :");
	scanf_s("%d\n", &age);
	if (age < 0)
		printf("����");
	else
	{
		switch (age)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				printf("���Ʊ�");
				break;
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
				printf("�޽ĸԴ� ģ����");
				break;
			case 20:
			case 21:
			case 22:
			case 23:
			case 24:
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
				printf("û��");
				break;
			case 30:
			case 31:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
			case 37:
			case 38:
			case 39:
				printf("���߷�");
				break;
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 47:
			case 48:
			case 49:
				printf("������");
				break;

		default:
			printf("������");
			break;
		}
	}
	/*2. ������ �Է¹ް� �׿� ���� ��� ����ϱ�
���� -> ����
1.0 �̸� -> F
2.0 �̸� -> D
3.0 �̸� -> C
4.0 �̸� -> B
4.5 �̸� -> A
4.5 -> A+
4.5 �ʰ� -> ����
	*/
	int score = 0;
	printf("���� �Է� :");
	scanf_s("%d\n", &score);
	if (score < 0);
	printf("����");
	score = score / 2;
	switch (score / 10) 
	{
	case 10:
	case 9:
		printf("A���� �Դϴ�\n"); 
		break;
	case 8: 
		printf("B���� �Դϴ�\n"); 
		break;
	case 7: 
		printf("C���� �Դϴ�\n"); 
		break;
	case 6: 
		printf("D���� �Դϴ�\n"); 
		break;
	default: 
		printf("F���� �Դϴ�\n");
		break;
	}

}






	return 0;
}