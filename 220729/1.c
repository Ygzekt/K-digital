#include<stdio.h>
//1
struct Game2d
{
	int x;
	int y;
};
int main()
{

	struct Game2d p1={10,20	};
	//printf("%d\n", sizeof(p1));
	//������:8
	//����:4����Ʈ�� �� ������ �� �� ����
	struct Game2d p2 = { .x = 10,.y=20 };
	struct Game2d p3;
	p3.x = 10;
	p3.y = 20;
	struct Game2d p4;
	scanf_s("%d %d", &p4.x, &p4.y);
	printf("������ ��ġ %d %d\n", p4.x, p4.y);
	return 0;
}