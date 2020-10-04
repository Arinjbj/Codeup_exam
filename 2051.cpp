#include <iostream>
using namespace std;

int main()
{
	int board[4][4] = {};
	int fourtiles, temp, sum = 0;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cin >> board[i][j];
		}
	}
	cin >> fourtiles;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (board[i][j] == 0 || board[i][j] == 2)
			{
				continue;
			}
			else
			{
				temp = board[i][j];
				while (1)
				{
					sum += temp;
					board[i][j] >>= 1;
					if (board[i][j] <= 2) break;
				}
			}
		}
	}
	sum -= fourtiles * 4;
	cout << sum;
	return 0;
}