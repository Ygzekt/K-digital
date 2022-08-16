#include<stdio.h>
#include<time.h>

int main()
{
	int arr[6];
	srand(time(NULL));

	for (int i = 0; i < 6; i++)
	{
		arr[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				
			}
			arr[i] = rand() % 45 + 1;
		}
		printf("%d번 번호 : %d\n", i+1, arr[i]);
	}
	for (int i = 0; i < 1; i++)
	{
		arr[i] = rand() % 45 + 1;
		if (arr[i] == arr[i])
		{
			arr[i] = rand() % 45 + 1;
		}
		printf("보너스 번호: %d", arr[i]);
	}
	return 0;
}