#include<stdio.h>
#include"hd1.h"

int main()
{
	//1.����-1
	KBStudent k1 = { 100,100,"������" };
	//1.����-2
	KBStudent k2 = { .cscore = 100,.javascore = 100,.name = "������" };
	//1.����-3
	KBStudent k3;
	k3.cscore = 100;
	k3.javascore = 100;
	strcpy(k3.name, "�ٴٴ�");
	//1.�Է�
	KBStudent k4;
	scanf_s("%d %d", &k4.cscore, &k4.javascore);
	rewind(stdin);
	gets(k4.name);
	printf("%d %d %s", k4.cscore, k4.javascore, k4.name);

	KBStudent students[5];
	int csum = 0;
	int javasum = 0;
	double cavg, javaavg;
	int maxc = 0;
	int maxjava = 0;
	double avg_max = 0;
	int index_max = 0;//1�� �ε���(���)
	int index_max_c = 0;//1�� �ε���(c)
	int index_max_java = 0;//1�� �ε���(java)

	for (int i = 0; i < 5; i++)
	{
		rewind(stdin);
		printf("\n�̸���?");
		gets(students[i].name);
		printf("\nc,java ������?");
		scanf_s("%d %d", &students[i].cscore, &students[i].javascore);
	}
	for (int i = 0; i < 5; i++)
	{
		csum += students[i].cscore;
		javasum += students[i].javascore;
	}
	printf("c,java ������ �� �� %d %d\n", csum, javasum);
	printf("c,java ������ ��� %f %f\n", csum/5.0, javasum/5.0);
	maxc = students[0].cscore;
	maxjava = students[0].javascore;
	avg_max = (students[0].cscore + students[0].javascore) / 2.0;
	for (int i = 0; i < 5; i++)
	{
		if (maxc < students[i].cscore)
		{
			maxc = students[i].cscore;
			index_max_c = i;
		}
		if (maxjava < students[i].javascore)
		{
			maxjava = students[i].javascore;
			index_max_java = i;
		}
		if (avg_max < (students[i].cscore + students[i].javascore) / 2.0)
		{
			avg_max = (students[i].cscore + students[i].javascore) / 2.0;
			index_max = i;
		}
	}
	printf("c 1��:%s\n", students[index_max_c].name);
	printf("java 1��:%s\n", students[index_max_java].name);
	printf("��� 1��:%s\n", students[index_max].name);
	return 0;
}