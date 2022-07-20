#include<stdio.h>
int main()
{
//1.5개의 숫자를 입력받고 그 중에서 가장  큰 숫자와 작은 숫자를 찾으세요.
	int a[Size];
	printf("5개의 숫자를 입력하세요.");
	for (int i = 0; i < Size; i++)
	{
		scanf_s("%d\n", &a[i]);
	}

	int min = a[0];
	int max = a[0];
	for (int i = 0; i < Size; i++)
	{
		if (a[i] < min) min = a[i];
		if (a[i] > max) min = a[i];
	}
	printf("max = %d\n", max);
	printf("min = %d\n", min);



//2.문자열 2개를 입력받고, 이 2개각 같은지 다른지 여부를 출력해주세요.
	char s1[10];
	char s2[10];

	printf("문자열을 두 개 입력하세요: ");
	scanf("%s %s", s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);



	return 0;
}