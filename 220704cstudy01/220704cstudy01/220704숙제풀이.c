#include<stdio.h>
int main()
{
	//1.
	for (char c = 'A'; c <= 'Z'; c++)
		printf("%c\n", c);
	//2.
	for (char c = 'a'; c <= 'z'; c++)
		printf("%c\n", c);
	
	//3.
	for (char c = 'A'; c <= 'z'; c++)
	{
		//[\]^_` �̰� ��������� ��
		if(c<='Z' || c>='a') //�ƽ�Ű�ڵ� ǥ��
		printf("%c\n", c);//���ĺ����� ũ�ų� ���� �͵� ���� �����
	}


	return 0;
}