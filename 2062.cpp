#include <iostream>
using namespace std;

int cnt;

void discovery(int x, int y, const int num, int checkbox[][21], int map[][21])
{
	if (map[x][y] != num || checkbox[x][y] == 1) {}
	else
	{
		++cnt;
		checkbox[x][y] = 1;
		discovery(x + 1, y, num, checkbox, map);
		discovery(x - 1, y, num, checkbox, map);
		discovery(x, y + 1, num, checkbox, map);
		discovery(x, y - 1, num, checkbox, map);
	}
}

int findarea(const int m, const int n, const int num, int map[][21])
{
	int result = 0;
	int checkbox[21][21] = { 0 };
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (checkbox[i][j] == 1 || map[i][j] != num) continue;
			else
			{
				cnt = 0;
				discovery(i, j, num, checkbox, map);
				if (cnt > result) result = cnt;
			}
		}
	}
	return result;
}

int main()
{
	int result[10] = { 0 };
	int map[21][21];
	for (int i = 0; i < 21; ++i)
		for (int j = 0; j < 21; ++j)
			map[i][j] = -1;
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> map[i][j];
	for (int i = 0; i < 10; ++i)
	{
		result[i] = findarea(m, n, i, map);
		if (result[i] == 0) continue;
		cout << i << " " << result[i] << endl;
	}
	return 0;
}