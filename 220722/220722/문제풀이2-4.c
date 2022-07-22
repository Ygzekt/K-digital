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
		printf("사각형의 width와 height 입력하기");
		scanf_s("%d %d", &recs[i].width, &recs[i].height);
	}
	Rectangle maxRec = recs[0];
	for (int i = 1; i < 5; i++)
	{
		//2번에 대한 예외처리1
		//예외처리 없을 경우엔 if문만 지우기
		if (recs[i].width < 0 || recs[i].height < 0)
			continue;

		int area = recs[i].width * recs[i].height;
		int maxRecarea = maxRec.width * maxRec.height;
		if (maxRecarea < area) //넓이가 가장 큰걸로 교체
			maxRec = recs[i];
	}
	//2번에 대한 예외처리2(예외처리 없을 경우엔 if문만 지우기)
	if (maxRec.width < 0 && maxRec.height >= 0)
	{
		printf("가장 넓은 사각형의 width:%d, height:%d\n", maxRec.width, maxRec.height);
	}
	return 0;
}