#include <stdio.h>

int main()
{
	int board[4][4] = {}, tempboard[4][4] = {};
	int isend;
	char direction, temp;
	scanf("%c*c", &direction, &temp);
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			scanf("%d", &board[i][j]);
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			switch (direction)
			{
			case 'U':
				tempboard[i][j] = board[i][j];
				break;
			case 'D':
				tempboard[3 - i][j] = board[i][j];
				break;
			case 'L':
				tempboard[j][3 - i] = board[i][j];
				break;
			case 'R':
				tempboard[3 - j][i] = board[i][j];
				break;
			default:
				break;
			}
		}
	}
	//방향으로 모두 변환
	while (1)
	{
		isend = 1;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				for (int k = i + 1; k < 4; ++k)
				{
					if (tempboard[i][j] == 0)
					{
						break;
					}
					else if (tempboard[k][j] == 0)
					{
						continue;
					}
					else if (tempboard[i][j] == tempboard[k][j])
					{
						isend = 0;
						tempboard[i][j] <<= 1;
						tempboard[k][j] = 0;
						break;
					}
					else
					{
						break;
					}
				}
			}
		}
		if (isend == 1) break;
	}
	//방향으로 정리
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (tempboard[i][j] == 0)
			{
				for (int k = i + 1; k < 4; ++k)
				{
					if (tempboard[k][j] == 0)
					{
						continue;
					}
					else
					{
						tempboard[i][j] = tempboard[k][j];
						tempboard[k][j] = 0;
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
			switch (direction)
			{
			case 'U':
				board[i][j] = tempboard[i][j];
				break;
			case 'D':
				board[3 - i][j] = tempboard[i][j];
				break;
			case 'R':
				board[j][3 - i] = tempboard[i][j];
				break;
			case 'L':
				board[3 - j][i] = tempboard[i][j];
				break;
			default:
				break;
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