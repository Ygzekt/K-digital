#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>

#define UP 87
#define DOWN 83
#define LEFT 65
#define RIGHT 68

int score = 0;
int board[4][4] = {
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0}
};

void new_num()
{
	int i, j;
	int cnt;
	int* p0[16] = { 0 };

	for (i = 0, cnt = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (board[i][j] == 0) {
				p0[cnt] = &board[i][j];
				cnt++;
			}
		}
	}
	*p0[rand() % (cnt)] = (rand() % 100 < 80) ? 2 : 4;
}
int main()
{
	int i, j, r;
	int act;
	//up
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (r = i; r >0; r--)
			{
				if (board[r][j] == 0 || board[r][j] > 10000)
					break;
				if (board[r - 1][j] != 0 && board[r - 1][j] != board[r][j])
					break;
				if (board[r - 1][j] == 0)
					board[r - 1][j] = board[r][j];
				else if (board[r - 1][j] == board[r][j]) 
				{
					board[r - 1][j] *= 2;
					board[r - 1][j] += 10000;

					score += 2 * (board[r][i]);
				}
				board[r][j] = 0;
				act++;
			}
		}
	break;
	}
	//down
	for (i = 0; i < 4; i++)
	{
		for (j = 2; j >=0; j--)
		{
			for (r = i; r <3; r++)
			{
				if (board[r][j] == 0 || board[r][j] >= 10000)
					break;
				if (board[r + 1][j] != 0 && board[r + 1][j] != board[r][j])
					break;
				if (board[r + 1][j] == 0)
					board[r + 1][j] = board[r][j];
				else if (board[r + 1][j] == board[r][j])
				{
					board[r + 1][j] *= 2;
					board[r+1][j] += 10000;

					score += 2 * (board[r][j]);
				}
				board[r][j] = 0;
				act++;
			}

		}
	break;
	}
	//left
	for (i = 0; i < 4; i++)
	{
		for (j = 1; j < 4; j++)
		{
			for (r = j; r > 0; r--)
			{
				if (board[i][r] == 0 || board[i][r] >= 10000)
					break;
				if (board[i][r - 1] != 0 && board[i][r - 1] != board[i][r])
					break;
				if (board[i][r - 1] == 0)
					board[i][r - 1] = board[i][r];
				else if (board[i][r - 1] == board[i][r])
				{
					board[i][r - 1] *= 2;
					board[i][r - 1] += 10000;

					score += 2 * (board[i][r]);
				}
				board[i][r] = 0;
				act++;
			}
		}
	}
	//right
	for (i = 0; i < 4; i++)
	{
		for (j = 2; j >=0; j--)
		{
			for (r = j; r < 3; r++)
			{
				if (board[i][r] == 0 || board[i][r] >= 10000)
					break;
				if (board[i][r + 1] != 0 && board[i][r + 1] != board[i][r])
					break;
				if (board[i][r + 1] == 0)
					board[i][r + 1] = board[i][r];
				else if (board[i][r - 1] == board[i][r])
				{
					board[i][r + 1] *= 2;
					board[i][r + 1] += 10000;

					score += 2 * (board[i][r]);
				}
				board[i][r] = 0;
				act++;
			}
		}
	}

	//임의의 수 10000만을 다시 빼주는 식
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (board[i][j] >= 10000)
				board[i][j] -= 10000;
		}
	}
	//액션이 있었던 경우에만 쓰는 식
	if (act > 0)
	{
		nuw_num();
		draw();
		check_game_over();
	}
	return 0;
}