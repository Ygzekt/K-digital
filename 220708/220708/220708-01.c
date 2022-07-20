#include<stdio.h>
int main()
{
	//선생님의 개미수열 *)오세룡의 개미수열이 더 좋음.
	char start[2048] = "1";//start : 
	//읽고 말하기 수열의 20번째 값을 찾는 것
	for (int i = 1; i <= 20; i++)
	{
		printf("%d번째 : %s\n", i, start);
		char end[2048] = { NULL };//읽고 말함에 있어서 누적용
		char num = start[0];//num:읽는 숫자
		int count = 0;//내가 읽은 문자의 개수
		int k = 0;//end에 문자 채워 넣을 때 씀(누적시킬 때)
		//본격적을 읽어 들이기 시작
		for (int j = 0; start[j] != NULL; j++)
		{
			if (num != start[j])//읽는 숫자가 변할때
			{
				end[k] = num;
				k++;
				end[k] = count + '0';
				k++;
				num = start[j];
				count=1;
			}
			else //같을때
			{
				count++;
			}
		}
		end[k] = num;
		k++;
		end[k] = count + '0';
		k++;
		//end에 있는 걸 start로 옮김
		// for문으로 옮겨도 되는데...strcpy라는 함수써도 됨
		// strcpy(start, end); //end에 있는 걸 start로 옮김.
		int c = 0;
		for (c = 0; end[c] != NULL; c++)
		{
			start[c] = end[c];
		}
		start[c] = NULL;//끝부분을 NULL로 봉합해야 함.
	}




	return 0;
}