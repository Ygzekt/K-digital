#include<stdio.h>
int main()
{
	
	//1��
	if (0)
	{
		int x, y;
		printf("x,y�� �Է�");
		scanf_s("%d %d", &x, &y);

		if (x > 0 && y > 0)
			printf("1");
		else if (x < 0 && y > 0)
			printf("2");
		else if (x > 0 && y < 0)
			printf("3");
		else if (x < 0 && y < 0)
			printf("4");
		else
			printf("0");
	}

	//2�� ���ڷ� �����ϸ� �ȵǰų�
	//���������� �ȵǴ� ���װ� �߻�		
#pragma region �ι�° ����	
	{printf("���� �Է�");
	int age;
	scanf_s("%d", &age);
	if (age < 0 || age > 200)
		printf("\nŸ�뽺\n");
	else
	{
		if (age < 20)//age�� 0�̻��̶�� �� ������
			printf("\n�̼�����\n");
		else if (age >= 20 && age <= 50)
			printf("\n��ȸ�� ������\n");
		else if (age <= 70)//51~70������
			printf("\n������\n");
		else if (age >= 71)//else�� ������ ��
			printf("\n������ ������\n");
		//else if�� ������ �ȴ�. ������ else �� �ᵵ ��.

	}}
#pragma endregion

	
	
	//3��
	int h, m;
	printf("�ð� �Է�");
	scanf_s("%d", &h);

	INPUT_TIME://<-������ �̸����� �Է��ص� ��.
	printf("�ð� �Է���");

	scanf_s("%d", &h);

	if (h >= 24)
	{
		printf("\n���� �ʹ� ũ�ϱ� �ٽ� �Է��ϼ���.\n");
		goto INPUT_TIME; //goto�� �ǵ��� ��������. ���� ȥ����. �ٵ� ���ϴ� ����� ��¥ �� ���� �׷����ʿ��� �̰� ��¿ �� ���� ���� ��찡 �ִ�.
	}

	h = h % 24; //�ð��� 0�ú��� 23�ñ����̹Ƿ� �ʹ� ū �ð��� �Է��ص� 24�� ���� �������� ���� �ٲٰ� �Ǹ� h���� ������ 0���� 23���� ���´�.

	h %= 24; //���� �ڵ�� �Ȱ���

	printf("�� �Է�");
	scanf_s("%d", &m);

	m %= 60; //Ȥ�� 60 ������ 60���� ���� �������� �ٲ������.

	printf("���� 45���� �ð��������ص帮�ڽ��ϴ�.\n");

	m = m - 45; // m-=45;
	if (m < 0) 
	{
		m + -60;
		h -= 1; // h = h-1;
		if (h < 0)
			h += 24;
	}
	printf("�˶��ð� : %d�� %d��\n", h, m);



	return 0;

}