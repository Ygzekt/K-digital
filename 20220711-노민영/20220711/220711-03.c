#include<stdio.h>
#include"Mytest01.h"
#include"yourtest.h"
void test(); //����(��ȯ�� �Ű����� ����)
int main()
{
	test();
	mytest();// mytest01.h���� �о�� �Լ�
	yourTypeTest(10);
}
void test()//����
{
	printf("�Լ� �׽�Ʈ");
}