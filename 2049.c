#include <stdio.h>

int main()
{
	int board[4][4] = {};
	int isend;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			scanf("%d", &board[i][j]);
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			for (int k = i + 1; k < 4; ++k)
			{
				if (board[i][j] == 0)
				{
					break;
				}
				else if (board[k][j] == 0)
				{
					continue;
				}
				else if (board[i][j] == board[k][j])
				{
					isend = 0;
					board[i][j] <<= 1;
					board[k][j] = 0;
					break;
				}
				else
				{
					break;
				}
			}
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (board[i][j] == 0)
			{
				for (int k = i + 1; k < 4; ++k)
				{
					if (board[k][j] == 0)
					{
						continue;
					}
					else
					{
						board[i][j] = board[k][j];
						board[k][j] = 0;
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%d", board[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}