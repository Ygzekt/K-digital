#include<stdio.h>
struct MyStruct
{
	int width;
	int height;
}typedef Rectangle;
int main()
{
	Rectangle recs[5];
	for (int i = 0; i < 5; i++)
	{
		printf("�簢���� width�� height �Է��ϱ�");
		scanf_s("%d %d", &recs[i].width, &recs[i].height);
	}
	Rectangle maxRec = recs[0];
	for (int i = 1; i < 5; i++)
	{
		//2���� ���� ����ó��1
		//����ó�� ���� ��쿣 if���� �����
		if (recs[i].width < 0 || recs[i].height < 0)
			continue;

		int area = recs[i].width * recs[i].height;
		int maxRecarea = maxRec.width * maxRec.height;
		if (maxRecarea < area) //���̰� ���� ū�ɷ� ��ü
			maxRec = recs[i];
	}
	//2���� ���� ����ó��2(����ó�� ���� ��쿣 if���� �����)
	if (maxRec.width < 0 && maxRec.height >= 0)
	{
		printf("���� ���� �簢���� width:%d, height:%d\n", maxRec.width, maxRec.height);
	}
	return 0;
}