#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	bool** ladder;
	int k, n, line1, line2, p;
	scanf("%d %d", &k, &n);

	ladder = (bool**)calloc(k, sizeof(bool*));
	for (int i = 0; i < k; i++)
	{
		ladder[i] = (bool*)calloc(n, sizeof(bool));
	}
	for (int i = 0; i < k; i++)
		for (int j = 0; j < n; j++)
			ladder[i][j] = false;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &line1, &line2);
		line1--;
		line2--;
		ladder[line1][i] = ladder[line2][i] = true;
	}
	scanf("%d", &p);
	p--;
	for (int i = 0; i < n; i++)
	{
		if (ladder[p][i] == false) continue;
		else if (ladder[p][i] == true)
		{
			if (p == 0) p += 1;
			else if (p == k - 1) p -= 1;
			else
			{
				if (ladder[p + 1][i] == true) p += 1;
				else if(ladder[p - 1][i] == true) p -= 1;
			}
		}
	}
	p++;
	printf("%d", p);
	for (int i = 0; i < k; i++)
	{
		free(ladder[i]);
	}
	free(ladder);
	return 0;
}