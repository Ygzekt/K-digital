#include<stdio.h>
int main()
{
	//*pointer=�ּ�
	int a = 10;
	//lld=long longŸ��
	//%a=a�� �ּ� (���� ���� �޸� �󿡼� ��� ��ġ�� �ִ��� ǥ������

	printf("%d, %lld", a, &a);

	//������
	int* ptr_a = &a;
	double b = 3.14;
	double* b_ptr = &b;

	char c = 'A';
	char* ptr_c = &c;
	char* name = "�躸��";

	printf("%c,%s,%s", c, ptr_c, name);

	char myname[100] = "��ο�";

	printf("%s", myname);





	return 0;
}