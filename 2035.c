#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int n, cnt = 0;
	bool* seat;
	scanf("%d", &n);

	seat = (bool*)calloc(n, sizeof(bool));
	for (int i = 0; i < n; i++) scanf("%d", &seat[i]);
	if (n == 1)
	{
		if (seat[0] == false) cnt = 1;
		printf("%d", cnt);
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (seat[i] == true) continue;
		else
		{
			if (i == 0)
			{
				if (seat[i + 1] == false) cnt++;
			}
			else if (i == n - 1)
			{
				if (seat[i - 1] == false) cnt++;
			}
			else
			{
				if (seat[i - 1] == false && seat[i + 1] == false) cnt++;
			}
		}
	}
	printf("%d", cnt);
	free(seat);
	return 0;
}