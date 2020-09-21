#include <stdio.h>
#include <string.h>

int main()
{
	int islandcnt, bridgecnt;
	int bridge[101][101] = {}, bridgetemp[101][101];
	int islandcheck[101] = {};
	int temp1, temp2, hasfindbridge, breakedbridge = 0;
	int test, result;

	scanf("%d %d", &islandcnt, &bridgecnt);
	for (int i = 1; i <= bridgecnt; ++i)
	{
		scanf("%d %d", &temp1, &temp2);
		if (temp1 < temp2)
		{
			++bridge[temp1][temp2];
		}
		else
		{
			++bridge[temp2][temp1];
		}
	}
	memcpy(bridgetemp, bridge, sizeof(bridge));
	for (test = 1; test < islandcnt; ++test)
	{
		if (test != 1)
		{
			memcpy(bridge, bridgetemp, sizeof(bridgetemp));
		}
		else
		{
			if (islandcnt > bridgecnt)
			{
				result = 0;
				break;
			}
		}
		breakedbridge = 0;
		memset(islandcheck, 0, islandcnt + 1);
		while (1)
		{
			++islandcheck[test];
			hasfindbridge = 0;
			for (int i = 1; i <= islandcnt; ++i)
			{
				if (bridge[test][i] != 0)
				{
					hasfindbridge = 1;
					--bridge[test][i];
				}
				else if (bridge[i][test] != 0)
				{
					hasfindbridge = 1;
					--bridge[i][test];
				}
				if (hasfindbridge == 1)
				{
					++breakedbridge;
					test = i;
					break;
				}
			}
			if (hasfindbridge == 0) break;
		}
		result = 1;
		for (int i = 1; i <= islandcnt; ++i)
		{
			if (islandcheck[i] == 0)
			{
				result = 0;
				break;
			}
		}
		if (result != 0 && breakedbridge == bridgecnt)
		{
			result = 2;
			break;
		}
	}
	if (result == 2)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}