#include <stdio.h>
#include <string.h>

int main()
{
	int islandcnt, bridgecnt;
	int temp1, temp2;
	int islands[101] = {};
	int isodd = 0, result = 1;
	scanf("%d %d", &islandcnt, &bridgecnt);
	for (int i = 1; i <= bridgecnt; ++i)
	{
		scanf("%d %d", &temp1, &temp2);
		++islands[temp1];
		++islands[temp2];
	}
	for (int i = 1; i <= islandcnt; ++i)
	{
		if (islands[i] == 0 || isodd >= 3)
		{
			result = 0;
			break;
		}
		else if ((islands[i] & 1) == 1)
		{
			++isodd;
		}
	}
	if (isodd == 1) result = 0;
	if (result == 0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}