#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ESC 27

#define MAP_ADJ_X 25
#define MAP_ADJ_Y 20

void gotoxy(int x, int y) 
{ //����ͻ��� x,y ��ǥ�� �̵���Ű�� �Լ� 
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
    gotoxy(MAP_ADJ_X, MAP_ADJ_Y);
    printf("*");








    return 0;
}
