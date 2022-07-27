#include<stdio.h>//선생님이 푼것.
int calcAge()
{
	int year;
	printf("몇년도에 태어남\n");
	scanf_s("%d", &year);
	return 2023 - year;
}
int main()
{
	int age = calcAge();
	printf("내 나이 %d살\n", age);
	//calcAge();
	return 0;
}