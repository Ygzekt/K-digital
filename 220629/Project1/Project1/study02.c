#include<stdio.h>
int main()
{
	//���� �Է� 2���� ����� ����.

	char c;
	printf("�� ����� ���� +? -? 0?\n");
	scanf_s("%c", &c, 1);
	printf("���� �� ����� %c�Դϴ�.\n", c);
	rewind(stdin); //���� ���� û��
	scanf_s("%c", &c, 1);
	printf("c = %c\n", c);

	rewind(stdin);
	printf("�� �̸��� ù���ڴ�?");
	c = getchar(); //1���ڸ� �Է¹޴� ��
	printf("%c\n", c);
	printf("�� �̸��� �����ڴ�?");
	rewind(stdin);
	c = getchar();
	printf("%c\n", c);

	char name[100];//name������ 100byte ���尡��
	printf("�̸���?");
	scanf_s("%s", name, sizeof(name));
	printf("�� �̸��� %s�Դϴ�.\n", name);
	rewind(stdin); //���ڿ��� ���������� ������ �� �Է¹��� �� rewind����� ��.

	char mbti[100];
	printf("mbti?");
	gets(mbti); //��������� ���� ����
	//scanf_s���� �����̽��ٰ� ©��
	printf("�� mbti�� %s�Դϴ�.\n", mbti);




	return 0;
}