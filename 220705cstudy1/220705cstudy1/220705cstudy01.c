#include<stdio.h>
int main()
{
	//*pointer=주소
	int a = 10;
	//lld=long long타입
	//%a=a의 주소 (변수 ㅁ가 메모리 상에서 어느 위치에 있는지 표시해줌

	printf("%d, %lld", a, &a);

	//포인터
	int* ptr_a = &a;
	double b = 3.14;
	double* b_ptr = &b;

	char c = 'A';
	char* ptr_c = &c;
	char* name = "김보규";

	printf("%c,%s,%s", c, ptr_c, name);

	char myname[100] = "노민영";

	printf("%s", myname);





	return 0;
}