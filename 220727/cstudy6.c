#include<stdio.h>//����
void printfYourName(char n[])
{
	printf("����� �̸��� %s�Դϴ�.\n", n);
}
char* printABC()
{
	return "abc\n";
}
//�Ű��������� ���ڿ��� �Է¹޾Ƽ� �����ϰ� ���� ��?
char* retnMYpointer()
{
	//���ڿ��� �Է��� �� �����ϰ� �ʹٸ� �տ� static�� �ٿ���
	static char mbti[5]; //static�� ���̸� �ߵ�...��?
	printf("mbti?");
	gets(mbti);
	return mbti;
}
char* retnMymbti(char* mbti)
{
	return mbti; //�Ű������� ���� �� �״�� �����غ���
}

int main()
{
	printf("�̸��Է�");
	char name[100];
	gets(name);
	printfYourName(name);

	printf("%s", printABC());
	//�迭 = ������
	//name �迭�� name �����Ͷ�� ���� �ȴ�.
	printf("%s\n", retnMYpointer());
	printf("%s\n", retnMymbti("infp"));
	printf("%s\n", retnMymbti(name));
	return 0;
}