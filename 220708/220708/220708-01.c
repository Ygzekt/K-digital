#include<stdio.h>
int main()
{
	//�������� ���̼��� *)�������� ���̼����� �� ����.
	char start[2048] = "1";//start : 
	//�а� ���ϱ� ������ 20��° ���� ã�� ��
	for (int i = 1; i <= 20; i++)
	{
		printf("%d��° : %s\n", i, start);
		char end[2048] = { NULL };//�а� ���Կ� �־ ������
		char num = start[0];//num:�д� ����
		int count = 0;//���� ���� ������ ����
		int k = 0;//end�� ���� ä�� ���� �� ��(������ų ��)
		//�������� �о� ���̱� ����
		for (int j = 0; start[j] != NULL; j++)
		{
			if (num != start[j])//�д� ���ڰ� ���Ҷ�
			{
				end[k] = num;
				k++;
				end[k] = count + '0';
				k++;
				num = start[j];
				count=1;
			}
			else //������
			{
				count++;
			}
		}
		end[k] = num;
		k++;
		end[k] = count + '0';
		k++;
		//end�� �ִ� �� start�� �ű�
		// for������ �Űܵ� �Ǵµ�...strcpy��� �Լ��ᵵ ��
		// strcpy(start, end); //end�� �ִ� �� start�� �ű�.
		int c = 0;
		for (c = 0; end[c] != NULL; c++)
		{
			start[c] = end[c];
		}
		start[c] = NULL;//���κ��� NULL�� �����ؾ� ��.
	}




	return 0;
}